/* 
 * install.h -- install.c header
 * 
 * Copyright (C) 2012  Martin Wolters
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to 
 * the Free Software Foundation, Inc.
 * 51 Franklin Street, Fifth Floor
 * Boston, MA  02110-1301, USA
 * 
 */


#ifndef INSTALL_H_
#define INSTALL_H_

#define INSTALL_FILENAME "logsrv32.exe"
#define SERVICE_NAME "Logging service"

int ilevel;

void GetIlevel(void);
void TryRaiseIlevel(void);

#endif