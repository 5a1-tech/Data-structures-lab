#include<stdio.h>
int binary_search(int first,int last,int a[10],int key)
{  
     
        int i,mid,pos = -1;
        while(first<=last)
        { 
              mid = (first+last)/2;
              if (a[mid] == key)
              {      
                   pos = mid;
                   break;
              }
              else if(a[mid]<key)
              {
                       first = mid + 1;
              }
              else
              {
                last = mid - 1;
              }

         }

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

          