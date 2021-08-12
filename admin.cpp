#include<iostream>
#include<fstream>
using namespace std ;

class Student {
public:
    int roll ;
    string name ;
    string username ;
    string password ; 

    
};

void admin_login(){
    int i = 0 ,choice ;
    
    fstream fout ;
    Student student ;

    while( i == 0 ){
        cout << "Press :- "<< endl ;
        cout << "1.Add Student" << endl ;
        cout << "2.Exit Admin";
        cin >> choice; 
        switch (choice)
        {
        case 1 : 
            fout.open("student.dat",ios::app);
            system("clear");
            cout << "\t\tEnter Students Details ";
            cout << "Enter name " ; cin >> student.name ;
            cout << "Enter roll " ; cin >> student.roll ;
            cout << "Enter username " ; cin >>student.username ;
            cout << "Enter password " ; cin >> student.password ;
            
            fout << student.username <<" "<<student.password <<"\n"<<endl ;

        case 2 : 
            i = 1 ;
        default:
            break;
        }
    }  
    
}

bool login(string uname,string paswd){
    if(uname== "admin" && paswd == "admin@2" ){
        return true;
    }
    else return false ;

}