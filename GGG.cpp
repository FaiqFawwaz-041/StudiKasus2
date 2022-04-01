#include<iostream>
using namespace std;
class slipGaji {
	public:
		void input();
		void proses();
		void gajian();
		void output();
		void prosesstruk();
	private:
		int antri, bidang,pilih, jenis,kerja,posisi;
		float gaji,bonus,bonus2;
		string a, bidang;
		
};

void slipGaji::input(){
	cout<<"Pilih Bidang"<<endl;
	cout<<"1. Express JS    : 15 Juta / bulan"<<endl;
	cout<<"2. Django Python : 13 Juta / bulan"<<endl;
	cout<<"3. Rails Ruby    : 8 Juta / bulan"<<endl;
	cout<<"4. Laravel PHP   : 18 Juta / bulan"<<endl;
	cout<<"5. Spring Java   : 8 Juta / bulan"<<endl;
	cout<<"6. Angular JS    : 15 Juta / bulan"<<endl;
	cout<<"\nJenis Bidang : ";cin>>jenis;
	cout<<"Pengalaman Kerja : ";cin>>kerja;
	cout<<"Posisi (1. leader/ 2. anggota): ";cin>>posisi;
		
	
}
	
}
void slipGaji::gajian(){
	switch (jenis) {
		case 1:	gaji=15;break;
		case 2:	gaji=13;break;
		case 3:	gaji=8 ; break;
		case 4:	gaji=18; break;
		case 5:	gaji=8 ;break;
		case 6:	gaji=15;
}
}
void slipGaji::proses(){
	if (kerja > 4){
		bonus= gaji*0.04;
		gaji=gaji+bonus;
		if (posisi == 1){
			bonus2= gaji*0.06;
			gaji= gaji+bonus+bonus2;
		}
	}
	else{
	gaji=gaji;	
	if (posisi == 1){
			bonus2= gaji*0.06;
			gaji= gaji+bonus2;
		}
	}
}
void slipGaji::prosesstruk(){
 if (posisi == 1){
 	a="Leader TIM";
 }	
 else{
 	a="Anggota";
 }
 }

void slipGaji::output(){
	cout<<"\n\n================================"<<endl;
	cout<<"\nGajimu : "<<gaji<<" Juta/bulan"<<endl;
	cout<<"Posisi Developer = "<<a;
	
}
int main(){
	slipGaji x;
	x.input();
	x.gajian();
	x.proses();
	x.prosesstruk();
	x.output();
	
	return 0;
}
