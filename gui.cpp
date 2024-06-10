#include <iostream>

int main() {
	setlocale(LC_ALL, "rus");
	using namespace std;
	double y, x, s, h, n, sum;
	double a = 0.2, b = 0.8;
	h = (b - a) / 10;
	int k = 100;


	for (x = a; x <= b; x += h)
	{
		y = pow(3, x - 1);
		s = 1;
		sum = 1;
		cout << "y(x)= " << y << " || ";

		for (n = 1; n <= k; n++) {
			s *= (x - 1)*log(3) / n;
			sum += s;
		}
		cout << "s(x) = " << sum << endl;
	}

<<<<<<< HEAD
int main()
{
    std::cout << "Hello World!\n";
	std::cout << "Hello Ignat!\n";
	std::cout << "Hello for all!\n";
	std::cout << "Master's branch";
=======
>>>>>>> 598b38ebc58e980c1d9bc4c047f190dfa69a611d
}


