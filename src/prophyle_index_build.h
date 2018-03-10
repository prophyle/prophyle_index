/*
  prophyle_index build command high-level implementation.
  Author: Kamil Salikhov <salikhov.kamil@gmail.com>
  Licence: MIT
*/

#ifndef PROPHYLE_INDEX_BUILD_H
#define PROPHYLE_INDEX_BUILD_H

#include "prophyle_utils.h"

void build_index(const char *prefix, const prophex_opt_t *opt, int sa_intv);
int debwtupdate(const char* bwt_input_file, const char* bwt_output_file);
int bwt2fa(const char* prefix, const char* output_filename);

#endif //PROPHYLE_INDEX_BUILD_H