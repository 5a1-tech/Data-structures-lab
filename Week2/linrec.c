//program for linear search by  recursion
#include<stdio.h>
int linear_search(int a[50],int n,int key)
{
    static int i, pos = -1;
    
        if (a[i] == key)
         {
             return i;
              
         }
         else if(i<n)
         {
           i++;
           linear_search(a,n,key);
         }
         else
         {
               return -1;
         }    
}
int main()
{
    int i,pos,n,key,a[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&key);
    pos = linear_search(a,n,key);
    if (pos == -1)
        printf("elemarn not found");
    else
        printf("element is found");
    return 0;
}
