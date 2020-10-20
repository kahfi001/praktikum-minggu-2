// NAMA  : MUHAMMAD KAHFI DJARDJANI
// NIM 	 : 20051397014
// KELAS : 2020B MI

#include<iostream>
#include<conio.h>

using namespace std;

int main(void){
	
	char nama[20],gol;
	int jumlahjamkerja,jumlahjamlembur,jamlembur,gaji,gajilembur,gajiseminggu,totalgaji;
	cout<<"Program menghitung gaji karyawan PT. Makmur \n\n";
	cout<<"masukkan nama karyawan :";
	cin>>nama;
	cout<<"masukkan golongan [A/B/C/D] :";
	cin>>gol;
	cout<<"masukkan jumlah jam kerja :";
	cin>>jumlahjamkerja;
	
	switch (gol)
	{
		case 'A':{gaji=5000;
			break;
		}
		case 'B':{gaji=7000;
			break;
		}
		case 'C':{gaji=8000;
			break;
		}
		case 'D':{gaji=10000;
			break;
		}
		default :{gaji=0;
			break;
		}
	}
	
	if(jumlahjamkerja>=48){
		jumlahjamlembur=jumlahjamkerja-48;
		cout<<"jam lembur :"<<jumlahjamlembur<<"jam"<<endl;
		gajiseminggu=gaji*48;
		gajilembur=jumlahjamlembur*4000;
		totalgaji=gajiseminggu+gajilembur;
	}
	else if (jumlahjamkerja<=48){
		cout<<"tidak ada jam lembur"<<endl;
		gajiseminggu=gaji*jumlahjamkerja;
		totalgaji=gajiseminggu;
	}
	
	cout<<"\n\nnama karyawan :";
	cout<<nama<<endl;
	cout<<"jumlah gaji anda : Rp.";
	cout<<totalgaji<<endl;
	
	
}
	
