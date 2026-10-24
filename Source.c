#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_CTYPE, "RUS");
    double n;
    double res = 0;
    puts("введите n");
    scanf("%lf", &n);
    for (int i = 3; i <= (2*n+1); i += 2) {
        res += (1. / (i*i));
    }
    printf("Результат: %lf", res);
}