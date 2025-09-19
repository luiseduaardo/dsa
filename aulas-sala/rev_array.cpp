#include <iostream>
#include <cstdlib>

using namespace std;

#define LIMITE 100;

int main() {

    int elementos;

    cin >> elementos;

    int arr[elementos];
    int arr_rev[elementos];

    int n = 0;

    int selected = -1;

    for (int i = 0; i < elementos; i++) {
        do {
            selected = rand() % 1000;
        } while (selected < n);
        // condição extra: o número não pode ser maior que a quantidade de elementos restantes do array
            // dentro do while, coloca o seguinte "|| selected >= 1000 - (elementos - i - 1)"

        arr[i] = selected;
        cout << arr[i] << ' ';
        n = selected;
    }

    cout << "\n\n";

    for (int j = 0; j < elementos; j++) {
        arr_rev[j] = arr[elementos - j - 1];
        cout << arr_rev[j] << ' ';
    }

    cout << "\n\n";

    return 0;
}

