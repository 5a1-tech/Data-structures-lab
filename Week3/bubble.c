#include<stdio.h>
void bubble_sort(int a[100],int n)
{
  int i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
       if (a[j]>a[j+1])
       {  
          int t = a[j];
       }
    }
  }
} 
int main()
{
   int a[20],n,i;
   printf("enter how many ele u want:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   bubble_sort(a,n);
   printf("elements aftre sorting:\n");
   for(i=0;i<n;i++)
   printf(" %d" ,a[i]);
}


