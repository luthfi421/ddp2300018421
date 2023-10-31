#include <iostream>
using namespace std;

int main(){
	int baris,kolom,atas;
	
	cout<<"masukkan jumlah garis atas : ";
	cin>>atas;
	
	cout<<"masukkan jumlah baris : ";
	cin>>baris;
	
	cout<<"masukkan jumlah kolom : ";
	cin>>kolom;
	
	for(int c=1; c<=baris; c++){
		cout<<"__";
	}
	cout<<endl;
	
	for(int a=1; a<=baris; a++){
		for (int b=1; b <=kolom; b++){
			cout<<"|__|";
		}
		cout<<endl;
	}
	return 0;
}
