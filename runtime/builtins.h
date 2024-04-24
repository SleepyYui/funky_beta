#include <termios.h>
// This file is automatically generated by "builtins.sim"; do not edit manually!

typedef struct {
  FUNC func;
  const char *name;
} BUILTIN_FUNCTION_NAME;

extern BUILTIN_FUNCTION_NAME builtin_function_names[451];

typedef enum {
  FIM_SIZE,
  FIM_COLLECT,
  FIM_TO_INT8,
  FIM_TO_INT16,
  FIM_TO_INT32,
  FIM_TO_INT64,
  FIM_TO_UINT8,
  FIM_TO_UINT16,
  FIM_TO_UINT32,
  FIM_TO_UINT64,
  FIM_TO_UCHAR32,
  FIM_TO_BOOL,
  FIM_TO_INT,
  FIM_TO_UINT,
  FIM_TO_LONG,
  FIM_TO_ULONG,
  FIM_TO_FLOAT,
  FIM_TO_DOUBLE,
  FIM_TO_C_STRING,
  FIM_TO_OCTETS,
  FIM_GET_ITEM_OF,
  FIM_LENGTH_OF,
  FIM_UNFOLD,
  FIM_DEBUG_STRING
} FUNKY_INTERNAL_METHOD;

extern const char *internal_method_names[];
struct FUNKY_MODULE;
typedef struct FUNKY_MODULE FUNKY_MODULE;
extern BUILTIN_FUNCTION_NAME builtin_function_names[];

typedef struct {
  long dimension_count;
  long dimensions[];
} ARRAY_INFO;

typedef struct {
  long first_index;
  long width;
} DIMENSION_INFO;

typedef struct {
  long dimension_count;
  DIMENSION_INFO dimensions[];
} ARRAY_VIEW;

typedef struct {
  long size;
  long length;
  char buffer[];
} ARRAY_UPDATES;

typedef struct {
  ARRAY_INFO *info;
  long size;
  NODE *items[];
} ARRAY_DATA;

typedef struct {
  ARRAY_INFO *info;
  long size;
  int items[];
} BOOLEAN_ARRAY_DATA;

typedef struct {
  ARRAY_INFO *info;
  long size;
  uint32_t items[];
} CHARACTER_ARRAY_DATA;

typedef struct {
  ARRAY_INFO *info;
  long size;
  int8_t items[];
} INT8_ARRAY_DATA;

typedef struct {
  ARRAY_INFO *info;
  long size;
  uint8_t items[];
} UINT8_ARRAY_DATA;

typedef struct {
  ARRAY_INFO *info;
  long size;
  int16_t items[];
} INT16_ARRAY_DATA;

typedef struct {
  ARRAY_INFO *info;
  long size;
  uint16_t items[];
} UINT16_ARRAY_DATA;

typedef struct {
  ARRAY_INFO *info;
  long size;
  int32_t items[];
} INT32_ARRAY_DATA;

typedef struct {
  ARRAY_INFO *info;
  long size;
  uint32_t items[];
} UINT32_ARRAY_DATA;

typedef struct {
  ARRAY_INFO *info;
  long size;
  int64_t items[];
} INT64_ARRAY_DATA;

typedef struct {
  ARRAY_INFO *info;
  long size;
  uint64_t items[];
} UINT64_ARRAY_DATA;

typedef struct {
  ARRAY_INFO *info;
  long size;
  float items[];
} FLOAT32_ARRAY_DATA;

typedef struct {
  ARRAY_INFO *info;
  long size;
  double items[];
} FLOAT64_ARRAY_DATA;

  typedef struct {
    long size; // including terminating zero byte
    char text[];
  } MESSAGE_TEXT;

  typedef struct {
    long length;
    const TAB_NUM *entries[];
  } FUNC_DATA;

  typedef struct {
    long size;
    long length;
    NODE *items[];
  } LIST_DATA;

  typedef struct {
    long size; // in octets
    long length; // in 8-bit-characters (which is the same as octets)
    uint8_t buffer[];
  } OCTET_DATA;

  typedef struct {
    long size; // in bytes
    long length;  // in (32-bit) characters
    uint32_t buffer[];
  } QUAD_OCTET_DATA;

  typedef struct {
    struct termios termios;
  } TERMIO_DATA;

