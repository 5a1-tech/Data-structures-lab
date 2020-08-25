#include<stdio.h>
void insertion_sort(int a[100],int n)
{
  for(int i =1;i < n;i++)
  {
    int index = a[i];
    int j = i;
    while ((j>0 && a[j-1]>index))
    {
        a[j] = a[j-1];
         j = j-1;
    }
     a[j] = index;
  }
}
int main()
{
   int a[20],n,i;
   printf("enter how many ele u want:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   insertion_sort(a,n);
   printf("elements aftre sorting:\n");
   for(i=0;i<n;i++)
   printf(" %d" ,a[i]);
}

