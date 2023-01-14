// Kelompok 3
// Jordan Antonio Pardosi 	(2022240041)
// Mariatul Qibtiah 		(2022240048)
// Latep Nugroho			(2022240053)

#include <iostream>
using namespace std;
int main(){
	int bil [10]= {12,45,40,23,44,45,78,90,103,29};
	int i, bilcari, jlh;
	bool ketemu = false ;
	
	jlh = 0;
	cout<<"Bilangan yang akan dicari : ";
	cin>>bilcari;
	for(i=0;i<10; i++) {
		if(bil[i] == bilcari) {
			ketemu = true;
			cout<<"Bilangan ditemukan di elemen : "<<i<< endl;
			jlh++;
		}	
	}

	if (ketemu ) {
		cout<<"Jumlah Data : "<< jlh <<endl;
	}
	else {
		cout<<"Bilangan tersebut tidak ditemukan !" <<endl;
	}
}

