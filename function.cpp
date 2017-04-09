#ifndef function_cpp
#define function_cpp

#include "struct_interface.h"
#include <unistd.h>
#include <time.h>
#include <termios.h>



/*MENG INISIALIASI PASSWORD UNTUK ADMIN */
void init(admin_priv *x) {

std::cout << "Initializing....." << '\n';

for (size_t i = 0; i <3; i++) {
  sleep(1);
}
std::cout << '\n';


  x->nama_admin="Harry";

if(x->password=="km1periode"){

std::cout << "Success...." << '\n';
}
else
std::cout << "Password Salah!,Dimasukkan Mode USER...." << '\n';

}
void login(admin_priv *x){
  std::string password_str;
password_str=getpass("Masukkan Password : ");
x->password=password_str;

}



void tampilan(){


}

#endif
