/*
 *  R.app : a Cocoa front end to: "R A Computer Language for Statistical Data Analysis"
 *  
 *  R.app Copyright notes:
 *                     Copyright (C) 2004-16  The R Foundation
 *                     written by Stefano M. Iacus and Simon Urbanek
 *
 *                  
 *  R Copyright notes:
 *                     Copyright (C) 1995-1996   Robert Gentleman and Ross Ihaka
 *                     Copyright (C) 1998-2001   The R Development Core Team
 *                     Copyright (C) 2002-2004   The R Foundation
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  A copy of the GNU General Public License is available via WWW at
 *  http://www.gnu.org/copyleft/gpl.html.  You can also obtain it by
 *  writing to the Free Software Foundation, Inc., 59 Temple Place,
 *  Suite 330, Boston, MA  02111-1307  USA.
 *
 *  Created by Simon Urbanek on 2/8/05.
 *
 */

#ifndef __RGUI_H__
#define __RGUI_H__

/* GUI version */
#define R_GUI_VERSION_STR "1.82" /* it must be a string, but should parse to a valid real number - also change in InfoPlist.h */

/* macros for translatable strings */
#define NLS(S) NSLocalizedString(S,@"")
#define NLSC(S,C) NSLocalizedString(S,C)

/* macros for debug messages */
#ifndef SLog
#if defined DEBUG_RGUI && defined PLAIN_STDERR
#define SLog(X,...) NSLog(X, ## __VA_ARGS__)
#else
#define SLog(X,...)
#endif
#endif

extern NSString *Rapp_R_version_short;
extern NSString *Rapp_R_version;

extern double os_version;
extern char *os_version_string;

#endif
