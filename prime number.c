#include<stdio.h>
int main(void)
{
  int i,n,j,cnt=0;
  scanf("%d",&n);
  for(i=2;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
    if(i%j==0)
    {
      cnt++;
    }
  }
  if(cnt==2)
  {
    printf("%d\t",i);
    
  }
  cnt=0;
  }
 
  
}
