#include<stdio.h>

int main()
{
   int a[50],n,i,rno;
   printf("Enter how many elements u want");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("enter num for a[%d] cell",i);
       scanf("%d",&a[i]);
   }
   printf("what is ur require num");
   scanf("%d",&rno);
   for(i=0;i<n;i++)
   {
       if (a[i] == rno)
          break;
   }
   if(i==n)
     printf("element not found");
   else
     printf("num found at position is %d",i);
}
  