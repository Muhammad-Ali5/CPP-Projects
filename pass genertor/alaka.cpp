#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;

string getPassword(int len){
	
	string character ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()_+=";
	srand(time(0));
	for(int i=0; i<len ; i++){
		
	}
}

int main(){
	int length;
	string password;
	cout<<"Enter the lenght of Password which U wanna generate :"<<endl;
	cin>>length;
	password=getPassword(length);
	cout<<"Your Radom Generated Password is : "<<password<<endl;
	
	
}