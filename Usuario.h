#pragma once
#include <iostream>
#include <string>

using namespace std;
class Usuario
{
private:
	//atributos
	string login;
	string password;

	//metodos
public:
	Usuario(string _login, string _password);
	bool verificarLogin(string _login, string _password);

};
