#include<stdio.h>
int binary_search(int first,int last,int a[10],int key)
{
    if(first <= last)
    { 
        int mid = (first+last)/2;
        if(a[mid]==key)
        {
           return mid;
        }
        else if(a[mid]< key)
        {
           binary_search(mid+1,last,a,key);
        }
        else
        {
              binary_search(first,mid-1,a,key);
        }
    } 
    else 
     return -1;
}
int main()
{
     int i,n,a[10],key,pos;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     scanf("%d",&key);
     pos = binary_search(0,n-1,a,key);
     if(pos == -1)
            printf("elemant is not present\n");
     else
          printf("element is present at %d location \n",pos + 1);
}

          