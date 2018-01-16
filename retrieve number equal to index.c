
#include<stdio.h>
int main(void)
{
  int a[22],b[22],i,j,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(i==a[i])
    {
      printf("%d\t1",a[i]);
    }
  }
  
}
