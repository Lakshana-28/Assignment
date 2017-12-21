
#include<stdio.h>
int main(void)
{
  int num;
  scanf("%d",&num);
  {
    if(num%2==0&&num%5!=0&&num%3!=0&&num%7!=0)
    {
      printf("yes");
      
    }
    else
    {
      printf("no");
    }
  }
}
