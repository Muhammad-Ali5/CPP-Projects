#include<iostream>
#include<string>
using namespace std;
template <class T>
class Calculator{
	private:
		T a, b;
	public:
		T result=0;
		Calculator(T m,T n){
			a=m;
			b=n;
		}
		T Add(T a, T b){
			result=a+b;
			cout<<"Sum is : "<<result<<endl;
		}
		T Sub(T a, T b){
			result=a-b;
			cout<<"Subtraction is : "<<result<<endl;
		}
		T Mult(T a, T b){
			result=a*b;
			cout<<"Multiplication is : "<<result<<endl;
		}
		T Divi(T a, T b){
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
};

int main(){
	int choice;
	char  option;
	double num1, num2;
	Calculator <double> cal(3,4);
	
	while(1){
//		start:
//		system("cls");
		cout<<"\tPress 1. For interger Operation : "<<endl;
		cout<<"\tPress 2. For float  Operation   : "<<endl;
		cout<<"\tPress 3. For Exit Program       : "<<endl;
		cout<<"\t---------------------------"<<endl;
		cout<<"\n\t Enter your choice :)"<<endl;
		cin>>choice;
		cout<<"\t\t---------------------------"<<endl;
		switch(choice){
			case 1:{
				cout<<"\t\t======================================"<<endl;
				cout<<"\t\tPress 1.  For Addition         -o-o-o-"<<endl;
				cout<<"\t\tPress 2.  For Subtraction      -o-o-o-"<<endl;
				cout<<"\t\tPress 3.  For Multiplication   -o-o-o-"<<endl;
				cout<<"\t\tPress 4.  For  Diviosion       -o-o-o-"<<endl;
				cout<<"\t---------------------------"<<endl;
				cout<<"\n\t Enter your choice :)"<<endl;			
				cin>>choice;
				if(choice==1){
				cout<<"Enter the number : "<<endl;
				cin>>num1>>num2;
				cal.Add(num1,num2);
				break;
				}
				if(choice==2){
				cout<<"Enter the number : "<<endl;
				cin>>num1>>num2;
				cal.Sub(num1,num2);
				break;
			}
				if(choice==3){
				cout<<"Enter the number : "<<endl;
				cin>>num1>>num2;
				cal.Mult(num1,num2);
				break;
			}
				if(choice==4){
				cout<<"Enter the number : "<<endl;
				cin>>num1>>num2;
				cal.Divi(num1,num2);
				break;
		}
			case 2:{
				cout<<"\t\t======================================"<<endl;			
				cout<<"\t\tPress 1.  For Addition         -o-o-o-"<<endl;
				cout<<"\t\tPress 2.  For Subtraction      -o-o-o-"<<endl;
				cout<<"\t\tPress 3.  For Multiplication   -o-o-o-"<<endl;
				cout<<"\t\tPress 4.  For  Diviosion       -o-o-o-"<<endl;
				cout<<"\t---------------------------"<<endl;
				cout<<"\n\t Enter your choice :)"<<endl;			
				cin>>choice;	
					if(choice==1){
				cout<<"Enter the number : "<<endl;
				cin>>num1>>num2;
				cal.Add(num1,num2);
				break;
				}
				if(choice==2){
				cout<<"Enter the number : "<<endl;
				cin>>num1>>num2;
				cal.Sub(num1,num2);
				break;
			}
				if(choice==3){
				cout<<"Enter the number : "<<endl;
				cin>>num1>>num2;
				cal.Mult(num1,num2);
				break;
			}
				if(choice==4){
				cout<<"Enter the number : "<<endl;
				cin>>num1>>num2;
				cal.Divi(num1,num2);
				break;	
			}
		}
			case 3:
				cout<<"Successfully Terminated :)"<<endl;
				exit(0);
				break;
			
		default:
				cout<<"You press ivalid number : "<<endl;
				break;
				cout<<"----------------------"<<endl;		
			}			
		}	
	}	
		return 0;
}
