// _Stod function
#include <yvals.h> // include first, for native shared

#include "xmath.h"
#include "xxcctype.h"
#include "xxdftype.h"
#include <stdlib.h>

_CRTIMP2_PURE FTYPE __CLRCALL_PURE_OR_CDECL _Stodx(const CTYPE* s, CTYPE** endptr, long pten, int* perr)
#include "xxstod.h"

    _CRTIMP2_PURE FTYPE __CLRCALL_PURE_OR_CDECL
    _Stod(const CTYPE* s, CTYPE** endptr, long pten) { // convert string, discard error code
    return _Stodx(s, endptr, pten, 0);
}

/*
 * Copyright (c) by P.J. Plauger. All rights reserved.
 * Consult your license regarding permissions and restrictions.
V6.50:0009 */
