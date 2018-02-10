#include<stdio.h>
#include<string.h>
int main(void)
{
int i,j,k=0;
char a[222],b[222];
scanf("%s",a);
 for(i=0;a[i]!='\0';i++)
 {
 if(i%2!=0)
 {
 b[k]=a[i];
 k++;
 }
 }
 for(j=k-1;j>=0;j--)
 {
  if(j==k-1){
 printf("%c",b[j]-32);
 }
 else
 {
 printf("%c",b[j]);
 }
 }
 }
