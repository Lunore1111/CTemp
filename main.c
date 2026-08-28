#include<stdio.h>
#include<vector.h>
#include<sc.h>
#include<stdint.h>
#include<stdlib.h>
#include<inttypes.h>
int main()
{
 
  vec v;
  vector(&v,"f64",5*sizeof(f64));
  f64 *lst = v.arr;

  for(int i=0;i<5;i++) scanf("%lf",&lst[i]);
   for(int i=0;i<5;i++) printf("%lf\n",lst[i]);

   push_back(&v,1.6);
  lst = v.arr;
  pop_back(&v);
  printf("size is %d",size(&v));
 for(int i=0;i<size(&v);i++)printf("%lf",lst[i]); 
   


  free(v.arr);

}
