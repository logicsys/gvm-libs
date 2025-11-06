/* SPDX-FileCopyrightText: 2015-2023 Greenbone AG
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

/**
 * @file
 * @brief SSH related API.
 */

#ifndef _GVM_UTIL_SSHUTILS_H
#define _GVM_UTIL_SSHUTILS_H

#include <libssh/libssh.h>

char *
gvm_ssh_pkcs8_decrypt (const char *, const char *);

char *
gvm_ssh_public_from_private (const char *, const char *);

int
gvm_ssh_private_key_info (const char *, const char *, const char **, char **);

int
gvm_ssh_apply_user_config (ssh_session, const char *);

#endif /* not _GVM_UTIL_SSHUTILS_H */
