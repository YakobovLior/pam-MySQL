/*
 * PAM module for MySQL
 *
 * Copyright (C) 1998-2005 Gunay Arslan and the contributors.
 * Copyright (C) 2015-2017 Nigel Cunningham and contributors.
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * Original Version written by: Gunay ARSLAN <arslan@gunes.medyatext.com.tr>
 * This version by: James O'Kane <jo2y@midnightlinux.com>
 * Modifications by Steve Brown, <steve@electronic.co.uk>
 * B.J. Black, <bj@taos.com>
 * Kyle Smith, <kyle@13th-floor.org>
 * Patch integration by Moriyoshi Koizumi, <moriyoshi@at.wakwak.com>,
 * based on the patches by the following contributors:
 * Paul Bryan (check_acct_mgmt service support)
 * Kev Green (Documentation, UNIX socket option)
 * Kees Cook (Misc. clean-ups and more)
 * Fredrik Rambris (RPM spec file)
 * Peter E. Stokke (chauthtok service support)
 * Sergey Matveychuk (OpenPAM support)
 * Package unmaintained for some years; now taken care of by Nigel Cunningham
 * https://github.com/NigelCunningham/pam-MySQL
 */

#include "common.h"

void pam_mysql_close_db(pam_mysql_ctx_t *);
pam_mysql_err_t pam_mysql_open_db(pam_mysql_ctx_t *);
pam_mysql_err_t pam_mysql_quick_escape(pam_mysql_ctx_t *ctx, pam_mysql_str_t *append_to, const char *val, size_t val_len);
pam_mysql_err_t pam_mysql_converse(pam_mysql_ctx_t *ctx, char ***pretval,
 pam_handle_t *pamh, size_t nargs, ...);
