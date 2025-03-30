/*	
*	Programa de la Clase 9 de C++ (Punteros Dinámicos)
*	
*	Universidad Mariano Gálvez de Guatemala
*	Facultad de Ingeniería en Sistemas
*	
*	Autor:
*	Francisco Antonio De León Natareno
*/

#include <iostream>

using namespace std;

// Punteros con asignacion de memoria dinamica
// new = reservar un espacio en memoria
// delete[] = se utiliza para liberar la memoria
// garbage collector (recolector de basura)

main() {
	int fil = 0, col = 0, **pm_notas;
	cout << "Ingrese la cantidad de Estudiantes: ";
	cin >> fil;
	cout << "Ingrese la cantidad de Notas por estudiante: ";
	cin >> col;
	
	pm_notas = new int *[fil];
	
	for(int i=0; i<fil; i++) {
		pm_notas[i] = new int[col];
	}
	
	for(int i=0; i<fil; i++) {
		cout << "__________ Estudiante " << i << " __________" << endl;
		for(int j=0; j<col; j++) {
			cout << "Nota " << j << ": ";
			cin >> *(*(pm_notas+i)+j);
		}
		cout << "__________________________________" << endl;
	}
	
	cout << "---------- Mostrar Notas ---------" << endl;
	
	for(int i=0; i<fil; i++) {
		for(int j=0; j<col; j++) {
			cout << *(*(pm_notas+i)+j) << endl;
		}
		cout << "__________________________________" << endl;
	}
	
	// LIBERAR MEMORIA
	for(int i=0; i<fil; i++) {
		delete[] pm_notas[i];
	}
	
	delete[] pm_notas;
	
	system("pause");
}