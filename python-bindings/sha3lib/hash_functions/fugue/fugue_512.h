#ifndef _FUGUE_512_H
#define _FUGUE_512_H

#include "fugue_t.h"
#include "aestab_t.h"

int fugue_update_512 (hashState *hs, const char *in, uint_64t len);
int fugue_final_512  (hashState *hs, char *out);

#endif
