#include<hlstring.h>
#include<string.h>

string String(char *str)
{
    string s;
    s.s = str;
    s.len = strlen(str);
    s.capacity = (s.len) + 1;
   return s;   
}