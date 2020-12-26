/*
6
2
3
5
2
1
6
5
2
3
befor removing duplicate
1 2 2 3 3 5 5 6 
after removing duplicate
1 2 3 5 6 
*/
#include<stdio.h>
void duplicate(int *,int);
int main()
{
  int a[30],b[30],i,j,n,m,t;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  for(i=0;i<m;i++)
   scanf("%d",&b[i]);
   if(n>m)
  {  
   i=n;
     for(j=0;j<m;j++)
      {
          a[i++]=b[j];
      }
    n=n+m;
   duplicate(a,n);
 }
  else
  {
     i=m;
     for(j=0;j<n;j++)
      {
          a[i++]=b[j];
      }
    n=n+m;
   duplicate(a,n);
  }

}
void duplicate(int a[],int n)
{
  int i,j=0,temp,c;
  for(i=0;i<n;i++)
  {
     for(j=i+1;j<n;j++)
     if(a[i]>a[j])
     {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     
     }
  }
 printf("befor removing duplicate\n");
 for(i=0;i<n;i++)
   printf("%d ",a[i]);
 printf("\n");

 for(i=0;i<n;i++)
 {
   
     if(a[i]==a[i+1])
      { 
       for(j=i+1;j<n;j++)
        {
         a[j]=a[j+1];
    
       }
   n--;
    i--; 
    }  
 }
 printf("after removing duplicate\n");
  for(i=0;i<n;i++)
   printf("%d ",a[i]);
  printf("\n");
}
