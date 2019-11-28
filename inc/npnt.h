/*
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at http://mozilla.org/MPL/2.0/. 
 */
 /**
 * @file    inc/npnt.h
 * @brief   Common Headers for NPNT library
 * @{
 */
#include <defines.h>
#include <log_iface.h>
#include <security_iface.h>
#include <control_iface.h>

#ifdef __cplusplus
extern "C"
{
#endif

//Common helper headers, to be defined by user
void reset_sha256(npnt_sha_t* sha_handler);
void update_sha256(npnt_sha_t* sha_handler, const char* data, uint16_t data_len);
void final_sha256(npnt_sha_t* sha_handler, char* hash);
bool open_logfile(npnt_s *handle);
bool write_logfile(npnt_s *handle, const char* data, uint32_t len);
bool close_logfile(npnt_s *handle);
bool sign_data_with_self_key(uint8_t* data, uint32_t len, uint8_t *signature);
bool record_lastloghash(uint8_t* data, uint8_t data_len);

#ifdef __cplusplus
} // extern "C"
#endif
