import tkinter 
from admin import * 
import platform

def for_clear():
    if platform.system() == "Windows" :
        os.system("cls")
    else :
        os.system("clear")

def delay():
    pass 
if __name__ == "__main__" :
    print("\t\t\tThis is a attendance Management System ")
    print("\nPress :- \n1. Admin Login\n2. Teacher Login\n3. Student Login\n4. Exit")

    run = True 
    while run :
        choice = int(input("Enter Your Choice :- "))
        if(choice == 1 ):
            if admin_login() :
                admin_screen()
        elif(choice == 2 ):
            pass 
        elif(choice == 3 ):
            pass 
        elif(choice == 4 ):
            run = False 
        else:
            print("Enter a valid option ")

    
        
