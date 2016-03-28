/* brig-module-handler.cc -- brig module directive handling
   Copyright (C) 2016 Free Software Foundation, Inc.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it under
   the terms of the GNU General Public License as published by the Free
   Software Foundation; either version 3, or (at your option) any later
   version.

   GCC is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
   for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */
/**
 * @author pekka.jaaskelainen@parmance.com for General Processor Tech. 2016
 */
#include "brig-code-entry-handler.h"

size_t
brig_directive_module_handler::operator() (const BrigBase *base)
{
  const BrigDirectiveModule* mod = (const BrigDirectiveModule*)base;
  parent_.m_module_name = parent_.get_string (mod->name).substr(1);
  return base->byteCount;
}