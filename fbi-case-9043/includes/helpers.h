/*************************************
* Author:     Hussein Amine          *
* Copyrights: (c) 2020 Hussein Amine *
*************************************/

#include <stdio.h>

int printc(int code, char str[])
{
    int err = printf("\e[%im%s\e[0m", code, str);
    return err;
}