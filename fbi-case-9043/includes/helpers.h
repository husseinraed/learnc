/*************************************
* Author:     Hussein Amine          *
* Copyrights: (c) 2020 Hussein Amine *
*************************************/

#include <stdio.h>
#include <string.h>

// clear console
int clear()
{
    int err = system("clear");
    return err;
}

// print colored text
int printc(int code, char str[])
{
    int err = printf("\e[%im%s\e[0m", code, str);
    return err;
}

// string prompt
int prompts(char str[], char var[])
{
    printf("%s", str);

    int err = scanf("%[^\n]", var);

    return err;
}

// int prompt
int prompti(char str[], int *var)
{
    printf("%s", str);

    int err = scanf("%i", var);

    return err;
}

// puzzle question
int question(char prompt[], int *user_answer, int final_answer)
{
    prompti(prompt, user_answer);

    if (*user_answer == final_answer)
    {
        printc(32, "CORRECT! keep it going\n\n");
        return 0;
    }

    printc(31, "WRONG! your'e disqualified\n\n");
    return -1;
}
