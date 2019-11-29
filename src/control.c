/*
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at http://mozilla.org/MPL/2.0/. 
 */

#include <control_iface.h>

int8_t npnt_init_handle(npnt_s *handle)
{
    if (!handle) {
        return NPNT_UNALLOC_HANDLE;
    }
    handle->pa_params.parsed_permart = NULL;
    handle->pa_params.raw_permart = NULL;
    handle->pa_params.raw_permart_len = 0;
    return 0;
}


int8_t npnt_reset_handle(npnt_s *handle)
{
    if (!handle) {
        return NPNT_UNALLOC_HANDLE;
    }

    if (handle->pa_params.raw_permart) {
        free(handle->pa_params.raw_permart);
    }
    
    if (handle->pa_params.parsed_permart) {
        free(handle->pa_params.parsed_permart);
    }
    
    if (handle->fence.vertlat) {
        free(handle->fence.vertlat);
    }

    if (handle->fence.vertlon) {
        free(handle->fence.vertlon);
    }

    if (handle->flight_params.uinNo) {
        handle->flight_params.uinNo = NULL;
    }

    if (handle->flight_params.adcNumber) {
        handle->flight_params.adcNumber = NULL;
    }

    if (handle->flight_params.ficNumber) {
        handle->flight_params.ficNumber = NULL;
    }

    memset(handle, 0, sizeof(npnt_s));

    return 0;
}