typedef enum {
  SET_VALUE
} TAG;

typedef struct {
  TAG tag;
  long offset;
  int64_t value;
} UPDATE_INT64_ARRAY_DATA_SET_VALUE;

typedef struct {
  TAG tag;
  long offset;
  int32_t value;
} UPDATE_INT32_ARRAY_DATA_SET_VALUE;

typedef struct {
  TAG tag;
  long offset;
  int16_t value;
} UPDATE_INT16_ARRAY_DATA_SET_VALUE;

typedef struct {
  TAG tag;
  long offset;
  int8_t value;
} UPDATE_INT8_ARRAY_DATA_SET_VALUE;

typedef struct {
  TAG tag;
  long offset;
  int value;
} UPDATE_BOOLEAN_ARRAY_DATA_SET_VALUE;

typedef struct {
  TAG tag;
  long offset;
  NODE *value;
} UPDATE_ARRAY_DATA_SET_VALUE;

typedef struct {
  TAG tag;
  long offset;
  double value;
} UPDATE_FLOAT64_ARRAY_DATA_SET_VALUE;

typedef struct {
  TAG tag;
  long offset;
  float value;
} UPDATE_FLOAT32_ARRAY_DATA_SET_VALUE;

typedef struct {
  TAG tag;
  long offset;
  uint64_t value;
} UPDATE_UINT64_ARRAY_DATA_SET_VALUE;

typedef struct {
  TAG tag;
  long offset;
  uint32_t value;
} UPDATE_UINT32_ARRAY_DATA_SET_VALUE;

typedef struct {
  TAG tag;
  long offset;
  uint16_t value;
} UPDATE_UINT16_ARRAY_DATA_SET_VALUE;

typedef struct {
  TAG tag;
  long offset;
  uint8_t value;
} UPDATE_UINT8_ARRAY_DATA_SET_VALUE;

