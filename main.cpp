#include<iostream>
#include<fstream>
#include "admin.cpp"
using namespace std;

int main(){
    int choice1 ,ite =0 ;
    string username ,password ;
    cout <<"\t\tAttendance Management System"<<endl ;
    cout << "Press :-" << endl ;
    cout << "1.Admin Login "<< endl ;
    cout << "2.Student Login "<< endl ;
    cout << "3.Exit" <<endl;
    cin >> choice1 ;

    while(ite == 0){
        system("clear");
        switch (choice1)
        {
       
        case 1:
            cout<< "Enter Username :- "<< endl ;cin >> username ;
            cout <<"Enter Password :- "<< endl ;cin>>password ;
            if(login(username,password)){
                cout << "Login Success" << endl ;    
                admin_login();            
            }

        case 2:
            break ;
        case 3:
            break ;
        default:
            break;
        }

    }


   

}