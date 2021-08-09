#include<iostream>

using namespace std ;

bool login(string uname,string paswd){
    if(uname== "admin" && paswd == "admin@2" ){
        return true;
    }
    else return false ;

}