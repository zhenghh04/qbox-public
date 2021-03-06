////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2008 The Regents of the University of California
//
// This file is part of Qbox
//
// Qbox is distributed under the terms of the GNU General Public License
// as published by the Free Software Foundation, either version 2 of
// the License, or (at your option) any later version.
// See the file COPYING in the root directory of this distribution
// or <http://www.gnu.org/licenses/>.
//
////////////////////////////////////////////////////////////////////////////////
//
// uuid_str.C
//
////////////////////////////////////////////////////////////////////////////////

#if USE_UUID
#include <uuid/uuid.h>
#include "uuid_str.h"
using namespace std;

std::string uuid_str(void)
{
  unsigned char uuid_c[16];
  char s[36];

  // generate uuid
  uuid_generate_time(uuid_c);

  // convert to string
  uuid_unparse(uuid_c,s);

  return string(s);
}
#endif
