/*
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at http://mozilla.org/MPL/2.0/. 
 */

#include <stdint.h>
#include <defines.h>

#ifdef __cplusplus
extern "C"
{
#endif
 /**
 * @file    inc/log_iface.h
 * @brief   Interface definitions for NPNT Breach logging
 * @{
 */

// User Implemented Methods
/**
 * @brief   Checks if the raw data is authentic.
 * @details Implementer of this method needs to check the authenticity
 *          of raw data with signature against the public key provided 
 *          by DGCA Server.
 *
 * @param[in] npnt_handle        npnt handle
 * @param[in] raw_data           signed raw data to be authenticated
 * @param[in] raw_data_len       signed raw data to be authenticated
 * @param[in] signature          signature of signed raw data
 * @param[in] signature_len      length of signature
 * 
 * @return           Errcode of authentication check, 0 if authentication was successful
 * @retval 0         Successful Authentication
 *
 * @iclass security_iface
 */
int npnt_check_authenticity(npnt_s *handle, const char* hashed_data, uint16_t hashed_data_len, const uint8_t* signature, uint16_t signature_len);


#ifdef __cplusplus
} // extern "C"
#endif
 /** @} */
