#include<stdlib.h>
#include<stdio.h>
#include <vector.h>
#include<string.h>
#include<sc.h>
void vector(vec *v,char *type,size_t n)
{
 v->type = type;
 v->size = n;
 v->capacity = n;
 v->arr = malloc(n);
}
void i32_push_back(vec *v,int val)
{ 
  if(v->size == v->capacity) 
  {
    v->capacity *= 2;
    v->arr = realloc(v->arr,v->capacity);
    v->size += 4;
    int *array = v->arr;
    array[(v->size/4) - 1] = val;
  }
  else
  {
    v->capacity *= 2;
    v->arr = realloc(v->arr,v->capacity);
    v->size += 4;
    int *array = v->arr;
    array[(v->size/4) - 1] = val;
  }
     
}
void i64_push_back(vec *v,i64 val)
{
 if(v->size == v->capacity) 
  {
    v->capacity *= 2;
    v->arr = realloc(v->arr,v->capacity);
    v->size += 8;
    int *array = v->arr;
    array[(v->size/8) - 1] = val;
  }
  else
  {
    v->capacity *= 2;
    v->arr = realloc(v->arr,v->capacity);
    v->size += 8;
    int *array = v->arr;
    array[(v->size/8) - 1] = val;
  }

}
void f32_push_back(vec *v,f32 val)
{
 if(v->size == v->capacity) 
  {
    v->capacity *= 2;
    v->arr = realloc(v->arr,v->capacity);
    v->size += 4;
    f32 *array = v->arr;
    array[(v->size/4) - 1] = val;
  }
  else
  {
    v->capacity *= 2;
    v->arr = realloc(v->arr,v->capacity);
    v->size += 4;
    f32 *array = v->arr;
    array[(v->size/4) - 1] = val;
  }
}
void pop_back(vec *v)
{
if(strcmp(v->type,"int") == 0 || strcmp(v->type,"float")==0) v->size -= 4;
else if(strcmp(v->type,"long long") == 0 || strcmp(v->type,"double") == 0 ) v->size -=8;
}

i32 size(vec *v)
{
if(strcmp(v->type,"int") == 0 || strcmp(v->type,"float")==0) return (v->size)/4;
else if(strcmp(v->type,"long long") == 0 || strcmp(v->type,"double") == 0 ) return (v->size)/8;
}
