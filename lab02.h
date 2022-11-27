#pragma once



//bai 5
bool laThangHopLe(int thang, int nam);
/* chuc nang: kiem tra nam nhuan va in so ngay trong thang
nam: thong so ma ta muon kiem tra
return co phai nam nhuan hay ko
*/
bool kiemTraNamNhuan(int nam);

/*chuc nang: in so ngay trong thang
nam: check xem co phai nam nhuan hay khong dua vao ham kiemTraNamNhuan
thang: in ra so ngay tuong ung voi thang nhap vao
ket qua tra ve: ngay cua thang
*/

int inSoNgayTrongThang(int nam, int thang);


//bai 11

double tinhSoTienPhat(double x);


//bai 12
void nhapSoNguyen(int x);


//bai 14
void giaiPTBac2(float a, float b, float c);


//bai 16
void tinhSoTien(char taikhoan, double sodutoithieu, double soducuoithang);


//bai 17
void tinhLuongMo(char gender, double weight, double wrist, double waist, double hip, double forearm, double& bodyfat, double& bodyfatpercentage);


//bai 18
double tinhBMI(double w, double h);


// #endif

