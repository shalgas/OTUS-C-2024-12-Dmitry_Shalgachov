#include <stdio.h>
 
int main(int argc, char *argv[])
{
   int a, b, sum;

    printf("Please input a & b:\n");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);

    printf("Args == %d\n", argc -1 );
    if (argc == 1) {
        printf("Please, specify at least 1 Arg\n");
        return(1);
    } else {
        printf("%d Args are:\n");
        for (int i = 1; i <= argc; i++) {
            printf("%s\n", argv[i]);
        }
    }

    printf("\nHello World again!\n");
    return(0);
}