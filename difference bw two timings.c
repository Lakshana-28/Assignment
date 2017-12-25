

#include<stdio.h>
int main(void)
{
  int i,h,m,t,t1,h1,m1,a1,m2;
  char a[22];
  
    scanf("%d%c%d",&h,&a,&m);
     t=h*60+m;
    scanf("%d%c%d",&h1,&a1,&m1);
    t1=h1*60+m1;
    m2=t-t1;
    if(m2<0)
    {
      m2=t1-t;
       
    }
     printf("%d minutes",m2);
   
    
  
  
  
}
