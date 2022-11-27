#include <iostream>

using namespace std;


//bai 5

bool laThangHopLe(int thang, int nam)
{
	if (thang > 12 || thang < 0) {
		return false;
	}
	if (nam < 0) {
		return false;
	}
}

bool kiemTraNamNhuan(int nam) {
	if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
		return true;

	}
	else {
		return false;
	}
}


int inSoNgayTrongThang(int nam, int thang) {

	int numOfdays{};
	switch (thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		numOfdays = 31;
		break;
	case 4: case 6: case 9: case 11:
		numOfdays = 30;

		break;
	case 2:
		if (kiemTraNamNhuan(nam) == true) {
			numOfdays = 28;

		}
		else {
			numOfdays = 29;


		}
		break;

	}
	return numOfdays;
}

//bai 11

double tinhSoTienPhat(double x) {
	if (x > 5 && x <= 10) {
		x= 0.7;
	}
	else if (x > 10 && x <= 20) {
		x = 2.5;
	}
	else if (x > 20 && x <= 35) {
		x = 5.5;
	}
	else if (x > 35) {
		x = 7.5;
	}
	else {
		x = 0;
	}
	return x;
}

//bai 12
void nhapSoNguyen(int x) {
	int  dieukien = 0;

	if (x >= 0 && x <= 35) {
		dieukien = 1;
	}

	if ((x <= 9) && (dieukien == 1)) {
		cout << x;
	}
	if (x >= 10 && x <= 35) {
		  cout << static_cast<char> (x - 10 + 'A') <<endl; //x - 10 de ban co the bat dau tu 0
		//+'A' de ban them gia tri 'A' cua ASCII vao
	}
	else {
		cout << "Du lieu nhap vao khong hop le! \n";
	}
	
}

//bai 14
void giaiPTBac2(float a, float b, float c) {
	// xet truong hop a == 0 va giai pt bac 1 bx + c= 0
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "Phuong trinh co so vo nghiem " << endl; // truong hop  b == 0 c== 0

			}
			else {
				cout << "Phuong trinh vo nghiem " << endl;// truong hop a==0 va b== 0  c!= 0
			}
		}
		else {
			cout << "Phuong trinh co nghiem duy nhat la " << -c / b << endl;// truong hop a == 0 b != 0
		}
		return;
	}
	//tinh delta
	else {
		float delta, x1, x2;
		delta = b * b - 4 * a * c;
		if (delta < 0) {
			cout << "Phuong trinh vo nghiem" << endl;
		}
		else if (delta == 0) {
			cout << "Phuong trinh co nghiem kep: x1 = x2 = " << -b / (2 * a) << endl;
		}
		else {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "Nghiem thu nhat x1 = \n" << x1<<endl;
			cout << "Nghiem thu hai x2 = \n" << x2 << endl;
		}
	}
}

//bai 16

void tinhSoTien(char loaitaikhoan, double sodutoithieu, double soducuoithang) {
	// Tiet kiem: cuoi thang >= toi thieu => lai 4%
	//Vang lai: cuoi thang - toi thieu >= 5000 => lai 3% or lai 5%
	//tiet kiem : so du < toi thieu => -10 do
	// vang lai:___________________ => -25 do

	const double phi_dich_vu_cua_tiet_kiem = 10.00;
	const double phi_dich_vu_cua_vang_lai = 25.00;
	const double lai_suat_cua_tiet_kiem = 0.04;
	const double lai_suat_thap_cua_vang_lai = 0.03;
	const double lai_suat_mac_dinh_cua_vang_lai = 0.05;

	if (loaitaikhoan == 't') {

		if (soducuoithang < sodutoithieu)
			cout << "Phi dich vu phai dong la $" << phi_dich_vu_cua_tiet_kiem;

		else
			cout << "tong tien (da tinh lai) nhan duoc la: $" << soducuoithang * lai_suat_cua_tiet_kiem
			<< " voi lai suat " << lai_suat_cua_tiet_kiem * 100 << "%";
	}

	else if (loaitaikhoan == 'v') {
		if (soducuoithang < sodutoithieu)
			cout << "Phi dich vu phai dong la $" << phi_dich_vu_cua_vang_lai;

		else {
			if (soducuoithang >= (sodutoithieu + 5000))
				cout << "tong tien (da tinh lai) nhan duoc la: $" << soducuoithang * lai_suat_thap_cua_vang_lai
				<< " voi lai suat " << lai_suat_thap_cua_vang_lai * 100 << "%";

			else
				cout << "tong tien (da tinh lai) nhan duoc la: $" << soducuoithang * lai_suat_mac_dinh_cua_vang_lai
				<< " voi lai suat " << lai_suat_mac_dinh_cua_vang_lai * 100 << "%";

		}
	}
	cout << endl;
}
//bai 17

void tinhLuongMo(char gender, double weight, double wrist, double waist, double hip, double forearm, double &bodyfat ,double &bodyfatpercentage) {

	double A1, A2, A3, A4, A5, B;

	switch (gender) {
	case 'm':
		A1 = (weight * 1.082) + 9.442;
		A2 = wrist * 4.15;
		B = A1 - A2;
		bodyfat = weight - B;
		bodyfatpercentage = (bodyfat * 100) / weight;
		break;

	case 'w':
		A1 = (weight * 0.732) + 8.987;
		A2 = (wrist) / 3.140;
		A3 = (waist) * 0.157;
		A4 = (hip) * 0.249;
		A5 = (forearm) * 0.434;
		B = A1 + A2 - A3 - A4 + A5;
		bodyfat = weight - B;
		bodyfatpercentage = (bodyfat * 100) / weight;
		break;
	default:
		break;
	}
}

//bai 18
double tinhBMI(double w, double h) {
	return w / (h * h);
}



