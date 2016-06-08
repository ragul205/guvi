#include<stdio.h>
#include<string.h>
int main()
{
int i,c=0;
char s[10]="higuvi";
clrscr();
for(i=0;s[i]!='\0';++i)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
c++;
}
printf("\nnumber of vowels:%d",c);
return 0;
}
