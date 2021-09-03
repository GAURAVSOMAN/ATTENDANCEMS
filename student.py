import main 



def student_login() :
    j ,k = 0 ,0  
    uname = str(input("Enter Username :- "))
    passwd = str(input("Enter Password :- "))
    cred = open("student.dat",'r').read()
    

    for i in cred.split() :
        if i == uname :
            break 
        else :
            j = j + 1 
    for passw in cred.split():
        if passw == passwd  and k == j + 1 :
            return True 
        else :
            k = k + 1 

    

        
    

        