typedef struct {
  TAG tag;
  long offset;
  uint32_t value;
} UPDATE_CHARACTER_ARRAY_DATA_SET_VALUE;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long updates_length;
  ARRAY_VIEW *view;
  ARRAY_DATA *data;
  ARRAY_UPDATES *updates;
} ARRAY;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long updates_length;
  ARRAY_VIEW *view;
  BOOLEAN_ARRAY_DATA *data;
  ARRAY_UPDATES *updates;
} BOOLEAN_ARRAY;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long updates_length;
  ARRAY_VIEW *view;
  CHARACTER_ARRAY_DATA *data;
  ARRAY_UPDATES *updates;
} CHARACTER_ARRAY;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long updates_length;
  ARRAY_VIEW *view;
  INT8_ARRAY_DATA *data;
  ARRAY_UPDATES *updates;
} INT8_ARRAY;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long updates_length;
  ARRAY_VIEW *view;
  UINT8_ARRAY_DATA *data;
  ARRAY_UPDATES *updates;
} UINT8_ARRAY;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long updates_length;
  ARRAY_VIEW *view;
  INT16_ARRAY_DATA *data;
  ARRAY_UPDATES *updates;
} INT16_ARRAY;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long updates_length;
  ARRAY_VIEW *view;
  UINT16_ARRAY_DATA *data;
  ARRAY_UPDATES *updates;
} UINT16_ARRAY;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long updates_length;
  ARRAY_VIEW *view;
  INT32_ARRAY_DATA *data;
  ARRAY_UPDATES *updates;
} INT32_ARRAY;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long updates_length;
  ARRAY_VIEW *view;
  UINT32_ARRAY_DATA *data;
  ARRAY_UPDATES *updates;
} UINT32_ARRAY;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long updates_length;
  ARRAY_VIEW *view;
  INT64_ARRAY_DATA *data;
  ARRAY_UPDATES *updates;
} INT64_ARRAY;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long updates_length;
  ARRAY_VIEW *view;
  UINT64_ARRAY_DATA *data;
  ARRAY_UPDATES *updates;
} UINT64_ARRAY;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long updates_length;
  ARRAY_VIEW *view;
  FLOAT32_ARRAY_DATA *data;
  ARRAY_UPDATES *updates;
} FLOAT32_ARRAY;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long updates_length;
  ARRAY_VIEW *view;
  FLOAT64_ARRAY_DATA *data;
  ARRAY_UPDATES *updates;
} FLOAT64_ARRAY;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  int32_t parameter_count;
} C_FUNCTION;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  uint32_t code;
} CHARACTER;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  int64_t seconds;
  int32_t nanoseconds;
} DATE_AND_TIME;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  NODE *category;
  MESSAGE_TEXT *message;
  int err_no;
  int attr_idx;
  NODE *object;
  size_t instruction_counter;
  FUNC_DATA *data;
} ERROR;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
} TABULAR_FUNCTION;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long offset;
  long length;
  LIST_DATA *data;
} LIST;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  uint64_t value;
} INTEGER;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  uint64_t value;
} POSITIVE_INTEGER;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  uint64_t value;
} NEGATIVE_INTEGER;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  double value;
} REAL;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  int value;
} FILE_TYPE;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  int value;
} FILE_DESCRIPTOR;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  int value;
} SHUTDOWN_TYPE;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  unsigned long value;
} DEVICE_ID;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  void *value;
} DIRECTORY;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  int value;
} GROUP_ID;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  unsigned long value;
} INODE_NUMBER;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  int value;
} PROCESS_ID;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  int value;
} USER_ID;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  int value;
} ERROR_NUMBER;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long offset;
  long length;
  OCTET_DATA *data;
} OCTET_STRING;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long offset;
  long length;
  QUAD_OCTET_DATA *data;
} QUAD_OCTET_STRING;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  TERMIO_DATA *data;
} TERMINAL_ATTRIBUTES;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  NODE *node_0;
  NODE *node_1;
} TUPLE2;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  NODE *node_0;
  NODE *node_1;
  NODE *node_2;
} TUPLE3;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  NODE *node_0;
  NODE *node_1;
  NODE *node_2;
  NODE *node_3;
} TUPLE4;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  NODE *node_0;
  NODE *node_1;
  NODE *node_2;
  NODE *node_3;
  NODE *node_4;
} TUPLE5;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  NODE *node_0;
  NODE *node_1;
  NODE *node_2;
  NODE *node_3;
  NODE *node_4;
  NODE *node_5;
} TUPLE6;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  NODE *node_0;
  NODE *node_1;
  NODE *node_2;
  NODE *node_3;
  NODE *node_4;
  NODE *node_5;
  NODE *node_6;
} TUPLE7;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  NODE *node_0;
  NODE *node_1;
  NODE *node_2;
  NODE *node_3;
  NODE *node_4;
  NODE *node_5;
  NODE *node_6;
  NODE *node_7;
} TUPLE8;

typedef struct {
  void *type;
  ATTRIBUTES *attributes;
  long id;
} UNIQUE_ITEM;

