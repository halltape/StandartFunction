#include <stdio.h>
#include <string.h>

int main ()
{
    char a[52];
    fgets(a, 52, stdin);
    fflush(stdin);

    for(int i = 0; i < 52; i++) {
        switch (a[i]) {
            case ' ' :
                printf("|:_..._:|");
                break;
            case 'A' :
            case 'a' :
                printf(".-|");
                break;
            case 'B' :
            case 'b' :
                printf("-...|");
                break;
            case 'C' :
            case 'c' :
                printf("-.-.|");
                break;
            case 'D' :
            case 'd' :
                printf("-..|");
                break;
            case 'E' :
            case 'e' :
                printf(".|");
                break;
            case 'F' :
            case 'f' :
                printf("..-.|");
                break;
            case 'G' :
            case 'g' :
                printf("--.|");
                break;
            case 'H' :
            case 'h' :
                printf("....|");
                break;
            case 'I' :
            case 'i' :
                printf("..|");
                break;
            case 'J' :
            case 'j' :
                printf(".---|");
                break;
            case 'K' :
            case 'k' :
                printf("-.-|");
                break;
            case 'L' :
            case 'l' :
                printf(".-..|");
                break;
            case 'M' :
            case 'm' :
                printf("--|");
                break;
            case 'N' :
            case 'n' :
                printf("-.|");
                break;
            case 'O' :
            case 'o' :
                printf("---|");
                break;
            case 'P' :
            case 'p' :
                printf(".--.|");
                break;
            case 'Q' :
            case 'q' :
                printf("--.-|");
                break;
            case 'R' :
            case 'r' :
                printf(".-.|");
                break;
            case 'S' :
            case 's' :
                printf("...|");
                break;
            case 'T' :
            case 't' :
                printf("-|");
                break;
            case 'U' :
            case 'u' :
                printf("..-|");
                break;
            case 'V' :
            case 'v' :
                printf("...-|");
                break;
            case 'W' :
            case 'w' :
                printf(".--|");
                break;
            case 'X' :
            case 'x' :
                printf("-..-|");
                break;
            case 'Y' :
            case 'y' :
                printf("-.--|");
                break;
            case 'Z' :
            case 'z' :
                printf("--..|");
                break;

            case '0' :
                printf("-----|");
                break;
            case '1' :
                printf(".----|");
                break;
            case '2' :
                printf("..---|");
                break;
            case '3' :
                printf("...--|");
                break;
            case '4' :
                printf("....-|");
                break;
            case '5' :
                printf(".....|");
                break;
            case '6' :
                printf("-....|");
                break;
            case '7' :
                printf("--...|");
                break;
            case '8' :
                printf("---..|");
                break;
            case '9' :
                printf("----.|");
                break;
            default:
                return 0;
        }


    }
    return 0;
}