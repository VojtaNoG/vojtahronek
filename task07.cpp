#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;
/*
	V C++ jsou oper�tory funkce jako ka�d� jin�.
	Vector2 obsahuje p�etypov�vac� oper�tor char*(), kter� se vol� tehdy, kdy� N��EMU typu char* p�i�ad�me hodnotu Vector2. Pokud Vector2 obsahuje p�etypov�vac� oper�tor, zavol� se tato funkce. Tento oper�tor tedy funguje podobn� jako metoda toString() z jin�ch jazyk�. Napi�te oper�tor double(), kter� vr�t� velikost Vector2.
*/
class Vector2 {
protected:
	char buffer[16];
public:
	int x;
	int y;

	Vector2(int a, int b) : x(a), y(b) {
	}

	operator char*() {
		snprintf(buffer, 15, "[%d,%d]", x, y);
		return buffer;
	}

	operator double() {
    return sqrt(x^2+y^2);
	}
};

/*
	Podobn� funguj� aritmetick� oper�tory, kter� lze zapisovat infixov� - oper�tor uprost�ed, nap� a*b - to je jenom jin� z�pis a.operator*(b). Z toho ale plyne, �e lze pou��t nap�. v*3, ale u� ne 3*v. Tento probl�m vy�e��me ve t��d� Vector2b.
*/
class Vector2a : public Vector2 {
public:
	using Vector2::Vector2; // pou�ij konstruktor pro Vector2

	Vector2a operator*(int n) {
		return Vector2a(n*x, n*y);
	}
};

/*
	Vector2b �e�� nedostatky Vector2a pomoc� n�e uveden� glob�ln� funkce. Implementujte do t�to t��dy tak� oper�tor pro vektorov� sou�in (tj. n�soben� vektoru vektorem)
*/
class Vector2b : public Vector2 {
public:
	using Vector2::Vector2;

	Vector2b operator*(int n) {
		return Vector2b(n*x, n*y);
	}
};

// glob�ln� funkce: operator*(a,b) je tot�, co a*b
Vector2b operator*(int n, Vector2b& v) {
	return v * n;
}

int main() {
//	Vector2 v1 = {2,4}; // inicializace pomoc� seznamu, od C++11
//	Vector2 v1 {2,4}; // p��m� inicializace �len�, styl C
	Vector2 v1 (2,4); // implicitn� vol�n� konstruktoru
	puts(v1); // funguje d�ky oper�toru char*()

	Vector2a v2 {2,4};
	puts(v2 * 3); // funguje d�ky oper�tor�m char*() a *()
	// puts(3 * v2); // chyba, v2 mus� b�t na lev� stran�

	Vector2b v3 {2,4};
	puts(3 * v3);
}