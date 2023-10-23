// SPDX-License-Identifier: MIT
// Copyright (C) 2023 defg43
// https://github.com/defg43/

#ifndef LOOP_H
#define LOOP_H

#include <stdio.h>
#include <time.h>

#define loop for(;;)
#define repeat(num) for(int _hidden_iteartor_i_dont_touch = 0; i < num; num++)

#define maybe(num) if(({srand(time(NULL); rand() > num * RAND_MAX);}))

#define defer(pre, post) for(pre; ({static int _hidden_iterator_d_dont_touch = 2; --_hidden_iterator_d_dont_touch;}); post)

#define unless(condition) if(!(condition))
#endif /* LOOP_H */
