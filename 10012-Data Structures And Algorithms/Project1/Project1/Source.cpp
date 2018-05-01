#include <iostream>

class X
{
public:
	double method(double a, double b) {
		return a * b;
	}
	double method(double a, int b) {
		return a +2+ b;
	}
	double method(int a, double b) {
		return a +1+ b;
	}
	int method(int a, int b) {
		return a + b;
	}
};
int main() {
	auto x = new X();
	auto a = x->method(1.0,3.0);
	auto b = x->method(1, 3.0);
	auto c = x->method(1.0, 3);
	auto d = x->method(1, 3);

	std::cout << a << " " << b << ' ' << c << " " << d << "\n " << x;
	return 0;
}