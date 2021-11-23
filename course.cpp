#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b, c;
	double d,x,x1, x2;
	cin >> a >> b >> c;
	if (a == 0) {
		a = 1;
	
	d = pow((pow(b, 2)) - (4 * a * c), 0.5);
	if (d > 0) {
		x1 = ((-b) + d) / (2 * a);
		x2 = ((-b) - d) / (2 * a);
		cout << x1 << ' ' << x2;
	}
	if (d == 0) {
		x = (-b) / (2 * a);
		cout << x;
	}
	if (d < 0) {
		cout << ' ';
	}
	system("pause");
	return 0;
}