typedef union NODE {
  struct {
    FUNC type;
    ATTRIBUTES *attributes;
  };
  SIMPLE_NODE simple_node;
  ARRAY array;
  BOOLEAN_ARRAY boolean_array;
  CHARACTER_ARRAY character_array;
  INT8_ARRAY int8_array;
  UINT8_ARRAY uint8_array;
  INT16_ARRAY int16_array;
  UINT16_ARRAY uint16_array;
  INT32_ARRAY int32_array;
  UINT32_ARRAY uint32_array;
  INT64_ARRAY int64_array;
  UINT64_ARRAY uint64_array;
  FLOAT32_ARRAY float32_array;
  FLOAT64_ARRAY float64_array;
  C_FUNCTION c_function;
  CHARACTER character;
  DATE_AND_TIME date_and_time;
  ERROR error;
  TABULAR_FUNCTION tabular_function;
  LIST list;
  INTEGER integer;
  POSITIVE_INTEGER positive_integer;
  NEGATIVE_INTEGER negative_integer;
  REAL real;
  FILE_TYPE file_type;
  FILE_DESCRIPTOR file_descriptor;
  SHUTDOWN_TYPE shutdown_type;
  DEVICE_ID device_id;
  DIRECTORY directory;
  GROUP_ID group_id;
  INODE_NUMBER inode_number;
  PROCESS_ID process_id;
  USER_ID user_id;
  ERROR_NUMBER error_number;
  OCTET_STRING octet_string;
  QUAD_OCTET_STRING quad_octet_string;
  TERMINAL_ATTRIBUTES terminal_attributes;
  TUPLE2 tuple2;
  TUPLE3 tuple3;
  TUPLE4 tuple4;
  TUPLE5 tuple5;
  TUPLE6 tuple6;
  TUPLE7 tuple7;
  TUPLE8 tuple8;
  UNIQUE_ITEM unique_item;
} NODE;
int to_int8(NODE *node, int8_t *result_p);
int to_int16(NODE *node, int16_t *result_p);
int to_int32(NODE *node, int32_t *result_p);
int to_int64(NODE *node, int64_t *result_p);
int to_uint8(NODE *node, uint8_t *result_p);
int to_uint16(NODE *node, uint16_t *result_p);
int to_uint32(NODE *node, uint32_t *result_p);
int to_uint64(NODE *node, uint64_t *result_p);
int to_uchar32(NODE *node, uint32_t *result_p);
int to_bool(NODE *node, int *result_p);
int to_int(NODE *node, int *result_p);
int to_uint(NODE *node, unsigned int *result_p);
int to_long(NODE *node, long *result_p);
int to_ulong(NODE *node, unsigned long *result_p);
int to_float(NODE *node, float *result_p);
int to_double(NODE *node, double *result_p);
int to_c_string(NODE *node, char **result_p);
int to_octets(NODE *node, const uint8_t** buf_p, long *size_p);
int get_item_of(NODE *node, long idx, NODE **result_p);
int length_of(NODE *node, long *result_p);
int unfold(NODE *node);
int debug_string(NODE *node, int indent, int max_depth, char *buf);
NODE *from_bool(int val);
NODE *create_c_function(FUNC func, int par_cnt);
NODE *from_uchar32(uint32_t code);
void initialize_environment(void);
int propagate_error(NODE *node);
void print_code_reference(const TAB_NUM *code);
void create_error_message(NODE *category, const char *msg, int err_no, int attr_idx, NODE *node);
void no_such_function(void);
void too_few_arguments(void);
void too_many_arguments(void);
void invalid_arguments(void);
void result_count_mismatch(void);
void too_few_results(void);
void too_many_results(void);
void invalid_results(void);
void invalid_index(NODE *node);
void invalid_dimension(NODE *node);
void divide_by_zero(void);
void missing_io_access_rights(void);
void not_yet_implemented(void);
void open_failed(void);
void close_failed(void);
void read_error(void);
void write_error(void);
void flush_failed(void);
NODE *create_function(const TAB_NUM *code);
NODE *create_list(long count);
void set_list_item(NODE *list, long idx, NODE *value);
NODE *from_float(float value);
NODE *from_double(double value);
NODE *from_int(int value);
NODE *from_long(long value);
NODE *from_uint(unsigned int value);
NODE *from_ulong(unsigned long value);
NODE *from_int8(int8_t value);
NODE *from_int16(int16_t value);
NODE *from_int32(int32_t value);
NODE *from_int64(int64_t value);
NODE *from_uint8(uint8_t value);
NODE *from_uint16(uint16_t value);
NODE *from_uint32(uint32_t value);
NODE *from_uint64(uint64_t value);
NODE *create_polymorphic_function(int poly_idx);
NODE *create_polymorphic_function_with_setter(int poly_idx);
NODE *from_latin_1_string(const uint8_t *str, long len);
NODE *from_uint32_string(const uint32_t *str, long len);
NODE *from_c_string(const char *str);
NODE *create_tuple(long count);
void set_tuple_item(NODE *tuple, long idx, NODE *value);
int is_an_upper_case_letter_character(uint32_t chr);
int is_a_lower_case_letter_character(uint32_t chr);
int is_a_title_case_letter_character(uint32_t chr);
int is_a_letter_character(uint32_t chr);
int is_a_whitespace_character(uint32_t chr);
int is_a_zero_width_character(uint32_t chr);
int is_a_wide_character(uint32_t chr);
NODE *register_unique_item(const char *name);

