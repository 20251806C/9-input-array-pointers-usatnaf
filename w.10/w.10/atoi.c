#include <stdio.h>
#include <stdlib.h>   // atoi()를 위해 필요
#define STR_MAX 16

int main(void) {
    int first_num, second_num;
    char first_str[STR_MAX], second_str[STR_MAX];

    printf("first num: ");
    gets_s(first_str, STR_MAX);

    printf("2nd num: ");
    gets_s(second_str, STR_MAX);

    first_num = atoi(first_str);
    second_num = atoi(second_str);

    printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);

    return 0;
}
