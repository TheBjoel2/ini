/**
 * Copyright (c) 2016 rxi
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the MIT license. See `ini.c` for details.
 */

#ifndef INI_H
#define INI_H

#define INI_VERSION "0.1.1"

typedef struct ini_t ini_t;

inline ini_t*      ini_load(const char *filename);
inline void        ini_free(ini_t *ini);
inline const char* ini_get(ini_t *ini, const char *section, const char *key);
inline int         ini_sget(ini_t *ini, const char *section, const char *key, const char *scanfmt, void *dst);

#include "ini.c"

#endif
