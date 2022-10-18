#include <iostream>
#include "Drobi.h"
using namespace std;

int a, b, c, d, k, m, e, f;

void process() {
	sokr(&a, &b);
	sokr(&c, &d);
	sokr(&k, &m);
	sokr(&e, &f);
	summ(&a, &b, &c, &d);
	summ(&a, &b, &k, &m);
	mult(&a, &b, e, f);
	sokr(&a, &b);
}
double otv(double a, double b) {
	return a / b;
}

void main() {
	cin >> a >> b >> c >> d >> k >> m >> e >> f;
	cout << "(" << a << "/" << b << "+" << c << "/" << d<< "+" << k << "/" << m << ")" << "*" << e << "/" << f << " = ";
	process();
	cout << a << "/" << b << " = " << otv(double(a), double(b));
}

// 2 задание
