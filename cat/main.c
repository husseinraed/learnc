#include <stdio.h>

int main() 
{
    char text[900];

    scanf("%[^\n]", text);

    printf("%s\n", text);
    return 0;
}