void *create__std_types___error
  (
    NODE *category,
    MESSAGE_TEXT *message,
    int err_no,
    int attr_idx,
    NODE *object,
    size_t instruction_counter,
    FUNC_DATA *data
  );

void *create__std_types___list
  (
    long offset,
    long length,
    LIST_DATA *data
  );

void *create__negative_integer
  (
    uint64_t value
  );
void std_types___error____type (void);
void std_types___undefined____type (void);
void std_types___list____type (void);
void negative_integer____type (void);
extern SIMPLE_NODE std_types___generic_array;
extern ARRAY std_types___array;
extern BOOLEAN_ARRAY std_types___boolean_array;
extern CHARACTER_ARRAY std_types___character_array;
extern INT8_ARRAY std_types___int8_array;
extern UINT8_ARRAY std_types___uint8_array;
extern INT16_ARRAY std_types___int16_array;
extern UINT16_ARRAY std_types___uint16_array;
extern INT32_ARRAY std_types___int32_array;
extern UINT32_ARRAY std_types___uint32_array;
extern INT64_ARRAY std_types___int64_array;
extern UINT64_ARRAY std_types___uint64_array;
extern FLOAT32_ARRAY std_types___float32_array;
extern FLOAT64_ARRAY std_types___float64_array;
extern SIMPLE_NODE std_types___true;
extern SIMPLE_NODE std_types___false;
extern C_FUNCTION c_function;
extern CHARACTER std_types___character;
extern DATE_AND_TIME std_types___date_and_time;
extern ERROR std_types___error;
extern SIMPLE_NODE std_types___object;
extern SIMPLE_NODE std_types___undefined;
extern SIMPLE_NODE std_types___function;
extern TABULAR_FUNCTION tabular_function;
extern SIMPLE_NODE std_types___generic_list;
extern LIST std_types___list;
extern SIMPLE_NODE std_types___number;
extern INTEGER std_types___integer;
extern POSITIVE_INTEGER std_types___positive_integer;
extern NEGATIVE_INTEGER negative_integer;
extern REAL std_types___real;
extern SIMPLE_NODE std_types___polymorphic_function;
extern SIMPLE_NODE std_types___polymorphic_function_with_setter;
extern FILE_TYPE std_types___file_type;
extern FILE_DESCRIPTOR std_types___file_descriptor;
extern SHUTDOWN_TYPE std_types___shutdown_type;
extern DEVICE_ID std_types___device_id;
extern DIRECTORY std_types___directory;
extern GROUP_ID std_types___group_id;
extern INODE_NUMBER std_types___inode_number;
extern PROCESS_ID std_types___process_id;
extern USER_ID std_types___user_id;
extern ERROR_NUMBER std_types___error_number;
extern SIMPLE_NODE std_types___passwd;
extern SIMPLE_NODE std_types___stat;
extern SIMPLE_NODE std_types___dirent;
extern SIMPLE_NODE std_types___string;
extern OCTET_STRING std_types___octet_string;
extern QUAD_OCTET_STRING quad_octet_string;
extern TERMINAL_ATTRIBUTES std_types___terminal_attributes;
extern SIMPLE_NODE std_types___tuple;
extern TUPLE2 builtin___tuple2;
extern TUPLE3 builtin___tuple3;
extern TUPLE4 builtin___tuple4;
extern TUPLE5 builtin___tuple5;
extern TUPLE6 builtin___tuple6;
extern TUPLE7 builtin___tuple7;
extern TUPLE8 builtin___tuple8;
extern UNIQUE_ITEM std_types___unique_item;
extern TUPLE2 std_types___key_value_pair;
extern LIST std___empty_list;
extern LIST std_types___sequence;
extern TUPLE2 std_types___value_range;

extern FUNKY_MODULE module__builtin;
