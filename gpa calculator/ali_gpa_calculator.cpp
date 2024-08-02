#include<iostream>
#include<string>
using namespace std;
class CGPA_calculator{
	private:
		int no_of_subjects;
		float total_points=0, total_credit_h=0, cgpa;
	public:
		CGPA_calculator(){
			cout<<"\t-->WELCOME TO CGPA CLACULATOR=="<<endl;
			cout<<"----------------------------------"<<endl;
		}
		void getData(){
			cout<<"Enter the number of subjects : "<<endl;
			cin>>no_of_subjects;
		}
		void calculateData(){
			for(int i=1; i<=no_of_subjects; i++){
				float credit_h, points;
				cout<<"Enter the credit hour for subject "<<i<<" :";
				cin>>credit_h;
				cout<<"Enter the points for subject "<<i<<" :";
				cin>>points;
				cout<<"----------------------------------"<<endl;
				
				total_points = total_points + (points*credit_h);
				total_credit_h = total_credit_h + credit_h;
			}
			cgpa = total_points/total_credit_h;
			cout<<"Your CGPA is : "<<cgpa<<endl;
		}
		void setGrading(){
			cout<<"Grading According To Your Cgpa is :) "<<endl;
			cout<<"----------------------------------"<<endl;
			if(cgpa==4.00){
				cout<<"GRADE IS : A "<<endl;
			}
			else if (cgpa>=3.67){
				cout<<"GRADE IS : A- "<<endl;
			}
			else if (cgpa>=3.33){
				cout<<"GRADE IS : B+ "<<endl;
			}
			else if (cgpa>=3.00){
				cout<<"GRADE IS : B "<<endl;
			}
			else if (cgpa>=2.67){
				cout<<"GRADE IS : B- "<<endl;
			}
			else if (cgpa>=2.33){
				cout<<"GRADE IS : C+ "<<endl;
			}
			else if (cgpa>=2.00){
				cout<<"GRADE IS : C "<<endl;
			}
			else if (cgpa>=1.67){
				cout<<"GRADE IS : C- "<<endl;
			}
			else if (cgpa>=1.33){
				cout<<"GRADE IS : D+ "<<endl;
			}
			else if (cgpa>=1.00){
				cout<<"GRADE IS : D "<<endl;
			}
			else if (cgpa>=0.67){
				cout<<"GRADE IS : D- "<<endl;
			}
			else if (cgpa>=0.00){
				cout<<"GRADE IS : F "<<endl;
			}
		}
};

int main(){
	CGPA_calculator cgpa_cal;
	int choice;
    char option;
    while (1) {
        system("cls");
        cout << "\t======================================" << endl;
        cout << "\t\tPress 1. For subjects         -o-o-o-" << endl;
        cout << "\t\tPress 2. For Exit Program     -o-o-o-" << endl;
        cout << "\t\t---------------------------" << endl;
        cout << "\n\t\t Enter your choice :)" << endl;
        cin >> choice;
        cout << "\t\t---------------------------" << endl;
        switch (choice) {
            case 1:
            	cgpa_cal.getData();
				cgpa_cal.calculateData();
				cgpa_cal.setGrading();
                break;
            case 2:
                cout << "Program successfully terminated :) " << endl;
                return 0; // Terminate the program gracefully
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
        cout << "----------------------" << endl;
        cout << "\tDo you want to try again?" << endl;
        cout << "\t==YES || NO== " << endl;
        cout << "\tPress y or Y for YES " << endl;
        cout << "\tPress n or N for NO  " << endl;
        cout << "\n\t\t Enter your choice :)" << endl;
        cout << "----------------------" << endl;
        cin >> option;
        if (option == 'n' || option == 'N') {
            cout << "Program successfully terminated..." << endl;
            return 0; // Terminate the program gracefully
        } else if (option != 'y' && option != 'Y') {
            cout << "Invalid input! Exiting..." << endl;
            return 0; // Terminate the program gracefully
        }
    }
	
	return 0;
}