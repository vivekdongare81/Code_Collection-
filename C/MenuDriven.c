
#include <stdio.h>

//  Calculator using Menu Driven program

int main()
{
    int a, b, c;

    while (a != 0)
    {

        printf(" \n Select which Operation you want to Perform \n1:addtion \n2:substraction\n3:multipication\n4:division\n5:Mod\n6:Exit ");
        scanf("%d", &a);

        printf("Enter the value of 2 Numbers");
        scanf("%d%d", &b, &c);

        switch (a)
        {
        case 1:
            printf("The add is %d", b + c);
            break;
        case 2:
            printf("The sub is %d", b - c);
            break;
        case 3:
            printf("The mul is %d", b * c);
            break;
        case 4:
            printf("The div is %d", b / c);
            break;
        case 5:
            printf("The mod is %d", b % c);
            break;
        case 6:
            break;

        default:
            printf("Error operations not available");
        }
        break;
    }

    return 0;
}
