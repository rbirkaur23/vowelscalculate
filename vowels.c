#include<stdio.h>
#include<conio.h>
void main()
{
  int i,count=0;
  char a[80];
  clrscr();
  printf("Enter string: ");
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    {
      count++;
    }
  }
  printf("Number of vowels are %d",count);
  getch();
}
