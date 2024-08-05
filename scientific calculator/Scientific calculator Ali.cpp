#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Scientific_calculator{
	private:
		float num1,num2;
		double result;
	public:
		void Add(int a, int b){
			result=a+b;
			cout<<"Sum is : "<<result<<endl;
		}
		void Sub(int a, int b){
			result=a-b;
			cout<<"Subtraction is : "<<result<<endl;
		}
		void Mult(int a, int b){
			result=a*b;
			cout<<"Multiplication is : "<<result<<endl;
		}
		void Divi(int a, int b){
			if(b!=0){
				if(a>b){
					result=a/b;
						cout<<"Division is : "<<result<<endl;
				    }
				    else{
						cout<<"denomenator is greater  "<<endl;
				    }
			}
			else{
				cout<<"Denomenator is zero "<<endl;	
	    	}
		}	
		int Power(float n1,float n2){
			result=pow(n1,n2);
			cout<<"Power is : "<<result<<endl;
		}
		int Squ_root(float n1){
			result=sqrt(n1);
			cout<<" Square root of "<<n1<<" is :"<<result<<endl;
		}
		int Cos(float n1){
			result=cos(n1);
			cout<<" Cos of "<<n1<<" is :"<<result<<endl;
		}
		int Sine(float n1){
			result=sin(n1);
			cout<<" Sin of "<<n1<<" is :"<<result<<endl;
		}
		int Tan(float n1){
			result =tan(n1);
			cout<<"Tan of "<<n1<<" is :"<<result<<endl;
		}
		int Log(float n1){
			result =log(n1);
			cout<<"Natural Logarithem of "<<n1<<" is :"<<result<<endl;
		}
		int BaseLog(float n1){
			result = log10(n1);
			cout<<" log with Base 10 of "<<n1<<" is :"<<result<<endl;
		}
		void exponential(float n1){
			result=exp(n1);
			cout<<"Exponential of "<<n1<<" is :"<<result<<endl;
		}
};
 
int main(){
	Scientific_calculator  s_cal;
	double num1,num2;
	int n1 , n2;
	int choice;
	char  option;

	while(1){
		start:
		system("cls");  // Use "clear" for Linux and "cls" for Windows
		cout<<"\t\t== WELCOME TO SCIENTIFIC CALCULATOR =="<<endl;
		cout<<"\t\t======================================"<<endl;
		cout<<"\t\tPress 1.  For Addition         -o-o-o-"<<endl;
		cout<<"\t\tPress 2.  For Subtraction      -o-o-o-"<<endl;
		cout<<"\t\tPress 3.  For Multiplication   -o-o-o-"<<endl;
		cout<<"\t\tPress 4.  For  Diviosion       -o-o-o-"<<endl;
		cout<<"\t\tPress 5.  For Power Operation  -o-o-o-"<<endl;
		cout<<"\t\tPress 6.  For Square Root      -o-o-o-"<<endl;
		cout<<"\t\tPress 7.  For Cos Operation    -o-o-o-"<<endl;
		cout<<"\t\tPress 8.  For Exp Operation    -o-o-o-"<<endl;
		cout<<"\t\tPress 9.  For Sin Operation    -o-o-o-"<<endl;
		cout<<"\t\tPress 10. For Tan Operation    -o-o-o-"<<endl;
		cout<<"\t\tPress 11. For Log Operation    -o-o-o-"<<endl;
		cout<<"\t\tPress 12. For Base log         -o-o-o-"<<endl;
		cout<<"\t\tPress 13. For Exit Program     -o-o-o-"<<endl;
		cout<<"\t\t---------------------------"<<endl;
		cout<<"\n\t\t Enter your choice :)"<<endl;
		cin>>choice;
		cout<<"\t\t---------------------------"<<endl;
		switch(choice){
			
			case 1:
				cout<<"Enter the number : "<<endl;
				cin>>n1>>n2;
				s_cal.Add(n1,n2);
				break;
			
			case 2:
				cout<<"Enter the number : "<<endl;
				cin>>n1>>n2;
				s_cal.Sub(n1,n2);
				break;
			
			case 3:
				cout<<"Enter the number : "<<endl;
				cin>>n1>>n2;
				s_cal.Mult(n1,n2);
				break;
			
			case 4:	
				cout<<"Enter the number : "<<endl;
				cin>>n1>>n2;
				s_cal.Divi(n1,n2);
				break;	
			
			case 5:	
				cout<<"Enter the Two number : "<<endl;
				cin>>num1>>num2;
				s_cal.Power(num1,num2);
				break;
			
			case 6:
				cout<<"Enter the number : "<<endl;
				cin>>num1;
				s_cal.Squ_root(num1);
				break;
			
			case 7:
				cout<<"Enter the number : "<<endl;
				cin>>num1;
				s_cal.Cos(num1);
				break;
			
			case 8:
				cout<<"Enter the number : "<<endl;
				cin>>num1;
				s_cal.exponential(num1);
				break;		
			
			case 9:
				cout<<"Enter the number : "<<endl;
				cin>>num1;
				s_cal.Sine(num1);
				break;
			
			case 10:
				cout<<"Enter the number : "<<endl;
				cin>>num1;
				s_cal.Tan(num1);
				break;
			
			case 11:
				cout<<"Enter the number : "<<endl;
				cin>>num1;
				s_cal.Log(num1);
				break;
				
			case 12:
				cout<<"Enter the number : "<<endl;
				cin>>num1;
				s_cal.BaseLog(num1);
				break;
					
			case 13:
				cout<<"Successfully Terminated :)"<<endl;
				exit(0);
				break;
			
			default:
				cout<<"You press ivalid number : "<<endl;
				break;
			}
			
			cout<<"----------------------"<<endl;
			cout<<"\tDo you wanna try again"<<endl;
			cout<<"\t==YES || NO== "<<endl;			
			cout<<"\tPress y or Y for YES "<<endl;
			cout<<"\tn or N for NO  "<<endl;		
			cout<<"----------------------"<<endl;
			cin>>option;
			if(option=='y'||option=='Y'){
			
				cout<<"----------------------"<<endl;
			}else if(option=='n'||option=='N'){
				cout<<"program successfuly terminated..."<<endl;
				exit(0);
			}else{
				cout<<"Invalid "<<endl;
				cout<<"----------------------"<<endl;
			}
				goto start;
	}
	return 0;
}