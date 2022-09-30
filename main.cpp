#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	//Inisialisasi atau deklarasi variabel
	int jum_matkul, sks[50], tot_sks;
	string nama_matkul[50]; 
	string nilai_huruf[50];
	float tot, bobot_nilai[50], sub_tot[50], ips;
	
	cout<<"PROGRAM TRANSKRIP NILAI"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	cout<<"Masukan Jumlah Mata Kuliah : ";
	cin>>jum_matkul; //Pengguna memasukan jumlah beli
	
	for (int i=0; i<jum_matkul;i++){
		cout<<endl;
		cout<<"Masukan Matkul Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Nama Matkul : ";
		cin>>nama_matkul[i]; //Pengguna input nama barang disimpan pada array nama_barang
		
		cout<<"SKS      : ";
		cin>>sks[i]; //Pengguna input jumlah disimpan pada array jumlah
		
		cout<<"Bobot Nilai       : ";
		cin>>bobot_nilai[i]; //Pengguna input harga disimpan pada array harga
		
		if (bobot_nilai[i] >= 5){
            cout << "Bobot matkul hanya bisa 0-4" << endl;
            cout << "Masukkan bobot matkul : ";
            cin >> bobot_nilai[i];
        }
        if (bobot_nilai[i] == 4){
            nilai_huruf[i] = 'A';
        }
        else if (bobot_nilai[i] == 3.75){ 
            nilai_huruf[i] = "A-";
        }
        else if (bobot_nilai[i] == 3.5){ 
        nilai_huruf[i] = "A/B";
        }
        else if (bobot_nilai[i] == 3.25){ 
        nilai_huruf[i] = "B+";
        }
        else if (bobot_nilai[i] == 3.0){ 
        nilai_huruf[i] = "B";
        }
        else if (bobot_nilai[i] == 2.75){ 
        nilai_huruf[i] = "B-";
        }
        else if (bobot_nilai[i] == 2.5){ 
        nilai_huruf[i] = "B/C";
        }
        else if (bobot_nilai[i] == 2.25){ 
        nilai_huruf[i] = "C+";
        }
        else if (bobot_nilai[i] == 2.0){ 
        nilai_huruf[i] = "C";
        }
        else if (bobot_nilai[i] == 1.75){ 
        nilai_huruf[i] = "C-";
        }
        else if (bobot_nilai[i] == 1.5){ 
        nilai_huruf[i] = "C/D";
        }
        else if (bobot_nilai[i] == 1.25){ 
        nilai_huruf[i] = "D+";
        }
        else if (bobot_nilai[i] == 1){ 
        nilai_huruf[i] = "D";
        }
        else if (bobot_nilai[i] == 0){
        nilai_huruf[i] = "E";
        }


		tot_sks += sks[i];
		sub_tot[i]=sks[i]*bobot_nilai[i]; // Menjumlahkan Harga sub total barang
		tot+=sub_tot[i]; //Menjumlahkan seluruh sub total barang
		ips = tot/tot_sks;
	}
	
	cout<<endl;
	cout<<"TRANSKRIP NILAI"<<endl;
	cout<<"-------------------------------------------------------------------"<<endl;
	cout<<"No   Matkul         SKS     Bobot    Nilai   Total Nilai SKS"<<endl;
	for (int i=0;i<jum_matkul;i++){
		cout<<i+1<<setw(10)<<nama_matkul[i]<<setw(12)<<sks[i]<<setw(10)<<bobot_nilai[i]<<setw(8)<<nilai_huruf[i]<<setw(14)<<sub_tot[i]<<endl; //Menampilkan semua nilai array
	}
	cout<<"-------------------------------------------------------------------"<<endl;


	
	//Menampilkan Keterangan
	cout<<"Total SKS : "<<tot_sks<<" SKS" << endl;//Menampilkan jumlah bayar (belum termasuk diskon)
	cout<<"Nilai Seluruh SKS * Bobot Nilai yang didapat : "<<tot<<endl; //Menampilkan diskon
	cout<<"IPS (Indeks Prestasi Sementara)  : "<<ips<<endl;//Menampilkan total harga yang harus dibayar

}