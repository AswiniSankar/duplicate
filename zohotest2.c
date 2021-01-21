#include<stdio.h>
#define size 20
void print(int , int []);
int main()
{
  int loop,n,c=0;
  int arr[size];
  scanf("%d",&n);
  for(loop=0;loop<n;loop++)
    scanf("%d",&arr[loop]);
  print(n,arr);
}
void print(int n,int arr[])
{int innerloop,count=1,outerloop;
  for(outerloop=0;outerloop<n;outerloop++)
  {
     for(innerloop=outerloop+1;innerloop<n;innerloop++)
     {
     if(arr[outerloop]==arr[innerloop] && arr[outerloop]!=-1)
      {
        count++;
        arr[innerloop]=-1;
      }
     }
   if(count>1 &&arr[outerloop]!=-1)
     printf("%d->%d\n",arr[outerloop],count);
   count=1;
  }
}
