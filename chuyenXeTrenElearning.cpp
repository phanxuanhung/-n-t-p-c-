#include <iostream>
using namespace std;

class chuyenXe {
	int maSo;
	string name;
	int soXe;
public:
	chuyenXe(){}
	chuyenXe(int m, string n, int soX)
	{
		maSo = m;
		name = n;
		soXe = soX;
	}
	
	virtual void nhap() {
		cout<<"nhap ma so: "<<endl;
		cin>>maSo;
		cout<<"nhap name: "<<endl;
		cin>>name;
		cout<<"nhap so xe: "<<endl;
		cin>>soXe;
	}
	
	virtual void xuat() {
		cout<<maSo<<"\t"<<name<<"\t"<<soXe<<"\t";
	}
	
	virtual bool vuotDinhMuc() {}
};

class noiThanh:public chuyenXe {
	int soTuyen;
	int soKm;
public:
	noiThanh(){}
	noiThanh(int m, string n, int soX, int soT, int soK):chuyenXe(m, n, soX){
		soTuyen = soT;
		soKm = soK;
	}
	
	void nhap() {
		chuyenXe::nhap();
		cout<<"nhap so tuyen: "<<endl;
		cin>>soTuyen;
		cout<<"nhap soKm: "<<endl;
		cin>>soKm;
	}
	
	void xuat() {
		chuyenXe::xuat();
		cout<<soTuyen<<"\t"<<soKm<<endl;
	}
	
	bool vuotDinhMuc() {
		return soKm > 1000;
	}
	
};

class ngoaiThanh:public chuyenXe {
	string noiDen;
	int soNgay;
public:
	ngoaiThanh(){}
	ngoaiThanh(int m, string n, int soX, string noiD, int soN):chuyenXe(m,n,soX) {
		noiDen = noiD;
		soNgay = soN;
	}
	
	void nhap() {
		chuyenXe::nhap();
		cout<<"nhap noi den: "<<endl;
		cin>>noiDen;
		cout<<"nhap so ngay: "<<endl;
		cin>>soNgay;
	}
	
	void xuat() {
		chuyenXe::xuat();
		cout<<noiDen<<"\t"<<soNgay<<endl;
	}
	
	bool vuotDinhMuc() {
		return soNgay > 5;
	}
};

int main() {
	int n;
	int length =2;
	chuyenXe *chuyenxe[length];
	
	for(int i=0; i< length;i++) {
		cout<<"1.nhap noi thanh\n2.nhap ngoai thanh"<<endl;
		cin>>n;
		if(n==1){
			chuyenxe[i] = new noiThanh();
			chuyenxe[i]->nhap(); 
		}else if(n==2){
			chuyenxe[i] = new ngoaiThanh();
			chuyenxe[i]->nhap();
		}else {
			cout<<"vui long chon 1 hoac 2!"<<endl;
			i--;
			continue;
		}
		
	}
	
	for(int i=0; i<length;i++) {
		chuyenxe[i]->xuat();
	}
	cout<<"cac xe vuot dinh muc la: "<<endl;
	for(int i=0; i<length;i++) {
		if(chuyenxe[i]->vuotDinhMuc()){
			cout<<"xe thu "<<i+1<<endl;
		}
	}
}
