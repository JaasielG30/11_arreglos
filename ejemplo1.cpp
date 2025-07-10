#include <iostream>
using namespace std;


int encontrarMaximo(int A[], int n) {
    int max = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }
    return max;
}

int main() {
    int n, A[20];

    cout << "Ingrese la cantidad de elementos (máx 20): ";
    cin >> n;

    
    if (n > 20 || n <= 0) {
        cout << "Error: número fuera del rango válido (1-20)";
        return 1;
    }

    cout << "Ingrese los elementos del arreglo:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }


    cout << "El número mayor es: " << encontrarMaximo(A, n) << endl;

    return 0;
}