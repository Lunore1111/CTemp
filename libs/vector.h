#pragma once
#include<sc.h>
typedef struct
{
    
void *arr;
size_t capacity;
size_t size;
size_t n;
const char *type;

}vec;

void vector(vec *v,char *type,size_t total_byte);
void i32_push_back(vec *v,i32 val);
void i64_push_back(vec *v,i64 val);
void f32_push_back(vec *v,f32 val);
void f64_push_back(vec *v,f64 val);
void pop_back(vec *v);

int size(vec *v);
