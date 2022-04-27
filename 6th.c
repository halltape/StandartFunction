#include <stdio.h>
#include <string.h>

int main ()
{
    char str[100];
    fgets (str, 100, stdin);
    fflush(stdin);

    int N = strlen(str);        //what is the length ?
    int the_last_index = N - 2;

    for(int i = 0; i < N-1; i++){       //from ASCII cymbol to DEC
        str[i] = str[i] - 48;
    }

    int sum3 = 0;
    for(int i = 0; i < 3; i++){     //The sum of the first 3 numbers
        sum3 += str[i];
    }

    int sum_last = 0;
    for(int i = the_last_index; i != the_last_index-3; i--){            //The sum of the last 3 numbers
        sum_last += str[i];
    }

    if(sum3 == sum_last){
        printf("yes");
    } else printf("no");


    return 0;
}