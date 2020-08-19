#include<stdio.h>
struct student
{
         char n[30];
         int rno,m1,m2,m3;
         float avg;
         char g;
};

int main(void)
{
      struct student s1 = {"rav",100,24,23,22,23.00,'A'};
      printf("NAME = %s\n",s1.n);
      printf("ROLL = %d\n",s1.rno);
      printf("m1=%d m2 =%d m3 = %d\n",s1.m1,s1.m2,s1.m3);
      printf("avg = %f\n",s1.avg);
      printf("grade = %c\n\n",s1.g);

      struct student s2 = {"amd",102,19,23,20,19.00,'B'};
      printf("NAME = %s\n",s2.n);
      printf("ROLL = %d\n",s2.rno);
      printf("m1=%d m2 =%d m3 = %d\n",s2.m1,s2.m2,s2.m3);
      printf("avg = %f\n",s2.avg);
      printf("grade = %c\n\n",s2.g);
}
