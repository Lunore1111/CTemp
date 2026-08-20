#pragma once
#include<stdio.h>
typedef struct
{
    char *s;
    size_t len;
    size_t capacity;
}string;

string String(char *str);


