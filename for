#include <iostream>
using namespace std;

int main()
{
    int N, M;
    float suma = 0, promedio;
    do {
        cout << "Ingresar el valor de N: ";
        cin >> N;
    } while (N < 0);
    do {
        cout << "Ingresar el valor de M: ";
        cin >> M;
    } while (M < N);
    for (int i = N; i <= M; i++)
        suma = suma + i;
    cout << "La suma es: " << suma << endl;
    promedio = suma / (M - N + 1);
    cout << "El promedio es: " << promedio;
}
