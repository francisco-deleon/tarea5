/*	
*	Programa de la Clase 8 de C++ (Punteros)
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Francisco Antonio De León Natareno
*/

#include <iostream>

using namespace std;

main() {
	int edad = 25, *p_edad;
	p_edad = &edad;
	
	cout << "Variable Edad: " << edad << endl;
	cout << "Puntero Edad: " << *p_edad << endl;
	
	cout << "---------- Cambiar Valores ---------" << endl;
	*p_edad = 40;
	
	cout << "Variable Edad: " << edad << endl;
	cout << "Puntero Edad: " << *p_edad << endl;
	
	cout << "------ Otra variable a p_edad ------" << endl;
	int edad2 = 100;
	p_edad = &edad2;
	edad = 400;
	
	cout << "Variable Edad: " << edad << endl;
	cout << "Puntero Edad: " << *p_edad << endl;
	cout << "Variable Edad2: " << edad2 << endl;
	
	system("pause");
}