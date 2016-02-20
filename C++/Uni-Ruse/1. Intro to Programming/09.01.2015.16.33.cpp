﻿/* Димитър Валериев Трифонов, КН, 50Б, 146518 */


/*

20. Даден е двумерен масив А с m реда и n стълба. 
Да се състави програма, която създава нов масив а0, а1,...,аm-1, 
като стойността на аi е равна на индекса на най-малката положителна стойност в i-ия ред.

*/


#include "stdafx.h"
using namespace std;
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void main(){
	system("chcp 1251");

	int A[30][30], m, n;
	int i, j;

	int minPos[30];
	int minPos_ind[30];

	cout << "Enter m: "; cin >> m;
	cout << "Enter n: "; cin >> n;

	for (i = 0; i < m; i++){
		minPos[i] = INT_MAX;
		minPos_ind[i] = 0;
		cout << endl << i << " ред: " << endl;
		for (j = 0; j < n; j++){
			cout << "- A[" << i << "][" << j << "]: "; cin >> A[i][j];
			if (A[i][j] < minPos[i] && A[i][j]>0) {
				minPos[i] = A[i][j];
				minPos_ind[i] = j;
			}
		}
		
	}

	cout << endl;

	for (i = 0; i < m; i++){
		cout << "Индексът на най-малката положителна стойност на " << i << " ред: " << minPos_ind[i] << endl;
	}





	_getch();
}