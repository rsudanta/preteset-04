/*
*Author:M Risqullah Sudanta G
*NPM: 140810180066
*Deskripsi:Pretest 4
*Tahun: 2019
*/

#include<iostream>
using namespace std;

struct Elemtlist{
	char npm[14];
	char nama[40];
	float ipk;
	Elemtlist* next;
};
typedef Elemtlist* pointer;
typedef pointer List;

void createlist(List& first){
	first=NULL;
}
void createElement(pointer& pBaru){
	pBaru= new Elemtlist;
	cout<<"NPM :";
	cin.ignore();cin.getline(pBaru->npm,30);
	cout<<"Nama :";
    cin.ignore();cin.getline(pBaru->nama,30);
    cout<<"IPK :";cin>>pBaru->ipk;
    }

void insertFirst(List& first,pointer pBaru){
	if(first==NULL){
		first=pBaru;
	}
	else{
		pBaru->next=first;
		first=pBaru;
	}
}

void traversal(List first){
	pointer pBantu;
	pBantu=first;
	while(pBantu != NULL) {
		cout<<"NPM :"<<pBantu->npm<<endl;
		cout<<"Nama :"<<pBantu->nama<<endl;
    	cout<<"IPK :"<<pBantu->ipk;
		pBantu=pBantu->next;
		cout<<endl<<endl;
	}
}

//void insertSortIPK(list& first, pointer ppBaru)

int main(){
	pointer p;
	List list;
	int n,x;
	createlist(list);
	cout<<"Masukan banyak mahasiswa : ";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<"\nMasukkan data mahasiswa ke-"<<i+1<<endl;
		createElement(p);
		insertFirst(list,p);
	}
	while (x!=2){
		cout<<"Menu " << endl;
		cout<<"1. Tambah data"<<endl;
		cout<<"2. Exit"<<endl;
		cout<<"Masukkan pilihan : ";
		cin>>x;
		switch(x){
			case 1:
				cout<<"Masukan banyak mahasiswa : ";
				cin>>n;
				cout<<endl;
				for(int i=0;i<n;i++){
					cout<<"\nMasukkan data mahasiswa ke-"<<i+1<<endl;
					createElement(p);
					insertFirst(list,p);
				}
				traversal(list);
				cout<< endl;
				break;

			case 2:
				traversal(list);
				break;
		
	}	
}

}
