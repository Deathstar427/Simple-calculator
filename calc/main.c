#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<iostream>
int main()
{ int choice,x,y,z;
    printf("enter 1st number");
    scanf("%d",&x);
    printf("enter 2nd number");
    scanf("%d",&y);
    printf("press 0 to add, 1 to sub,2 to multiply,3to divide,4 to find remainder");
    scanf("%d",&choice);
    switch(choice)
    {
        case 0: z=x+y;
                printf("%d",z);
                break;

        case 1: z=x-y;
                printf("%d",z);
                break;
        case 2: z=x*y;
                printf("%d",z);
                break;
        case 3: z=x/y;
                printf("%d",z);
                break;
        case 4: z=x%y;
                printf("%d",z);
                break;

    }
    getch();
    return 0;
}
