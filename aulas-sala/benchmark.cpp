/*
Escreva um programa que imprima os inteiros de 1 a 100 (inclusive):

Para múltiplos de três, imprima Fizz
Para múltiplos de cinco, imprima Buzz
Para múltiplos de três e cinco, imprima FizzBuzz
Para todos os outros, imprima o número
*/

#include <iostream>

using namespace std;

void fizzbuzz(int limit);

int main() {

    int end = 100;

    fizzbuzz(end);

    return 0;
}

void fizzbuzz(int limit) {
    for (int i = 1; i <= limit; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << "\n";
        } else if (i % 3 == 0) {
            cout << "Fizz" << "\n";
        } else if (i % 5 == 0) {
            cout << "Buzz" << "\n";
        } else {
            cout << i << "\n";
        }
    }
}