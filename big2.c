#include<stdio.h>
//#include<conio.h>
biggest2()
{
    int a, b, big;
    printf("Enter any two number: ");
    scanf("%d%d", &a, &b);
    if(a>b)
        big=a;
    else
        big=b;
    printf("\nBiggest of the two number is: %d", big);
 //   getch();
    //return 0;
}
