/* Header file for GDB command decoding library.

   Copyright (C) 2000-2024 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef CLI_DUMP_H
#define CLI_DUMP_H

#include "cli/cli-decode.h"
#include "cli/cli-cmds.h"
#include "value.h"
#include "completer.h"
#include <ctype.h>
#include "target.h"
#include "readline/tilde.h"
#include "gdbcore.h"
#include "cli/cli-utils.h"
#include "gdb_bfd.h"
#include "gdbsupport/filestuff.h"
#include "gdbsupport/byte-vector.h"
#include "gdbarch.h"
#include "inferior.h"

void dump_memory_to_file (const char *cmd, const char *mode, const char *file_format);
#endif /* CLI_DUMP_H */
