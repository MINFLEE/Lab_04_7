// Lab_04_7.cpp
// Котович Максим Михайлович
// Лабораторна робота № 4.7
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних співвідношень.
// Варіант 20

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
	int n = 0;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;
	cout << "-----------------------------------------" << endl;
	cout << "|" << setw(6) << "x " << "  |"
		<< setw(10) << "acos(x)" << " |"
		<< setw(7) << "S " << "    |"
		<< setw(5) << "n " << " |"
		<< endl;
	cout << "-----------------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		n = 1;
		a = x;
		S = a;
		do
		{
			n++;
			R = ((2 * n - 1) / (2 * n)) * ((2 * n - 1) / (2 * n + 1)) * pow(x, 2);
			a *= R;
			S += a;
		}
		while (fabs(a) >= eps);

		cout << "|" << setw(7) << setprecision(2) << x << " |"
					<< setw(10) << setprecision(5) << acos(x) << " |"
					<< setw(10) << setprecision(5) << S << " |"
					<< setw(5) << n << " |"
					<< endl;
		x += dx;
	}
	cout << "-----------------------------------------" << endl;
	
	return 0;
}


