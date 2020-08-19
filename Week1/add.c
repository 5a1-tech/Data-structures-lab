#include<stdio.h>
struct compnum
{
      int r,im;
};


struct compnum add(struct compnum x,struct compnum y)
{
   struct compnum z;
   z.r = x.r+y.r;
   z.im = x.im+y.im;
   return z;
}

int main()
{
   struct compnum x,y,z;
   scanf("%d%d",&x.r,&x.im);
   scanf("%d%d",&y.r,&y.im);
   z = add(x,y);
   printf("addition of two complex = %d+i%d",z.r,z.im);
}

  