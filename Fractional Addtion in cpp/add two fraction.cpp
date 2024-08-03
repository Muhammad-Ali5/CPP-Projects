#include<iostream>
#include<string>
using namespace std;
class Add_two_Fraction{
	public:
		int gcd(int a, int b){
			if(b==0){
				return a;
			}else{
				return gcd(b,a%b);
			}	
		}
		void AddFraction(double n1,double d1,double n2,double d2){
			double lcm; 
			double new_num1;
			double new_num2; 
			lcm = (d1 * d2) / gcd(d1, d2);
			new_num1=n1*(lcm/d1);
			new_num2=n2*(lcm/d2);
			double result;
			result=new_num1+new_num2;
			cout<<result<<"/"<<lcm<<endl;
		}
};

int main(){
	Add_two_Fraction atf;
	double num1,den1, num2, den2;
	cout<<"==>Fractional Addition :::"<<endl;
	cout<<"=========================="<<endl;
	cout<<"Enter the 1st numerator value : ";
	cin>>num1;
	cout<<"Enter the 1st denomenator value : ";
	cin>>den1;
	cout<<"Enter the 2nd numerator value : ";
	cin>>num2;
	cout<<"Enter the 2nd denomenator value : ";
	cin>>den2;
	cout<<"----------------------------------"<<endl;
	cout<<num1<<"/"<<den1<<" + "<<num2<<"/"<<den2<<" = "<<endl;
	cout<<"----------------------------------"<<endl;
	atf.AddFraction(num1,den1,num2,den2);
	return 0;	
}