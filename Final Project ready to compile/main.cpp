#include <iostream>
#include"USER.h"
#include"Admin_pannel.hpp"
#include"LOGIN_PANEL.h"
#include"logo.hpp"
#include"Canteen.hpp"
#include"library.hpp"
#include"arcade.hpp"
using namespace std;
int main(){
    User A;
    logo();
    system("cls");
    login_panel(A);
     system("cls");
    char c;
    while (1){
       system("cls");
      system("cls");
      cout << "\n\t\t\t Welcome to Geekzilla\n" << endl;
      cout << "\t\t1.Library Management System" << endl;
      cout << "\t\t2.Chat room" << endl;
      cout << "\t\t3.Canteen" << endl;
      cout << "\t\t4.Gaming Arcade" << endl;
      cout << "\t\t5.Exit" << endl;

      cout << "\t\t\t Enter your choice:";
      c=getch();

	 if(c=='1')
	  { system("cls");
              library();
      }

      else if(c=='2')
	  { system("cls");
      system("cls");
        system("Client.exe");
        system("pause");
      }
      else if(c=='3')
      {
          system("cls");
         c1;
        c1.Menu();
        c1.Takeorder();
        system("cls");
        c1.Printreceipt(A);
         system("cls");
      }
      else if(c=='4'){
          system("cls");
          arcade();
          system("cls");
      }
      else if(c=='9')
      {
           system("cls");
        admin_pannel(A);
        system("pause");
         system("cls");
      }
      else{
          break;
      }
}
return 0;
}


