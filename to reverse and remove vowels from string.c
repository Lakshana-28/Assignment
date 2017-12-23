

#include<stdio.h>
#include<string.h>
int main(void)
{
  char s[33],r[33];
  int i,n,e,a,f,j;
  scanf("%s",s);
  n=strlen(s);
  e=n-1;
  for(i=0;i<=n-1;i++)
  {
    r[i]=s[e];
    e--;
  }
  r[i]='\0';
  for(i=0;r[i]!='\0';i++)
  {
  printf("%c",r[i]);
}
a=strlen(r);
f=a-1;

for(i=0;i<=f;i++)
{
  if(r[i]=='a'||r[i]=='e'||r[i]=='i'||r[i]=='o'||r[i]=='u'||r[i]=='A'||r[i]=='E'||r[i]=='I'||r[i]=='O'||r[i]=='U')
  {
    for(j=i;j<=f;j++)
    {
    r[j]=r[j+1];
    }
    f--;
   
  }
 
   printf("\n%c",r[i]);
}


}
