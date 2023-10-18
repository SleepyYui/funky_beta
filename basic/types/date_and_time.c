#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__date_and_time___to_string = -1,
  num_2 = -2,
  string_1 = -3,
  num_1000 = -4,
  num_3 = -5,
  lambda_1 = -6,
  num_0 = -7,
  lambda_2 = -8,
  num_3600 = -9,
  string_2 = -10,
  lambda_3 = -11,
  lambda_4 = -12,
  lambda_5 = -13,
  lambda_6 = -14,
  string_3 = -15,
  string_4 = -16,
  chr_32 = -17,
  string_5 = -18,
  chr_46 = -19,
  str__GMT = -20
};

enum {
  var__START = FIRST_VAR-1,
  var_std_types__date_and_time, // extern
  var_to_string, // extern polymorphic
  var_29_1_ts, // dynamic
  var_time_shift_of, // extern
  var_std__plus, // extern
  var_second_of, // extern
  var_year_of, // extern
  var_month_of, // extern
  var_pad_left, // extern
  var_day_of, // extern
  var_hour_of, // extern
  var_minute_of, // extern
  var_floor, // extern
  var_std__minus, // extern
  var_std__times, // extern
  var_std__less, // extern
  var_std__over, // extern
  var_string, // extern
  var_std__assign, // extern
  var_true, // extern
  var_cond, // extern
  var__END
};


