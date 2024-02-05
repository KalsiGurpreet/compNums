#include<stdio.h>

int main(void)
{
    puts("Enter two integers and I will tell you");
    printf("%s", "the relationship %s between them:\n");

    int int1 =0;
    int int2 =0;

    scanf("%d", &int1);
    scanf("%d", &int2);

    if(int1 == int2)
    {
	printf("%d is equal to %d.\n", int1 , int2);
    }
    if(int1>int2)
    {
	printf("%d is greater than number %d.\n", int1, int2);
    }
    if(int1<int2)
    {
	printf("%d is less than %d.\n",int1, int2);
    }
    if(int1 != int2)
    {
	printf("%d is not equal to %d.\n",int1, int2);	
    }
    if(int1 >= int2)
    {
	printf("%d is greater than or equal to %d.\n",int1, int2);
    }
    if(int1 <= int2)
    {
	printf("%d is less than or equal to %d.\n", int1, int2);
    }
    return 0;
}
