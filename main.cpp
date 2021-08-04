#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>
using namespace std; 

bool student_login(string usname ,string pass);
void delay();
bool admin_login();
void student_info();
class Student {
    string name ,username,password ;
    int prn ;

    public:
    void takeinfo(string Name ,int roll,string un ,string pass ){
        name = Name ;
        prn = roll ;
        username = un ;
        password = pass ;
    }


};
int main()
{
    int number ,ite = 1,anum;
    string suname,spass ;
    while (ite > 0){
        cout << "This is an Attendance management system " << endl ;
        cout << "Press :- "<<endl ;
        cout << "1. Admin Login"<<endl ; 
        cout << "2. Student Login" << endl ;
        cout << "3. To stop the program "<<endl ; 
        cin >> number ;
        switch (number)
        {
        case 1:
            system("clear");
            delay();
            cout << "Admin Login" << endl ;
            if(admin_login()){
                cout << "Login Successful" << endl ;
                delay();
            //system("clear");
                cout << "Press :- "<<endl ;
                cout << "1. Add Student " << endl ;
                cout << "2. Remove Student " <<endl ;
                cin >> anum ; 
                switch (anum)
                {
                case 1:
                    cout << "Adding Student " << endl;
                    student_info();
                    break; 
                default:
                    break;
                }
            }       
            ite = 0 ;
            break;
        case 2 :
            delay();
            system("clear");
            cout <<"\t\tEnter Your Username And Password Below : -\n" ;
            cout << "\nEnter our username :- " ;cin >> suname;
            cout << "\nEnter your password :- "; cin >> spass ;
            student_login(suname ,spass);
            break;
        case 3 :
            ite = 0 ;
            break;
        default:
            cout << "Enter a valid input "<<endl ;
        }
    } 
}    
bool admin_login(){
    string name ;
    string password ;
    cout << "Enter the admin username : -" ;
    cin >> name ;
    cout << "Enter the admin password : -" ;
    cin >> password ;
    if(name=="admin" && password=="admin@2"){
        return true ;
    }

    else {
        cout << "The username or password is incorrect"<< endl ;
        return false ;
    }
    
}
void student_info(){
    fstream file ;
    Student student ;
    string a,b,c ; int d ;
    cout << "Enter the students name : -" ;cin >> a  ;
    cout << "Enter the students prn : -" ; cin >> d ;
    cout << "Enter the students username : -" ;cin >> b ;
    cout << "Enter the students password : -"; cin >> c ;

    student.takeinfo(a,d,b,c);
    file.open("studentinfo.dat",ios::app);
    file << b << " "<< c << endl ;
    

}

bool student_login(string usname,string pass){
    fstream file ;string word ,passwd ;
    int i = 0 , j = 0 ; 
    file.open("studentinfo.dat",ios::in);
    while(file >> word){
        i++ ;
        if(word == usname){
            break ;
        } }
    while(file >> word){
        j++;
        if(j < i ){
            passwd = word;
        }
    }
    cout << passwd;
    
    return true ;
}
void delay(){
    for(int i = 0 ; i < 10 ; i ++ ){
        for(int j = 0 ; j < 1000 ; j ++){
            for(int k = 0 ; k < 20000 ; k++){

            }
            
        }
    }
}