static TAB_NUM t_func_std_types__date_and_time___to_string[] = {
  20, // locals
  1, // parameters
  LOCAL(18), // 27_0_self
  // $ts time_shift_of(self)
  var_time_shift_of, 1, LOCAL(18), 1, var_29_1_ts,
  // $t self+ts
  var_std__plus, 2, LOCAL(18), var_29_1_ts, 1, LOCAL(19),
  // $second second_of(t)
  var_second_of, 1, LOCAL(19), 1, LOCAL(20),
  // year_of(t)
  var_year_of, 1, LOCAL(19), 1, LOCAL(1),
  // month_of(t) 2 "0")
  var_month_of, 1, LOCAL(19), 1, LOCAL(2),
  // pad_left(month_of(t) 2 "0")
  var_pad_left, 3, LOCAL(2), num_2, string_1, 1, LOCAL(3),
  // day_of(t) 2 "0")
  var_day_of, 1, LOCAL(19), 1, LOCAL(4),
  // pad_left(day_of(t) 2 "0")
  var_pad_left, 3, LOCAL(4), num_2, string_1, 1, LOCAL(5),
  // hour_of(t)
  var_hour_of, 1, LOCAL(19), 1, LOCAL(6),
  // minute_of(t) 2 "0")
  var_minute_of, 1, LOCAL(19), 1, LOCAL(7),
  // pad_left(minute_of(t) 2 "0")
  var_pad_left, 3, LOCAL(7), num_2, string_1, 1, LOCAL(8),
  // floor(second) 2 "0")
  var_floor, 1, LOCAL(20), 1, LOCAL(9),
  // pad_left(floor(second) 2 "0")
  var_pad_left, 3, LOCAL(9), num_2, string_1, 1, LOCAL(10),
  // floor(second))) 3 "0")
  var_floor, 1, LOCAL(20), 1, LOCAL(11),
  // second-floor(second))) 3 "0")
  var_std__minus, 2, LOCAL(20), LOCAL(11), 1, LOCAL(12),
  // 1000*(second-floor(second))) 3 "0")
  var_std__times, 2, num_1000, LOCAL(12), 1, LOCAL(13),
  // floor(1000*(second-floor(second))) 3 "0")
  var_floor, 1, LOCAL(13), 1, LOCAL(14),
  // pad_left(floor(1000*(second-floor(second))) 3 "0")
  var_pad_left, 3, LOCAL(14), num_3, string_1, 1, LOCAL(15),
  // cond
  var_cond, 3, lambda_1, lambda_3, lambda_5, 1, LOCAL(16),
  // string
  var_string, 15, LOCAL(1), string_4, LOCAL(3), string_4, LOCAL(5), chr_32, LOCAL(6), string_5, LOCAL(8), string_5, LOCAL(10), chr_46, LOCAL(15), str__GMT, LOCAL(16), 1, LOCAL(17),
  // ->
  LET, 1, LOCAL(17), TAIL_CALL,
  POS(29, 3),
  POS(30, 3),
  POS(31, 3),
  POS(34, 7),
  POS(36, 16),
  POS(36, 7),
  POS(38, 16),
  POS(38, 7),
  POS(40, 7),
  POS(42, 16),
  POS(42, 7),
  POS(44, 16),
  POS(44, 7),
  POS(46, 35),
  POS(46, 28),
  POS(46, 22),
  POS(46, 16),
  POS(46, 7),
  POS(48, 7),
  POS(33, 5),
  POS(32, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // 0 -> string("+" ts/3600)
  var_std__less, 2, num_0, var_29_1_ts, 1, LOCAL(1),
  //  ts > 0 -> string("+" ts/3600)
  LET, 2, LOCAL(1), lambda_2, TAIL_CALL,
  POS(49, 17),
  POS(49, 11)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // ts/3600)
  var_std__over, 2, var_29_1_ts, num_3600, 1, LOCAL(1),
  // string("+" ts/3600)
  var_string, 2, string_2, LOCAL(1), 1, LOCAL(2),
  //  string("+" ts/3600)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(49, 33),
  POS(49, 22),
  POS(49, 21)
};

static TAB_NUM t_lambda_3[] = {
  1, // locals
  0, // parameters
  // ts < 0 -> ts/3600
  var_std__less, 2, var_29_1_ts, num_0, 1, LOCAL(1),
  //  ts < 0 -> ts/3600
  LET, 2, LOCAL(1), lambda_4, TAIL_CALL,
  POS(50, 12),
  POS(50, 11)
};

static TAB_NUM t_lambda_4[] = {
  1, // locals
  0, // parameters
  // ts/3600
  var_std__over, 2, var_29_1_ts, num_3600, 1, LOCAL(1),
  //  ts/3600
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(50, 22),
  POS(50, 21)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  //  true -> ""
  LET, 2, var_true, lambda_6, TAIL_CALL,
  POS(51, 11)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_3, TAIL_CALL,
  POS(51, 19)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__date_and_time___to_string}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_POSITIVE_INT64, 0, {.value = 1000}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_POSITIVE_INT64, 0, {.value = 3600}},
  {FLT_STRING_8, 1, {.str_8 = "+"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_STRING_8, 1, {.str_8 = "-"}},
  {FLT_CHARACTER, 0, {.value = 32}},
  {FLT_STRING_8, 1, {.str_8 = ":"}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_STRING_8, 4, {.str_8 = " GMT"}}
};

static ATTRIBUTE_DEFINITION std_types__date_and_time__attributes[] = {
  {var_to_string, -func_std_types__date_and_time___to_string}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 1,
    "date_and_time\000std_types", std_types__date_and_time__attributes,
    {.position = POS(23, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "to_string\000", NULL,
    {.position = POS(23, 27)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "29_1_ts\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "time_shift_of\000", NULL,
    {.position = POS(29, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(30, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "second_of\000", NULL,
    {.position = POS(31, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "year_of\000", NULL,
    {.position = POS(34, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "month_of\000", NULL,
    {.position = POS(36, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pad_left\000", NULL,
    {.position = POS(36, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "day_of\000", NULL,
    {.position = POS(38, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hour_of\000", NULL,
    {.position = POS(40, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minute_of\000", NULL,
    {.position = POS(42, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "floor\000", NULL,
    {.position = POS(44, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(46, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(46, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(49, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "over\000std", NULL,
    {.position = POS(49, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000", NULL,
    {.position = POS(49, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(49, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(51, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(48, 7)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__date_and_time = {
  "_basic__types__date_and_time", // module name
  "basic/types/date_and_time.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  20, // number of constants
  21, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
