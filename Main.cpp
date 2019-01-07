#include<iostream>
#include "Figura.h"
using namespace std;

int main() {
	const int n = 3;
	Figura * figura[n];
	figura[0] = new Dreptunghi(1, 2, 4, 4);
	figura[1] = new Cerc(1, 1, 3);
	figura[2]= new Triunghi(2, 6, 1, 3, 4, 9);
	Triunghi T1(2, 6, 1, 3, 4, 9);
	T1.arie();



	Figura *figMax = figCuPerimetruMax(figura, n);
	cout << "Dintre figurile:" << endl;
	for (int i = 0; i<3; i++) {
		cout << i << ". ";
		figura[i]->afisare();
	}
	cout << endl << " perimetru maxim il are: " << endl;
	figMax->afisare();
	for (int i = 0; i<n; i++) {
		delete figura[i];
	}
	system("pause");
	return 0;

}