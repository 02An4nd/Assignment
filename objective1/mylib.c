#include "mylib.h"

/* #Cp */

/* Function to reverse digits of a number */
int reverseDigits(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    return rev;
}

/* Function to check if number is Armstrong */
int isArmstrong(int num) {
    int original = num;
    int digits = 0;
    int sum = 0;

    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        int d = temp % 10;
        int p = 1;
        for (int i = 0; i < digits; i++) {
            p = p * d;
        }
        sum += p;
        temp /= 10;
    }

    return sum == original;
}

/* Function to check if number is Adams */
int isAdams(int num) {
    int square = num * num;
    int rev = reverseDigits(num);
    int revSquare = rev * rev;
    int revOfRevSquare = reverseDigits(revSquare);

    return square == revOfRevSquare;
}

/* Function to check if number is prime */
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

/* Function to check if number is Prime Palindrome */
int isPrimePalindrome(int num) {
    if (!isPrime(num)) return 0;
    if (num == reverseDigits(num)) return 1;
    return 0;
}
