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

