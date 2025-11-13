#include<stdio.h>
int main()
{
int a;
int b;

printf("enter a and b\n");
scanf("%d&", &a);
scanf("%d&", &b);

printf("the equation is: a + b * (a - b) / 2 \n");
printf("Firstly we will solve (a-b) the answer for which is %d\n", (a-b));
printf("Secondly we will solve b*(a-b) and then divide this by 2 the answer for which is %d\n", (b*(a-b)/2) );
printf("Lastly we will add a to the answer above which will give us %d\n", ( a + b * (a-b)/2 ));

return 0;
}




