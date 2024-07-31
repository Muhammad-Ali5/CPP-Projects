#include<iostream>
#include<string>
using namespace std;
class VirtualPet{
	private:
		string name;
		int hunger;
		int energy;
		int happiness;
	public:
		VirtualPet(string p_name) : name(p_name){
			cout<<"\tWELCOME TO VIRTUAL PET GAME:) "<<endl;
			cout<<"\t============================= "<<endl;
			hunger=50;
			energy=50;
			happiness=50;
		}
		void feed() {
        hunger += 10;
        cout << name << " has been fed. Hunger is now " << hunger << ".\n";
   		}
		void play(){
			if(energy>10){
				happiness=happiness+10;
				energy=energy-10;
				cout<<name<<" is playing . Happiness is now : "<<happiness<<endl;
			}
			else{
				cout<<name<<"is too tired to play."<<endl;
			}
		}
		void sleep(){
			energy=energy+10;
			cout<<name<<" is sleeping . Energy is now : "<<energy<<endl;
		}
		void status(){
			cout<<"Status of : "<<name<<endl;
			cout<<"======================"<<endl;
			cout<<"Hunger is : "<<hunger<<endl;
			cout<<"Energy is : "<<energy<<endl;
			cout<<"Happiness : "<<happiness<<endl;
		}	
};

int main(){
	VirtualPet mypet("Fluffy");
	int choice;
	do{
		cout<<"\tWhat would you like to do with your pet :"<<endl;
		cout<<"\t========================================"<<endl;
		cout<<"\tPress 1. For Feed     ======: "<<endl;
		cout<<"\tPress 2. For Play     ======: "<<endl;
		cout<<"\tPress 3. For Sleep    ======: "<<endl;
		cout<<"\tPress 4. For Ckeck Status ==: "<<endl;
		cout<<"\tPress 5. For Exit Game =====: "<<endl;
		cout<<"\t============================="<<endl;
		cout<<"\tEnter your choice : "<<endl;
		cin>>choice;
		
		switch(choice){
			case 1:{
				mypet.feed();
				break;
			}
			case 2:{
				mypet.play();
				break;
			}
			case 3:{
				mypet.sleep();
				break;
			}
			case 4:{
				mypet.status();
				break;
			}
			case 5:{
				cout<<"Program successfuly terminated..."<<endl;
				exit(0);
				break;
			}
			default:{
				cout<<"Invalid input .......!"<<endl;
				break;
			}
		}
		
	}while(choice != 5);
	
	return 0;
}