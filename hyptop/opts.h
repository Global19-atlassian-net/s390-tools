/*
 * hyptop - Show hypervisor performance data on System z
 *
 * Command line parsing
 *
 * Copyright IBM Corp. 2010, 2017
 *
 * s390-tools is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See LICENSE for details.
 */

#ifndef OPTS_H
#define OPTS_H

#include "hyptop.h"

extern void opts_parse(int argc, char *argv[]);
extern void opts_iterations_next(void);
extern int opts_sys_specified(struct hyptop_win *win, const char* sys_name);
extern void opt_verify_systems(void);

#endif /* OPTS_H */
