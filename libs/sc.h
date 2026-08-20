#include<vector.h>
#define int32 "int"
#define int64 "long long"
#define float32 "float"
#define flaot64 "double"
#define char1 "char"

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef float f32;
typedef double f64;



#define push_back(obj,val) _Generic((val), \
int:i32_push_back, \
float:f32_push_back, \
double:f64_push_back)(obj,val)

#define DEF_VAL (vec) {.arr=nullptr,.capacity=0,.size=0,.n=0}
#define NL printf("\n");


