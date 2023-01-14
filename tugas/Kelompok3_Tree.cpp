//Kelompok 3
//Jordan Antonio Pardosi	(2022240041)
//Mariatul Qibtiah			(2022240048)
//Latep Nugroho				(2022240053)

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

typedef struct simpulku *ptrsimpul;
typedef struct simpulku {int data ;				
ptrsimpul kanan;								
ptrsimpul kiri;									
}simpul;										
typedef struct {
	simpul *akar;
}pohon;

void buatpohonbaru (int dt, pohon *v) {
	simpul *simpulbaru;
	simpulbaru=new simpul;
	simpulbaru->data=dt;
	simpulbaru->kanan=NULL;
	simpulbaru->kiri=NULL;
	(*v).akar=simpulbaru;
}

void tambahKanan (int dt,simpul **akar){
	if((*akar)->kanan==NULL){
	simpul *simpulbaru;
	simpulbaru=new simpul;
	simpulbaru->data=dt;
	simpulbaru->kanan=NULL;
	simpulbaru->kiri=NULL;
	(*akar)->kanan=simpulbaru;
}else{
	cout<<"subpohon kanan telah terisi\n";
}
}

void tambahKiri (int dt,simpul **akar){
	if((*akar)->kiri==NULL) {
	simpul *simpulbaru;
	simpulbaru=new simpul;
	simpulbaru->data=dt;
	simpulbaru->kanan=NULL;
	simpulbaru->kiri=NULL;
	(*akar)->kiri=simpulbaru;
}
else {
	cout<<"Subpohon kiri telah terisi\n";
}
}
void kunjunganPreorder(simpul *akar){
	if(akar!=NULL){
	cout<<akar->data<<" ";
	kunjunganPreorder (akar->kiri);
	kunjunganPreorder (akar->kanan);
}
}
void kunjunganinorder(simpul *akar){
	if(akar!=NULL){
	kunjunganinorder (akar->kiri);
	cout<<akar->data<<" ";
	kunjunganinorder (akar->kanan);
}
}
void kunjunganpostorder(simpul *akar){
	if(akar!=NULL){
	kunjunganPreorder (akar->kiri);
	kunjunganPreorder (akar->kanan);
	cout<<akar->data<<" ";
}
}
int main (){
	pohon v;
	printf("\n\n\tStruktur Pohon: \n\n");
	printf("\t 60\n\t / \\\n\t 50 20 \n\t / \\ / \\\n\t 40 55 65 80\n\n ");
	buatpohonbaru (60,&v);
	tambahKiri (50,&v.akar);
	tambahKiri (40,&(v.akar->kiri));
	tambahKanan (55,& (v.akar->kiri));
	tambahKanan (20,&v.akar);
	tambahKanan(65,&(v.akar->kanan));
	tambahKiri(80,&(v.akar->kanan));	
	cout<<"Kunjungan Preorder"<<endl;
	cout<<"=================="<<endl;
	kunjunganPreorder(v.akar);
	cout<<endl;
	cout<<"Kunjungan Inorder"<<endl;
	cout<<"=================="<<endl;
	kunjunganinorder (v.akar);
	cout<<endl;
	cout<<"Kunjungan postorder"<<endl;
	cout<<"=================="<<endl;
	kunjunganpostorder (v.akar);
	cout<<endl;
	getc;
}
