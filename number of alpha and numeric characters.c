
#include<stdio.h>
int main(void)
{
  char str[55];
  int i,dcount=0,acount=0,n;
  scanf("%s",str);
  n=strlen(str);
  for(i=0;i<n;i++)
  {
    if(str[i]>=97&&str[i]<=122)
    {
      acount++;
    }
    else if(str[i]>=48&&str[i]<=57)
    {
      dcount++;
    }
  }
  printf("\nthe number alpha character is %d",acount);
  printf("\nthe number numeric character is %d",dcount);
  
  
}
