/*************************************
* Author:     Hussein Amine          *
* Copyrights: (c) 2020 Hussein Amine *
*************************************/

#include <stdio.h>

int welcome()
{
    printf("%s\n", "<Welcome To The Only/Fastest Dozen Calcuator On Earth>");
    return 0;
}

int prompt(int *var, char *string) 
{
    printf("%s", string);
    scanf("%i", var);
    return 0;
}

double dozen(int quantity) 
{
    return (double) quantity / 12;
}

int main() 
{
    int quantity;

    welcome();
    prompt(&quantity, "quantity> ");
    printf("%i is %.2f dozens\n", quantity, dozen(quantity));

    return 0;
}
