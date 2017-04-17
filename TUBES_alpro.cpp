#include <iostream>
#include <cstdlib>

#include "struct_interface.h"
#include "function_general.cpp"
#include "function_admin.cpp"

void init(admin_priv *x); /*setup username admin*/
void login(admin_priv *x);


int main() {
bool x;
int flag; /*Bendera keluar*/

login:
login(admin);

x=_init_(admin);

for(;;){
if (x==false)
{

flag=user_mode();
if (flag==4) {
  goto login;
  system("clear");
}



}


else if(x==true)
{

flag=admin_mode();

if (flag==4) {
  goto login;
  system("clear");
}

}




}



  return 0;
}
