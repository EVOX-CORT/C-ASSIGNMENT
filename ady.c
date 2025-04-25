#include <stdio.h>
#include "ady.h"

int isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int isSpyNumber(int num) {
    int sum = 0, prod = 1;
    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        prod *= digit;
        num /= 10;
    }
    return sum == prod;
}