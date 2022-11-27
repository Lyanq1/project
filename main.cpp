#include <iostream>
#include <iomanip>
#include "lab02.h"
#include "lab03.h"
using namespace std;

#undef main


int main() {
	//lab 02 (5,11,12,14,16,17,18)
	//bai 5
	int nam, thang;
	cout << "Hay nhap vao nam: ";
	cin >> nam;

	if (kiemTraNamNhuan(nam) == true) {
		cout << "Nam " << nam << " la nam nhuan. \n";
	}

	else {
		cout << "Nam " << nam << " Khong la nam nhuan. \n";
	}

	cout << "Nhap so thang: ";
	cin >> thang;
	if (laThangHopLe(thang, nam) == false)
	{
		cout << "Vui long nhap lai thang hop le! \n";
	}
	else {
		cout << "thang " << thang << " co " << inSoNgayTrongThang(kiemTraNamNhuan(nam), thang) << " ngay \n";
	}
	cout << "----------------------------------------- \n";

	//bai 11
	double x;
	cout << "Hay nhap vao toc do di qua cho phep: ";
	cin >> x;
	cout << "Ban bi phat " << tinhSoTienPhat(x) << " trieu.";
	cout << "\n";
	cout << "----------------------------------------- \n";

	//bai 12 
	int n;
	cout << "Hay nhap vao so nguyen : ";
	cin >> n;
	if (n >= 0 && n <= 35) {
		nhapSoNguyen(n);
	}
	else {
		cout << "So nguyen nhap vao khong hop le! \n";
	}
	cout << "----------------------------------------- \n";

	//bai 14
	float a, b, c;
	cout << "Nhap a = "; cin >> a;
	cout << "Nhap b = "; cin >> b;
	cout << "Nhap c = "; cin >> c;
	giaiPTBac2(a, b, c);
	cout << "----------------------------------------- \n";

	//bai 16
	char loaitaikhoan;
	cout << "Xin hay nhap thong tin tai khoan: ";
	cin >> loaitaikhoan;
	if (loaitaikhoan != 't' && loaitaikhoan != 'v') {
		cout << "Tai khoan nhap vao khong hop le! \n";
	}
	else {
		double sodutoithieu, soducuoithang;
		cout << "Hay nhap so du toi thieu va so du cuoi thang: ";
		cin >> sodutoithieu >> soducuoithang;
		tinhSoTien(loaitaikhoan, sodutoithieu, soducuoithang);
		cout << endl;
	}
	cout << "----------------------------------------- \n";

	//bai 17
	double weight, wrist, waist = 0, hip = 0, forearm = 0, bodyfat, bodyfatpercentage;
	char gioitinh;
	cout << "Xin hay nhap gioi tinh(m hoac w): ";
	cin >> gioitinh;
	if (gioitinh == 'm') {
		cout << "Hay nhap can nang cua ban: ";
		cin >> weight;
		cout << "Hay nhap kich thuoc co tay cua ban: "; cin >> wrist;
	}
	else {
		cout << "Hay nhap can nang cua ban: ";
		cin >> weight;
		cout << "Hay nhap kich thuoc co tay cua ban: ";
		cin >> wrist;
		cout << "Hay nhap kich thuoc eo: ";
		cin >> waist;
		cout << "Hay nhap kich thuoc hong: ";
		cin >> hip;
		cout << "Hay nhap kich thuoc canh tay: ";
		cin >> forearm;
	}
	tinhLuongMo(gioitinh, weight, wrist, waist, hip, forearm, bodyfat, bodyfatpercentage);
	cout << "Luong mo cua ban = " << bodyfat << endl;
	cout << "Phan tram luong mo cua ban = " << bodyfatpercentage << " %" << endl;
	cout << "----------------------------------------- \n";



	//bai 18
	double cannang, chieucao;
	cout << "Hay nhap vao can nang: ";cin >> cannang;
	cout << "Hay nhap vao chieu cao: ";cin >> chieucao;
	double BMI = tinhBMI(cannang, chieucao);
	if (BMI < 18.5) cout << "Duoi chuan";
	else if (BMI >= 18.5 && BMI < 25) cout << "Chuan";
	else if (BMI >= 25 && BMI < 30) cout << "Thua can";
	else if (BMI >= 30 && BMI <= 40) cout << "Beo - nen giam can";
	else if (BMI > 40) cout << "Rat beo - can giam can ngay";
	cout << "\n";
	cout << "----------------------------------------- \n";

	//lab 03 9 13 15 16 17 18


	//bai 9_loop 
	cout << "Nhap vao chieu cao tam giac: ";
	int h;
	cin >> h;
	inTamGiac(h);
	cout << "\n";
	cout << "----------------------------------------- \n";


	//bai 13_loop 10d
	double populationOfA, populationOfB, sonam, growthRateOfA, growthRateOfB;
	cout << "Dan so cua quoc gia A: "; cin >> populationOfA;
	cout << "Dan so cua quoc gia B: "; cin >> populationOfB;
	cout << "Muc do tang truong dan so cua quoc gia A: "; cin >> growthRateOfA;
	cout << "Muc do tang truong dan so cua quoc gia B: "; cin >> growthRateOfB;
	inSoNamToiThieu(populationOfA, populationOfB, growthRateOfA, growthRateOfB, sonam);
	cout << "So nam toi thieu de dan so quoc gia A vuot qua dan so quoc gia B la: " << sonam << " nam";
	cout << endl;
	cout << "----------------------------------------- \n";


	//bai 15_loop 
	float max = -10000.00, minim = 10000.00;
	float height;

	do {
		cout << "Nhap vao chieu cao cua cac ban trong lop: ";
		cin >> height;
		if (height == 0) {
			cout << "Chieu cao cua hoc sinh dung dau danh sach la: " << minim << " (m)\n";
			cout << "Chieu cao cua hoc sinh dung cuoi danh sach la: " << max << " (m)\n";
			break;
		}
		else {
			max = largerheight(max, height);
			minim = smallerheight(minim, height);
		}
	} while (chieucao != 0);

	cout << "----------------------------------------- \n";





	//bai 17 
	int phut, giay, min = 0, sec = 0;
	cout << "Nhap vao so phut: ";cin >> phut;
	cout << "Nhap vao so giay: ";cin >> giay;
	dongHoDemNguoc(phut, giay);
	cout << "----------------------------------------- \n";


	//bai 18 10d
	int so;
	cout << "Hay nhap gia tri cho a: ";
	cin >> so;
	cout << "k = " << position(so) << endl << "Day so la: ";
	daySo(so);
	cout << endl;
	cout << "----------------------------------------- \n";

	//bai 16 10d

	short choice;
	while (true) {
		cout << "MAY TINH DON GIAN\n1. Cong\n2. Tru\n3. Nhan\n4. Chia\n0. Dung chuong trinh\n";
		cout << "\nLua chon cua ban la: ";
		cin >> choice;
		cout << endl;
		if (choice == 0) {
			cout << "Ban da thoat chuong trinh!" << endl;
			break;
		}
		else {
			int a, b;
			cout << "Moi nhap vao so thu nhat: ";
			cin >> a;
			cout << "Moi nhap vao so thu hai: ";
			cin >> b;
			cout << "Ket qua: ";
			mayTinh(choice, a, b);
			cout << "----------------------------------------" << endl;
		}
	}
}
