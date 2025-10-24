#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    
    printf("Введите число для вычисления факториала: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Ошибка: Факториал отрицательного числа не определен.\n");
    } else {
        long long result = factorial(number);
        printf("%d! = %lld\n", number, result);
    }
    
    return 0;
}
