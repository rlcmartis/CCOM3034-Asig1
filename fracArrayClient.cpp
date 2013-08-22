#include <iostream>
#include "fracArray.h"
using namespace std;

int main() {
	ArrayOfFractions L;
	system("clear");
	cout << "Contenido de L:" << endl;
	L.print();

	cout << endl <<  "Maximo, minimo y suma de elementos en L" << endl;
	L.maxi().print();
	cout << endl;
	L.mini().print();
	cout << endl;
	L.sum().print();
	cout << endl;


	L.sortAccending();
	cout << "Contenido de L, luego de ordenado" << endl;
	L.print();
	cout << endl;
	return 0;
}
