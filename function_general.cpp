#ifndef function_cpp
#define function_cpp

#include "struct_interface.h"
#include <unistd.h>
#include <time.h>
#include <termios.h>



/*MENG INISIALIASI PASSWORD UNTUK ADMIN */
bool _init_(admin_priv *x) {

std::cout << "Initializing....." << '\n';

for (size_t i = 0; i <3; i++)
{

  sleep(1);
  std::cout << "." << '\n';

}
  std::cout << '\n';


  x->nama_admin="Harry";

if(x->password=="km1periode"){
    std::cout << "Success...." << '\n';

  for (size_t i = 0; i < 3; i++)
  {
    sleep(1);
  }

  system("clear");
  return true;

}

else
std::cout << "Password Salah!,Dimasukkan Mode USER...." << '\n';

return false;
}


void tampilan_login()
{
  std::cout << "======================================================================" << "\n";
  std::cout << "========================  ASSALAMUALAIKUM  ===========================" << "\n";
  std::cout << "========   Selamat Datang di Aplikasi Penjadwalan Kajian  ============" << "\n";
  std::cout << "===============   Silakan Password Terlebih Dahulu   =================" << "\n";
  std::cout << "======================================================================" << "\n";
  std::cout  << '\n';
  std::cout  << '\n';
}

void login(admin_priv *x){
  std::string password_str;
  tampilan_login();
password_str=getpass("Masukkan Password : ");
x->password=password_str;

}

void usr_menu()
{
	std::cout << "======================================================================" << "\n";
	std::cout << "============================  Menu Pengguna  =========================" << "\n";
	std::cout << " 1. Pencarian Pengisi Kajian " << "\n";
	std::cout << " 2. Pencarian Berdasarkan Tanggal " << "\n";
	std::cout << " 3. Pencarian Berdasarkan Waktu " << "\n";
	std::cout << " 4. Pengurutan Berdasarkan Tanggal dan Waktu " << "\n";

}

/*Buat USER*/
int user_mode() {
usr_menu();
}


#endif
