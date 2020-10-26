#include "..\labs_cpp\lab3\lab3A\random_t.cpp"
#include "xSquare.h"
#include<iostream>
#include <math.h>
#include <windows.h>
#include <fstream>



namespace Prog3_4 {

	void xSquare::Test(int i) {
		std::fstream outData;
		outData.open("outfile1.csv", std::fstream::binary | std::fstream::out | std::fstream::in);
		int j, k, n, size = 10, max = 10, time = 1;
		outData.seekg(0, std::ios::beg);
		outData << "╧	X	Time	Xmax =	" << "=ух2.нап(0,95\;9)"<<std::endl;

		for (int l = 0; l < 10; time += 1, l++) {

			std::cout <<"-----------------Test #" << l << std::endl;
			std::cout << " Time = " << time << std::endl;

			Item* arrI = creatArrI(max, this->upper);

			Score(arrI, size, time, i);

			float X = Xi2(max, i, arrI);

			outData	<< l <<	"	" << int(X) << ',' << int((X - int(X))*100) << "	" << time <<  std::endl;
			
			std::cout << "Statistical test value: " << X << std::endl;
			delete[] arrI;
		}

		outData.close();
	}

	void Score(Item* arrI, int size, int time, int i) {
		int j, n, k;
		for (j = 0; j < i; j++) {
			random_t R(size);
			Sleep(time);
			float* arrD = R.GetArr();
			for (n = 0; n < size; n++) {
				for (k = 0; arrD[n] > arrI[k].figure; k++);
				arrI[k].nomber++;
			}
		}
	}

	Item* creatArrI(int max, int upper) {
		int j;
		Item* arrI = new Item[max];
		for (j = 0; j < max; arrI[j].nomber = 0, j++);
		for (j = 0; j < max; j++) {
			arrI[max - j - 1].figure = upper - (float(j) / max) - 0.05;
		}
		return arrI;
	}

	float Xi2(int max, int i, Item* arrI) {
		int j;
		float X = 0, f = 10 * (float(i) / max);
		for (j = 0; j < max; j++)
			X = X + (pow((arrI[j].nomber - f), 2) / f);
		return X;
	}
}
