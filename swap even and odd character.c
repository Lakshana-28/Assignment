
#include<stdio.h>
#include<string.h>
int main(void)
{
  char a[33];
  int i,temp,n;
  scanf("%s",a);
  n=strlen(a);
  
  for(i=0;i<n-1;i+=2)
  {
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
  }
  for(i=0;i<=n-1;i++)
  {
    printf("%c",a[i]);
  }
  }
 
  
  
