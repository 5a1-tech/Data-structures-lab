#include<stdio.h>
void selection_sort(int a[100],int n)
{
  for( int i=0;i<n-1;i++)
  {
    int min = i;
    for(int j=1+i;j<n;j++)
    {
      if (a[j]<a[min])
      {
         min = j;
      }
      int t = a[i];
      a[i] = a[min];
       a[min] = t;
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
   selection_sort(a,n);
   printf("elements aftre sorting:\n");
   for(i=0;i<n;i++)
   printf(" %d" ,a[i]);
}


