#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{ int choice,x,y,z;
    printf("enter 1st number");
    scanf("%d",&x);
    printf("enter 2nd number");
    scanf("%d",&y);
    printf("Choose a option :/n 0) Add /n 1) Sub /n 2) Multiply /n 3) Divide /n 4) Find remainder");
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
