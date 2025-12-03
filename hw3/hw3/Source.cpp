#include <stdio.h>

void stringReverse(const char* str);

int main(void)
{
    char s[] = "Hello World";

    printf("Original string: %s\n", s);
    printf("Reversed: ");
    stringReverse(s);

    printf("\n");
    return 0;
}

void stringReverse(const char* str)
{
    if (*str == '\0')  
        return;

    stringReverse(str + 1); 

    putchar(*str);           
}
