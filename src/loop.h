// SPDX-License-Identifier: MIT
// Copyright (C) 2023 defg43
// https://github.com/defg43/


#ifndef LOOP_H
#define LOOP_H

#define loop for(;;)
#define repeat for(;;)

#define defer(pre, post) for(pre; ({static int _hidden_iterator_d_dont_touch = 2; --_hidden_iterator_d_dont_touch;}); post)

#define unless(condition) if(!(condition))
#endif /* LOOP_H */
