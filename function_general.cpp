#ifndef function_cpp
#define function_cpp


#include <unistd.h>
#include <time.h>
#include <termios.h>
#include <time.h>

/*berdasarkan tanggal*/
void show_event_date(ua_l *x) {
  ua_l *temp=new ua_l;
  temp=x;
  system("clear");

  time_t t=time(0);
  tm *waktu=localtime(&t);



  std::cout << "================================================================================================" << "\n";
  std::cout << "Saat Ini Tanggal : "<< waktu->tm_year+1900<<"-"<<waktu->tm_mon+1<<"-"<<waktu->tm_mday<< '\n';
  std::cout << "================================================================================================" << "\n";
  std::cout << "\n\n" << '\n';
	std::cout << "================================================================================================" << "\n";
	std::cout << "  Tanggal   " << "\t" << "  Nama Pengisi  " << "\t" << "Nama Tempat " <<"\t\t"<< "  Tempat " << "\n";
  std::cout << "================================================================================================" << "\n";
  while (temp!=NULL) {
    /*BIKIN ALGORITMA UNTUK MEMFILTER TANGGAL SAAT INI HINGGA 3 HARI KEDEPAN*/
    // if (true) {
    // }
    /*Sesuaikan bentuk tabel*/
    std::cout<<temp->tahun <<" - "<<temp->bulan <<" - " << temp->tanggal << "\t\t";
    std::cout << temp->nama_pengisi <<"("<<temp->kode_nama<<")"<< "\t\t";
    std::cout << temp->nama_tempat << "\t\t";
    std::cout << "\n" << '\n';


    temp=temp->next;
  }

delete temp;
}


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
  std::cout << " 5. Exit" << '\n';

  std::cout << "Pilih Menu : " << '\n';

}

/*Buat USER*/
int user_mode() {
  int pilih;
usr_menu();
std::cin >> pilih;
switch (pilih) {
  case 1:{break;}
  case 2:{show_event_date(head);break;}
  case 3:{break;}
  case 4:{return 4;break;}
}

}


#endif
