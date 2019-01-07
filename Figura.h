#pragma once

class Figura {
public:
	virtual ~Figura() {}
	virtual float arie() = 0;
	virtual void afisare() = 0;
	virtual float perimetru() = 0;
};
class Dreptunghi : public Figura {
private:
	int x1, y1, x2, y2;
public:
	Dreptunghi(int x1, int y1, int x2, int y2);
	float arie();
	void afisare();
	float perimetru();
};
class Cerc : public Figura {
private:
	int x, y, r;
public:
	Cerc(int x, int y, int r);
	float arie();
	void afisare();
	float perimetru();
};
class Triunghi : public Figura {
private:
	int x_a, x_b, x_c, y_a, y_b, y_c;
public:
	Triunghi(int x_a, int x_b, int x_c, int y_a, int y_b, int y_c);
	float arie();
	float semiperimetru();
	void afisare();
	float perimetru();
};
Figura *figCuPerimetruMax(Figura **figura, int n);