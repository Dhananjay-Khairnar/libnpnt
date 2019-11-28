/*
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at http://mozilla.org/MPL/2.0/. 
 */


 /**
 * @file    inc/log_iface.h
 * @brief   Interface definitions for NPNT Breach logging
 * @{
 */


#include <defines.h>

#ifdef __cplusplus
extern "C"
{
#endif
int npnt_start_logger(npnt_s* handle, time_t unix_ts, float lat, float lon, float alt);
int npnt_stop_logger(npnt_s* handle, time_t unix_ts, float lat, float lon, float alt);
int npnt_log_gps_fail_event(npnt_s* handle, time_t unix_ts, float lat, float lon, float alt);
int npnt_log_fence_breach_event(npnt_s* handle, time_t unix_ts, float lat, float lon, float alt);
int npnt_log_time_breach_event(npnt_s* handle, time_t unix_ts, float lat, float lon, float alt);

#ifdef __cplusplus
} // extern "C"
#endif

 /** @} */
