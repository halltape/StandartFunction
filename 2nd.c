#include <stdio.h>
#include <string.h>

int main ()
{
    char str1[26];
    char str2[5];

    fgets(str1, 26, stdin);
    fflush(stdin);

    fgets(str2, 5, stdin);
    fflush(stdin);

    for(int i = 0; i < strlen(str1); i++){
        if (str1[i] == '\n'){
            str1[i] = '.';
        }
    }


    strcat(str1, str2);
    printf("%s", str1);

    return 0;
}