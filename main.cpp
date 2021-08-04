#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>


using namespace std; 

void delay();
void admin_login();
void student_info();

int main()
{

    int number ,ite = 1,anum;
    
    while (ite > 0){
        cout << "This is an Attendance management system " << endl ;
        cout << "Press :- "<<endl ;
        cout << "1. Admin Login"<<endl ; 
        cout << "2. Student Login" << endl ;
        cin >> number ;
        switch (number)
        {
        case 1:
            system("clear");
            delay();
            cout << "Admin Login" << endl ;
            admin_login();
            cout << "Login Successful" << endl ;
            delay();
            system("clear");
            cout << "Press :- "<<endl ;
            cout << "1. Student Info" << endl ; 


            ite = 0 ;
            break;

    
        case 2 :
            system("clear");
            delay();
            cout << "Studen Login" << endl ;
            break;
        default:
            cout << "Enter a valid input "<<endl ;
}} }
    
void admin_login(){
    string name ;
    string password ;
    cout << "Enter the admin username : -" ;
    cin >> name ;
    cout << "Enter the admin password : -" ;
    cin >> password ;
    if(name=="admin" && password=="admin@2"){
        cout <<"Hello There "<<endl ;
    }

    else {
        cout << "The username or password is incorrect"<< endl ;
    }
    
}

void student_info(){
    fstream file ;
    file.open("credentials.dat",ios::out);
    



}

void delay(){
    for(int i = 0 ; i < 10 ; i ++ ){
        for(int j = 0 ; j < 1000 ; j ++){
            for(int k = 0 ; k < 20000 ; k++){

            }
            
        }
    }
}