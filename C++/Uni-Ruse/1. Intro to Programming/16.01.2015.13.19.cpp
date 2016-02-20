﻿/* Димитър Валериев Трифонов, КН, 50Б, 146518 */

/*

3) Да се състави програма, 

*/


#include "stdafx.h"
using namespace std;
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void main(){
	system("chcp 1251");

	int m, n, i, j;

	cout << "Enter m: "; cin >> m;
	cout << "Enter n: "; cin >> n;
	
	double *avg = new double[m];		// Масив за средно-аритметичното на всеки ред
	double sum = 0;						// Сума на елементите на даден ред
	double br = 0;						// Брой на елементите на даден ред


	// Дефиниране на двумерен динамичен масив
	int **A;
	A = new int*[m];
	for (i = 0; i < m; i++) A[i] = new int[n];

	// Въвеждане на елементите в двумерния масив и определяне на средно-аритметичното.
	for (i = 0; i < m; i++){
		br = 0;
		sum = 0;
		avg[i] = 0;
		cout << endl << i << " ред: " << endl;
		for (j = 0; j < n; j++){
			cout << "- A[" << i << "][" << j << "]: "; cin >> A[i][j];
			br++;
			sum += A[i][j];
			avg[i] = sum / br;
		}
	}

	cout << endl;

	// Извеждане на средно-аритметичното за всеки ред.
	for (i = 0; i < m; i++){
		cout << "Средно-аритметично на " << i << " ред: " << avg[i] << endl;
	}

	// Изтриване на динамичните масиви (в обратен ред)
	for (i = 0; i < m; i++) { delete[] A[i]; }		// Изтриване на i-ия ред от двумерния масив
	delete[]A;										// Изтриване на масива oт указатели, указващи редовете

	delete[]avg;
	

	_getch();
}