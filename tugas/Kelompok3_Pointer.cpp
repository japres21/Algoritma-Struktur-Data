// Kelompok 3
// Jordan Antonio Pardosi 	(2022240041)
// Mariatul Qibtiah 		(2022240048)
// Latep Nugroho			(2022240053)

#include <iostream> 
 using namespace std; 
 
int main () {
	int x,y;
	int *px;
	
	x = 89;
	y = x;
	px = &x;
	 
	cout<<"Nilai x = " << x << endl ;
	cout<<"Nilai y = " << y << endl ;
	cout<<"Alamat x = " << &x << endl ;
	cout<<"Alamat px = " << px << endl;
	cout<<"Nilai px = " << *px << endl;
	x = 108;
	cout<<"\nNilai x = " << x <<endl;
	cout<<"Nilai y = " << y <<endl;
	cout<<"Alamat x = " << &x <<endl;
	cout<<"Alamat px = " << px << endl;
	cout<<"Nilai px = " << *px <<endl;
}
 
