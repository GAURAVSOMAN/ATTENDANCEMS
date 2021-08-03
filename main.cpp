#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>


using namespace std; 

void delay();

int main()
{

    int number ;
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
        break;
    
    case 2 :
        system("clear");
        delay();
        cout << "Studen Login" << endl ;
        break;
    default:
        cout << "Enter a valid input "<<endl ;


    }



}

void admin_login(){
    int name ;
    cout << "Enter the admin username : -" ;
    cin >> 
    
}



void delay(){
    for(int i = 0 ; i < 10 ; i ++ ){
        for(int j = 0 ; j < 1000 ; j ++){
            for(int k = 0 ; k < 20000 ; k++){

            }
            
        }
    }
}