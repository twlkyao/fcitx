/***************************************************************************
 *   Copyright (C) 2010~2010 by CSSlayer                                   *
 *   wengxt@gmail.com                                                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef _FCITX_CUTILS_H_
#define _FCITX_CUTILS_H_

#include <stddef.h>

typedef enum ErrorLevel
{
    DEBUG,
    ERROR,
    INFO,
    FATAL,
    WARNING
} ErrorLevel;

char *trim(char *s);
void *fcitx_malloc0(size_t bytes);

#define FcitxLog(e, fmt...) FcitxLogFunc(e, __FILE__, __LINE__, fmt)
void FcitxLogFunc(ErrorLevel, const char* filename, const int line, const char* fmt, ...);

#endif