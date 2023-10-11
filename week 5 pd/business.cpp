#include<iostream>
using namespace std;
void header();
int  menu();
void employeeEligibility();
void employeesalary();
void totalSalaries();
void businessStatus();

main(){
    int option;
    header();
    option=menu();
    if(option==1){
         employeeEligibility();
    }
    if(option==2){
        employeesalary();
    }
    if(option==3){
        totalSalaries();
    }
    if(option==4){
        businessStatus();
    }
    if(option==5){
        return 0;
    }
}
void header(){
    cout<<"---------------------------------------"<<endl;
    cout<<"--------- Business Management ----------"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;}
int menu(){
    int op;   
    cout<<"Enter 1 for Eployee eligibility: "<<endl;
    cout<<"Enter 2 for Employee salary: "<<endl;
    cout<<"Enter 3 for total salaries of Employee: "<<endl;
    cout<<"Enter 4 to check Business status: "<<endl;
    cout<<"Enter 5 to exit"<<endl;
    cout<<"Your option ... "<<endl;
    cin>>op;
   return op;
}
void employeeEligibility(){
    int age,experience;
    string qualification;
    cout<<"Enter your Age: ";
    cin>>age;
    cout<<"Enter Your Qualification (matric,inter): ";
    cin>>qualification;
    cout<<"Enter your experience (years): ";
    cin>>experience;
    if(qualification=="inter" && age>=22 && experience>=2){
        cout<<"You are eligible .";
    }   
    else{
        cout<<"You are not eligible";
    }  }
void employeesalary(){
    int days,hours;
    cout<<"Enter Working days: ";
    cin>>days;
    cout<<"Enter daily working hours: ";
    cin>>hours;
    cout<<"Salary of one employee: "<<hours*days*60<<" rupees";                //salary of 1 hour is 60 rupee
}
void totalSalaries(){
    int salary,workers;
    cout<<"Enter total number of workers: ";
    cin>>workers;
    cout<<"Salary of one employee: ";
    cin>>salary;
    cout<<"Total salaries of employee: "<<salary*workers<<" rupees";
} 
void businessStatus(){
    int profit,totalsalaries;
    cout<<"Enter net-profit: ";
    cin>>profit;
    if(profit>totalsalaries){
        cout<<"Your business is in profit";
    }
    else{
        cout<<"Your business is in loss";
    }
}


