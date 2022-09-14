#include<stdio.h>
#include<conio.h>
void main()
{
int c,r,add,sub,multi,div,per;
clrscr();

      printf("enter the character");
	scanf("%d",&c);
	printf("you have entered %d\n",c);

      printf("enter the character");
	scanf("%d",&r);
	printf("you have entered %d\n",r);

      add=c+r;
	printf("value of add is %d\n",add);

      sub=c-r;
	printf("value of sub is %d\n",sub);

      multi=c*r;
	printf("value of multi is %d\n",multi);

      div=c/r;
	printf("value of div is %d\n",div);

      per=c%r;
	printf("value of per is %d\n",per);
getch();
}