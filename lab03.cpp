#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;
//bai 9 

void inTamGiac(int h) {
	for (int i = 1; i <= h; i++) {
		for (int j = 1;j <= 2 * h - 1; j++) {

			if (j >= h - (i - 1) && j <= h + (i - 1))
			{

				cout << "*";
			}

			else
				cout << " ";
		} cout << endl;


	}
}

//bai 13
	double  inSoNamToiThieu(double populationOfA, double populationOfB,
	double growthRateOfA, double growthRateOfB,double &year){
	year = 0;
	while (populationOfA <= populationOfB) {
		populationOfA += populationOfA * growthRateOfA;
		populationOfB += populationOfB * growthRateOfB;
		year++;

	}
	return year;
}
	
	//bai 15
	float largerheight(float height_1, float height_2) {
		if (height_1 > height_2) return height_1;
		return height_2;
	}
	float smallerheight(float height_1, float height_2) {
		if (height_1 < height_2) return height_1;
		return height_2;
	}
	//bai 17
	
	void dongHoDemNguoc(int phut, int giay) {
		for (int min = phut; min >= 0; min--)
		{

			for (int sec = giay; sec >= 0; sec--)
			{

				if (sec <= 5 && sec > 0 && min == 0) {
					cout << setw(2) << setfill('0') << min << " : " << setw(2) << setfill('0') << sec << " Tick tac " << endl;

					Sleep(1000);

				}
				else if (sec == 0 && min == 0) {
					cout << setw(2) << setfill('0') << min << " : " << setw(2) << setfill('0') << sec << " Reng reng reng" << endl;
					Sleep(1000);

				}
				else {
					cout << setw(2) << setfill('0') << min << " : " << setw(2) << setfill('0') << sec << endl;
					Sleep(1000);

				}

				giay = 59;


			}
		}
	}
	



	//bai 18 
	void daySo(int x) {
		cout << x << ", ";
		while (x != 1) {
			if (x % 2 == 0) {
				x = x / 2;
			}
			else
				x = 3 * x + 1;
			if (x != 1) cout << x << ", ";
		}
			cout << 1;
	}
		int position(int x) {
			int k = 0;
			while (x != 1) {
				if (x % 2 == 0) {
					x /= 2;
				}
				else x = 3 * x + 1;
				k++;
			}
			return k;
		}
		
	
		//bai 16
	
		void mayTinh(short luachon, int a, int b) {
			switch (luachon) {
			case 1:
				cout << a << " + " << b << " = " << a + b << endl;
				return;
			case 2:
				cout << a << " - " << b << " = " << a - b << endl;
				return;
			case 3:
				cout << a << " * " << b << " = " << a * b << endl;
				return;
			case 4:
				if (b == 0)
					cout << "khong the chia cho 0" << endl;
				else
					cout << a << " / " << b << " = " << (float)a / b << endl;
				return;
			}
		}
	
