#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;
/*
	V C++ jsou operátory funkce jako každá jiná.
	Vector2 obsahuje pøetypovávací operátor char*(), který se volá tehdy, když NÌÈEMU typu char* pøiøadíme hodnotu Vector2. Pokud Vector2 obsahuje pøetypovávací operátor, zavolá se tato funkce. Tento operátor tedy funguje podobnì jako metoda toString() z jiných jazykù. Napište operátor double(), který vrátí velikost Vector2.
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
	Podobnì fungují aritmetické operátory, které lze zapisovat infixovì - operátor uprostøed, napø a*b - to je jenom jiný zápis a.operator*(b). Z toho ale plyne, že lze použít napø. v*3, ale už ne 3*v. Tento problém vyøešíme ve tøídì Vector2b.
*/
class Vector2a : public Vector2 {
public:
	using Vector2::Vector2; // použij konstruktor pro Vector2

	Vector2a operator*(int n) {
		return Vector2a(n*x, n*y);
	}
};

/*
	Vector2b øeší nedostatky Vector2a pomocí níže uvedené globální funkce. Implementujte do této tøídy také operátor pro vektorový souèin (tj. násobení vektoru vektorem)
*/
class Vector2b : public Vector2 {
public:
	using Vector2::Vector2;

	Vector2b operator*(int n) {
		return Vector2b(n*x, n*y);
	}
};

// globální funkce: operator*(a,b) je totéž, co a*b
Vector2b operator*(int n, Vector2b& v) {
	return v * n;
}

int main() {
//	Vector2 v1 = {2,4}; // inicializace pomocí seznamu, od C++11
//	Vector2 v1 {2,4}; // pøímá inicializace èlenù, styl C
	Vector2 v1 (2,4); // implicitní volání konstruktoru
	puts(v1); // funguje díky operátoru char*()

	Vector2a v2 {2,4};
	puts(v2 * 3); // funguje díky operátorùm char*() a *()
	// puts(3 * v2); // chyba, v2 musí být na levé stranì

	Vector2b v3 {2,4};
	puts(3 * v3);
}
