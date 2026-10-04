//recursion factorial
//Nanditha Singh C code
#include <stdio.h>

long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    printf("Factorial of %d is %lld\n", num, factorial(num));
    return 0;
}
