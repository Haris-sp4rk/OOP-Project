#include<iostream>
#include<string.h>
#include<conio.h>
#include <fstream>
using namespace std;
# pragma once
fstream fp,fp1;
//***************************************************************
//                    CLASS FOR USER
//****************************************************************
class User
{
	char Password[11];
	protected:
	char name[20];


public:

	void create_User()
	{
		system("cls");
	 	cout<<"\nNEW User ENTRY...\n";
         cout<<"\n\nEnter The Name of The User:";
		cin>>(name);
		cout<<"Enter your password(Max length 10):";
		char ch;
		int characterposition=0;
			while(1){
			ch= getch();
			if(ch==32||ch==9){
				continue;
			}else if(ch==13){
				break;
			}else if(ch==8){
				if(characterposition>0){
				characterposition--;
				Password[characterposition]='\0';
				cout<<"\b \b";}
			}else if(characterposition<10){
					Password[characterposition]=ch;
					characterposition++;
					cout<<"*";
				}else {
					cout<<"\n Your password length exceeds max password length so only first 10 characters will be stored";
					break;
				}
			}
		
		Password[characterposition]='\0';
		int len=strlen(Password);
		for(int i=0;i<len;i++){
			Password[i]=Password[i]-45;
		}
		fflush(stdin);
		
		
		cout<<"\n\nUser Record Created..";
	}

	void show_User()
	{
		cout<<"\nAdmission no. : "<<Password;
		cout<<"\nUser Name : ";
		puts(name);
		
	}

	void modify_User()
	{
		cout<<"\nPassword : "<<Password;
		cout<<"\nModify User Name : ";
		gets(name);
	}

	char* retPassword()
	{
		return Password;
	}
    char* retname(){
        return name;
    }
    void decrypt(){
        int len=strlen(Password);
        for(int i=0;i<len;i++){
			Password[i]=Password[i]+45;
            
		}
    }
};         //class ends here
void write_User(User st)
{
	char ch;
    
	fp.open("User.dat",ios::out|ios::app);
		fp.write((char*)&st,sizeof(User));

	fp.close();
}
void display_(char n[],User st)
{
	cout<<"\nSTUDENT DETAILS\n";
	int flag=0;
	fp.open("User.dat",ios::in);
	while(fp.read((char*)&st,sizeof(User)))
	{
		if((strcmp(st.retname(),n)==0))
		{
            st.decrypt();
			st.show_User();
			flag=1;
            break;
		}
	}
	
	fp.close();
	if(flag==0)
    		cout<<"\n\nStudent does not exist";
 	getch();
}
