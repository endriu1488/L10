#include<iostream>
#include "Figura.h"
using namespace std;

Dreptunghi::Dreptunghi(int a1, int b1, int a2, int b2) {
	x1 = a1;
	y1 = b1;
	x2 = a2;
	y2 = b2;
}
float Dreptunghi::arie() {
	return (float)(x2 - x1)*(y2 - y1);
}
void Dreptunghi::afisare() {
	cout << "Dreptunghi cu coordonatele (" << x1 << "," << y1
		<< ")-(" << x2 << "," << y2 << "), si aria " << arie() << endl;
}
float Dreptunghi::perimetru()
{

	return 2*(abs(abs(x1)-abs(x2)))+(abs(abs(y1) - abs(y2)));
}
Cerc::Cerc(int a, int b, int raza) {
	x = a;
	y = b;
	r = raza;
}
float Cerc::arie() {
	const float PI = 3.14F;
	return PI * r * r;
}
void Cerc::afisare() {
	cout << "Cerc cu coordonatele (" << x << "," << y << "), raza "
		<< r << " si aria " << arie() << endl;
}
float Cerc::perimetru()
{
	float pi = 3.1415F;
	return 2*pi*r;
}
Triunghi::Triunghi(int x_a, int x_b, int x_c, int y_a, int y_b, int y_c) {
	this->x_a = x_a;
	this->y_a = y_a;
	this->x_b = x_b;
	this->y_b = y_b;
	this->x_c = x_c;
	this->y_c = y_c;
	
}
float Triunghi::semiperimetru() {
	float a = sqrt((x_b - x_c)*(x_b - x_c) + (y_b - y_c)*(y_b - y_c));
	float b = sqrt((x_a - x_c)*(x_a - x_c) + (y_a - y_c)*(y_a - y_c));
	float c = sqrt((x_a - x_b)*(x_a - x_b) + (y_a - y_b)*(y_a - y_b));
	float p = (a + b + c) / 2;
	return p;
}
float Triunghi::arie() {
	float a = sqrt((x_b - x_c)*(x_b - x_c) + (y_b - y_c)*(y_b - y_c));
	float b = sqrt((x_a - x_c)*(x_a - x_c) + (y_a - y_c)*(y_a - y_c));
	float c = sqrt((x_a - x_b)*(x_a - x_b) + (y_a - y_b)*(y_a - y_b)); 
	float p = (a + b + c) / 2;
	float A = sqrt(p*(p - a)*(p - b)*(p - c));
	return A;
}
void Triunghi::afisare() {
	cout << "Triunghi cu coordonatele (" << x_a << "," << x_b << "," << x_c << "," << y_a <<"," <<y_b <<"," << y_c << ") si aria " << arie() << endl;
}
float Triunghi::perimetru()
{
	float a = sqrt((x_b - x_c)*(x_b - x_c) + (y_b - y_c)*(y_b - y_c));
	float b = sqrt((x_a - x_c)*(x_a - x_c) + (y_a - y_c)*(y_a - y_c));
	float c = sqrt((x_a - x_b)*(x_a - x_b) + (y_a - y_b)*(y_a - y_b));
	return a+b+c;
}
Figura *figCuPerimetruMax(Figura **figura, int n) {
	float max = 0;
	Figura *figMax = NULL;
	for (int i = 0; i < n; i++) {
		float perimetru = figura[i]->perimetru();
		if (perimetru > max) {
			max = perimetru;
			figMax = figura[i];
		}
	}
	return figMax;
}


