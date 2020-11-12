/*************************************
* Author:     Hussein Amine          *
* Copyrights: (c) 2020 Hussein Amine *
*************************************/

#include <stdio.h>
#include <math.h>

int welcome() 
{
    printf("%s\n", "<Welcome To The Only/Fastest Area Calcuator On Earth>");
    return 0;
}

int prompt(int *var, char *string)
{
    printf("%s", string);
    scanf("%i", var);
    return 0;
}

double area(int radius) 
{
    return M_PI * pow(radius, 2);
}

int main()
{
    int radius;

    welcome();
    prompt(&radius, "radius> ");
    printf("the area is %.2f\n", area(radius));

    return 0;
}
