#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

int main() {
    // Crear un objeto de usuario
    Usuario usuario("kinfantas", "mipassword");

    // Solicitar al usuario que inicie sesión
    string input_username, input_password;
    cout << "Ingresa tu nombre de usuario: ";
    cin >> input_username;
    cout << "Ingresa tu contraseña: ";
    cin >> input_password;

    // Verificar el inicio de sesión
    if (usuario.verificarLogin(input_username, input_password)) {
        cout << "Inicio de sesión exitoso." << endl;
    }
    else {
        cout << "Nombre de usuario o contraseña incorrecta." << endl;
    }

    return 0;
}
