#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char c;
    int number=0;
    int check = 1;
 
    while ((c = getchar()) != EOF && c != '\n') {
        if (c == ' ') {
            check = 1;
        }
        else {
            if (check != 0) {
                number++;
                check = 0;
            }
        }
    }
 
    printf("%d", number);
    return 0;
}