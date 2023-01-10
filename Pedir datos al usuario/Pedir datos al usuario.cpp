#include <iostream>

using namespace std;

int main()
{
	int edad;
	char sexo[10];
	float altura;

	cout << "dime tu edad: "; cin >> edad;
	cout << "dime tu edad: "; cin >> sexo;
	cout << "dime tu altura, pero en metros: "; cin >> altura;

	cout << "\nEdad: " << edad << endl;
	cout << "sexo: " << sexo << endl;
	cout << "Altura:" << altura << endl;

	return 0;
}

