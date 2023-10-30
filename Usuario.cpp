#include "Usuario.h"
#include <iostream>
#include <string>

// Constructor
Usuario::Usuario(string _login, string _password) 
{
    login = _login;
    password = _password;
}

// Función para verificar el inicio de sesión
bool Usuario :: verificarLogin(string _username, string _password) 
{
    return (_username == _username && password == _password);
}
