#include<iostream>
#include<string>
#include<random>
#include<ctime>
#include<cstdlib>
using namespace std;

string getPassword(int length){

	string Password="";
	string chracter="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()_+=";
	int charsize=chracter.size();
	srand(time(0));
	int radm_index;
	for(int i=0; i<length; i++){
		radm_index=rand()%charsize;
		Password=Password+chracter[radm_index];
	}
	return Password;
}

int main(){
	while(true){
	int length;
	string password;
	cout<<"\n========================================"<<endl;
	cout<<"\nEnter the length of the password : "<<endl;
	cin>>length;
	password=getPassword(length);
	cout<<"Generate Password :"<<password<<endl;
	}
}