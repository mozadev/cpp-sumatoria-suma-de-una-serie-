/* Realice una aplicación en C++ que solicite el ingreso de un
numero entero positivo (n) y calcule la sumatoria de los n
primeros términos de la siguiente sumatoria:
?? = 1!+2!+3!+4!+?…………………..+??!
*/



#include<iostream>
#include<conio.h>

using namespace std;

int ingresn()
{
	int n; cout << "ingrese numero"; cin >> n;
	while (n <= 0 || n >= 21)
	{
		cout << "ingrese numero"; cin >> n;
	}
	return n;
}



float ingresa()
{
	float a; cout << "ingrese a"; cin >> a;
	while (a <= 0.5 || a >= 2)
	{
		cout << "ingrese numero"; cin >> a;
	}
	return a;
}
double sumaserie(int n, float a)
{
	float suma = 0;
	for (int i = 1; i <= n; i++)
		suma = suma + pow(-1, i + 1)*(2 * i - 1)
		*pow(a,pow(2,i - 1))/ (2 * i);

	return suma;
}

int main()
{
	int n = ingresn();
	float a = ingresa();
	
	cout << "la sumatoria es " << sumaserie(n,a);
	_getch();

}