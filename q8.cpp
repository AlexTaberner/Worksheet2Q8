#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void orderNumbers(int& a, int& b, int& c) {
	a >= b ? swap(a, b) : NULL;
	a >= c ? swap(a, c) : NULL;
	b >= c ? swap(b, c) : NULL;
}

void calculateArea(int a, int b, int c) {
	double perimiter = a + b + c;
	double perimiterOverTwo = perimiter / 2.0;
	double area = sqrt(perimiterOverTwo * (perimiterOverTwo - a) * (perimiterOverTwo - b) * (perimiterOverTwo - c));
	cout << "area is: " << area << endl;
}

bool calculatePythagorus(int a, int b, int c) {
	orderNumbers(a, b, c);
	bool returnBool = ((a ^ 2) + (b ^ 2) == (c ^ 2)) ? true : false;
	return returnBool;
}

int main() {
	while (true) {
		int a, b, c;
		cout << "Input a, b, c: ";
		cin >> a >> b >> c;
		if (calculatePythagorus(a, b, c)) calculateArea(a, b, c);
		else cout << "ERROR" << endl;
	}
	return 0;
}
