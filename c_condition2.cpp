#include <stdio.h>

int main()
{
    int sex;
    printf("input sex type number,"
           "1 for male,"
           "2 for female,"
           "3 for others:\n");
    scanf("%d",&sex);
    switch(sex)
    {
        case 1:
            printf("You are male\n");
            break;
        case 2:
            printf("You are female\n");
            break;
        case 3:
            printf("Oh, U are other types\n");
            break;
        default:
            printf("error\n");
    }
}

