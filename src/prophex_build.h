/*
  prophex build command high-level implementation.
  Author: Kamil Salikhov <salikhov.kamil@gmail.com>
  Licence: MIT
*/

#ifndef PROPHEX_BUILD_H
#define PROPHEX_BUILD_H

#include "prophex_utils.h"

void build_index(const char *prefix, const prophex_opt_t *opt, int sa_intv);
int bwtdowngrade(const char* bwt_input_file, const char* bwt_output_file);

#endif //PROPHEX_BUILD_H