/*************************************
* Author:     Hussein Amine          *
* Copyrights: (c) 2020 Hussein Amine *
*************************************/

#include <stdio.h>

int main()
{
    int slices;

    printf("how much slices of pizza did you eat? ");
    scanf("%i", &slices);

    switch(slices)
    {
        case 0:
            printf("why didn't you eat pizza?\n");
            break;

        case 1:
            printf("you should eat more kid.\n");
            break;
        
        case 2:
            printf("yes your'e getting better go up to!\n");
            break;
        
        case 3:
            printf("ohooo wow YES MORE MORE!\n");
            break;
        
        case 4:
            printf("ok you've hit the limit u should stop\n");
            break;

        case 5:
            printf("wait dont u think its getting out of control?\n");
            break;

        default:
            printf("enjoy your heart disease!\n");
            break;
    }
    
    return 0;
}