#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,add,sub,multi,div,per;
clrscr();
	printf("enter number 1");
	 scanf("%d",&i);
	 printf("you have entered number is %d\n",i);
	 printf("enter number 1");
	 scanf("%d",&j);
	 printf("you have entered number is %d\n",j);
	add=i+j;
	 printf("value of add is %d\n",add);
	sub=i-j;
	 printf("value of sub is %d\n",sub);
	multi=i*j;
	 printf("value of multi is %d\n",multi);
	div=i/j;
	 printf("value of div is %d\n",div);
	per=i%j;
	 printf("value of per is %d\n",per);
getch();
}