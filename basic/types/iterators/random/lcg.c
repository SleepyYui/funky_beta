#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_std_types__lcg___next_raw_value = -1,
  func_std__lcg = -2,
  num_31974247 = -3,
  num_642997 = -4,
  num_7219879 = -5
};

enum {
  var__START = FIRST_VAR-1,
  var_std__seed_of, // attribute
  var_std__assign, // extern
  var_multiplier_of, // attribute
  var_increment_of, // attribute
  var_std_types__lcg, // derived
  var_std_types__random_number_generator, // extern
  var_next_raw_value, // extern polymorphic
  var_seed_of, // extern polymorphic
  var_std__times, // extern
  var_std__plus, // extern
  var_modulus_of, // extern polymorphic
  var_mod, // extern
  var_std__lcg, // initialized
  var__END
};


static TAB_NUM t_func_std_types__lcg___next_raw_value[] = {
  8, // locals
  1, // parameters
  LOCAL(7), // 29_33_self
  // multiplier_of(self)*seed_of(self)+increment_of(self))
  var_multiplier_of, 1, LOCAL(7), 1, LOCAL(1),
  // seed_of(self)+increment_of(self))
  var_seed_of, 1, LOCAL(7), 1, LOCAL(2),
  // multiplier_of(self)*seed_of(self)+increment_of(self))
  var_std__times, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // increment_of(self))
  var_increment_of, 1, LOCAL(7), 1, LOCAL(4),
  // multiplier_of(self)*seed_of(self)+increment_of(self))
  var_std__plus, 2, LOCAL(3), LOCAL(4), 1, LOCAL(5),
  // modulus_of(self)
  var_modulus_of, 1, LOCAL(7), 1, LOCAL(6),
  // $new_seed
  var_mod, 2, LOCAL(5), LOCAL(6), 1, LOCAL(8),
  // .seed_of new_seed) new_seed
  LET, -1, LOCAL(7), var_seed_of, LOCAL(8), LOCAL(1),
  // -> self(.seed_of new_seed) new_seed
  LET, 2, LOCAL(1), LOCAL(8), TAIL_CALL,
  POS(32, 8),
  POS(32, 28),
  POS(32, 8),
  POS(32, 42),
  POS(32, 8),
  POS(33, 7),
  POS(30, 3),
  POS(34, 11),
  POS(34, 3)
};

static TAB_NUM t_func_std__lcg[] = {
  5, // locals
  -4, // parameters
  MANDATORY_PARAMETER, LOCAL(2), // 40_0_seed
  num_31974247, LOCAL(3), // 41_0_modulus
  num_642997, LOCAL(4), // 42_0_multiplier
  num_7219879, LOCAL(5), // 43_0_increment
  // std_types::lcg
  LET, -4, var_std_types__lcg, var_seed_of, LOCAL(2), var_modulus_of, LOCAL(3), var_multiplier_of, LOCAL(4), var_increment_of, LOCAL(5), LOCAL(1),
  // ->
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(46, 5),
  POS(45, 3)
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_std_types__lcg___next_raw_value}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_std__lcg}},
  {FLT_POSITIVE_INT64, 0, {.value = 31974247}},
  {FLT_POSITIVE_INT64, 0, {.value = 642997}},
  {FLT_POSITIVE_INT64, 0, {.value = 7219879}}
};

static ATTRIBUTE_DEFINITION std_types__lcg__attributes[] = {
  {var_next_raw_value, -func_std_types__lcg___next_raw_value}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_POLYMORPHIC, 0, 0,
    "seed_of\000std", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(23, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "multiplier_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "increment_of\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_DERIVED, 0, 1,
    "lcg\000std_types", std_types__lcg__attributes,
    {"random_number_generator\000std_types"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "random_number_generator\000std_types", NULL,
    {.position = POS(27, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "next_raw_value\000", NULL,
    {.position = POS(29, 17)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "seed_of\000", NULL,
    {.position = POS(32, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "times\000std", NULL,
    {.position = POS(32, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(32, 8)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "modulus_of\000", NULL,
    {.position = POS(33, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "mod\000", NULL,
    {.position = POS(31, 5)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "lcg\000std", NULL,
    {.const_idx = -func_std__lcg}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0}
};

FUNKY_MODULE module__basic__types__iterators__random__lcg = {
  "_basic__types__iterators__random__lcg", // module name
  "basic/types/iterators/random/lcg.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  1, // number of used namespaces
  5, // number of constants
  13, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
