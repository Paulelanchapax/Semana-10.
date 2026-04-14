#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    double promedio;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    promedio = (n1 + n2 + n3) / 3.0;

    cout << "El promedio es: " << promedio << endl;

    return 0;
}