#include <iostream>

using namespace std;

int mayor(int arrNum[15], int n);
void Fibonacci(int fibonacci[30]);
void orden(int fibonacci[30], char arrWord[15], int arrNum[15], int n, int mayor);

int main(int argc, char** argv) {
	int n, i, num, Mayor;
	int serie[15];
	int arrNum[15], fibonacci[30];
	char arrWord[15];
	char word;
	cout << "Ingrese la cantidad de numeros fibonacci y caracteres que tendra la palabra:  ";
	cin >> n;
	cout << "Ingrese la serie de numeros: ";
	for (i = 0; i < n; i++) {
		cin >> num;
		arrNum[i] = num;
	}
	cout << "Ingrese la serie de letras:  ";
	for (i = 0; i < n; i++) {
		cin >> word;
		arrWord[i] = word;
	}
	Fibonacci(fibonacci);
	Mayor = mayor(arrNum, n);
	orden(fibonacci, arrWord, arrNum, n, Mayor);
	return 0;
}
