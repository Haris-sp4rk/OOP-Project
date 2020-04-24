#include<iostream>
#include"USER.h"
using namespace std;
void admin_pannel(){
    User A;
    int a;
    while(a!=4){
        system("cls");
    cout<<"\t\t\t 1.Show All User Data"<<endl;
    cout<<"\t\t\t 2.Modify Any User"<<endl;
    cout<<"\t\t\t 3.Change Admin Password"<<endl;
    cout<<"\t\t\t 4.Go Back"<<endl;
    
    cin>>a;
    system("cls");
    
    if(a==1){
       Display_all(A);
       system("pause");
    }else if(a==2){
        char s[20];
        cin>>s;
        Modify_User(s,A);
    }else if(a==3){
        Modify_adminpass(A);
    }
    else{
        break;
    }
    
}}