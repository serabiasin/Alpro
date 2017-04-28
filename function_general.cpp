#ifndef function_cpp
#define function_cpp


#include <unistd.h>
#include <time.h>
#include <termios.h>
#include <time.h>


void show_pengisi_user(pengisi *data) {
  std::cout << "================================================" << '\n';
  std::cout << "NAMA " << '\t'<<'\t'<<'\t'<<"KODE"<<std::endl;
  std::cout << "================================================" << '\n';
  while (data!=NULL) {
    std::cout << data->nama_pengisi_ <<'\t'<< '\t'<<'\t'<<data->kode_nama_<<std::endl;
    data=data->next;
  }
  std::cout << "\n" << '\n';
}

/*Mengambil Nama Pengisi*/
pengisi* find_pengisi_user(pengisi *object,std::string cari){
pengisi *temp=new pengisi;
temp=object;

while (object!=NULL) {
  if (cari==temp->kode_nama_) {
    return object;
    break;
  }
  else if(cari!=object->kode_nama_){
    temp=temp->next; //lanjut
  }
  else {
    std::cout << "NOT FOUND!!" << '\n';
    return NULL;
  }
}

}


/*berdasarkan tanggal*/
void show_event_date(user_priv *x) {
  ua_l *temp=new ua_l;
  temp=x->point_to;
  system("clear");

  time_t t=time(0);
  tm *waktu=localtime(&t);
char pil;
  std::cout << "ingin melihat kajian 3 hari kedepan ? " << '\n';
  std::cin >> pil;
int c_month;
int c_date;
  if (pil=='y') {
    c_date=waktu->tm_mday;
    c_month=waktu->tm_mon+1;
  }
else{
  std::cout << "Masukkan tanggal : " << '\n';
  std::cin >> c_date;
  std::cout << "Masukkan Bulan : " << '\n';
  std::cin >> c_month;

}


  std::cout << "================================================================================================" << "\n";
  std::cout << "Saat Ini Tanggal : "<< waktu->tm_year+1900<<"-"<<waktu->tm_mon+1<<"-"<<waktu->tm_mday<< '\n';
  std::cout << "================================================================================================" << "\n";
  std::cout << "\n\n" << '\n';
  std::cout << "========================================================================================================================" << "\n";
  std::cout <<"No"<<"\t"<< "  Tanggal   " << "\t" << "  Nama Pengisi  " << "\t" << "Nama Tempat " <<"\t\t"<< "  Tempat " <<"\t\t"<<"Waktu"<< "\n";
  std::cout << "========================================================================================================================" << "\n";
  while (temp!=NULL) {
    /*BIKIN ALGORITMA UNTUK MEMFILTER TANGGAL SAAT INI HINGGA 3 HARI KEDEPAN*/
    if (c_month==temp->bulan) {

      if (temp->tanggal >= c_date and temp->tanggal <=c_date+3) {
        std::cout << temp->no_kajian << '\t';
        std::cout <<temp->tahun <<" - "<<temp->bulan <<" - " << temp->tanggal << "\t";
        std::cout <<"   "<< temp->nama_pengisi <<"("<<temp->kode_nama<<")"<<"\t";
        std::cout <<"\t"<< temp->nama_tempat << "\t";
        std::cout <<"\t"<< "\t"<<"  "<<temp->daerah << '\t';
        std::cout << "\t\t"<<temp->jam<<":"<<temp->menit << '\n';
        std::cout << "\n" << '\n';
      }
    }


  temp=temp->next;
  }
std::cout << "\n\n\n" << '\n';
delete temp;
}

/*Date and time*/
void show_event_dt(user_priv *x) {

    ua_l *temp=new ua_l;
    temp=x->point_to;
    system("clear");

    time_t t=time(0);
    tm *waktu=localtime(&t);
  int c_date=waktu->tm_mday;
  int c_month=waktu->tm_mon+1;

int c_jam,c_menit;
std::cout << "Masukkan waktu yang anda cari (jam:menit): " << '\n';
std::cin >>c_jam>>c_menit;

    std::cout << "================================================================================================" << "\n";
    std::cout << "Saat Ini Tanggal : "<< waktu->tm_year+1900<<"-"<<waktu->tm_mon+1<<"-"<<waktu->tm_mday<< '\n';
    std::cout << "================================================================================================" << "\n";
    std::cout << "\n\n" << '\n';
    std::cout << "========================================================================================================================" << "\n";
    std::cout <<"No"<<"\t"<< "  Tanggal   " << "\t" << "  Nama Pengisi  " << "\t" << "Nama Tempat " <<"\t\t"<< "  Tempat " <<"\t\t"<<"Waktu"<< "\n";
    std::cout << "========================================================================================================================" << "\n";

while(temp!=NULL){
      /*BIKIN ALGORITMA UNTUK MEMFILTER TANGGAL SAAT INI HINGGA 3 HARI KEDEPAN*/
      if (c_month==temp->bulan) {

        if (temp->tanggal >= c_date and temp->tanggal <=c_date+3) {
            if (temp->jam >= c_jam and temp->menit >= c_menit) {
              std::cout << temp->no_kajian << '\t';
              std::cout <<temp->tahun <<" - "<<temp->bulan <<" - " << temp->tanggal << "\t";
              std::cout <<"   "<< temp->nama_pengisi <<"("<<temp->kode_nama<<")"<<"\t";
              std::cout <<"\t"<< temp->nama_tempat << "\t";
              std::cout <<"\t"<< "\t"<<"  "<<temp->daerah << '\t';
              std::cout << "\t\t"<<temp->jam<<":"<<temp->menit << '\n';
              std::cout  << '\n';
            }
        }
      }


    temp=temp->next;
    }

  std::cout << "\n\n\n" << '\n';
  delete temp;
  }


void show_event_time(user_priv *x) {
int c_hour,c_minute;
ua_l*temp=new ua_l;
temp=x->point_to;


std::cout << "Masukkan Waktu yang ingin dicari (jam:menit) : " << '\n';
std::cin >> c_hour>>c_minute;
system("clear");

    time_t t=time(0);
    tm *waktu=localtime(&t);
  int c_date=waktu->tm_mday;
  int c_month=waktu->tm_mon+1;

std::cout << "========================================================================================================================" << "\n";
std::cout <<"No"<<"\t"<< "  Tanggal   " << "\t" << "  Nama Pengisi  " << "\t" << "Nama Tempat " <<"\t\t"<< "  Tempat " <<"\t\t"<<"Waktu"<< "\n";
std::cout << "========================================================================================================================" << "\n";

while (temp!=NULL) {
  if (temp->tanggal >= c_date and temp->tanggal <=c_date+3) {
    if (temp->jam==c_hour and temp->menit ==c_minute) {
      std::cout << temp->no_kajian << '\t';
      std::cout <<temp->tahun <<" - "<<temp->bulan <<" - " << temp->tanggal << "\t";
      std::cout <<"   "<< temp->nama_pengisi <<"("<<temp->kode_nama<<")"<<"\t";
      std::cout <<"\t"<< temp->nama_tempat << "\t";
      std::cout <<"\t"<< "\t"<<"  "<<temp->daerah << '\t';
      std::cout << "\t\t"<<temp->jam<<":"<<temp->menit << '\n';
      std::cout  << '\n';
    }


  }
  temp=temp->next;
}



delete temp;
}


void show_event_pengisi(user_priv *x) {
ua_l *temp=new ua_l;
temp=x->point_to;

  show_pengisi_user(data_p);

  time_t t=time(0);
  tm *waktu=localtime(&t);
  int c_date=waktu->tm_mday;
  int c_month=waktu->tm_mon+1;



std::string kode;
std::cout << "Masukkan Kode Pengisi : " << '\n';
std::cin >> kode;

pengisi *aki=new pengisi;
aki=find_pengisi_user(data_p,kode);
std::cout << "========================================================================================================================" << "\n";
std::cout <<"No"<<"\t"<< "  Tanggal   " << "\t" << "  Nama Pengisi  " << "\t" << "Nama Tempat " <<"\t\t"<< "  Tempat " <<"\t\t"<<"Waktu"<< "\n";
std::cout << "========================================================================================================================" << "\n";

while (temp!=NULL) {
  if (temp->tanggal >= c_date and temp->tanggal <=c_date+3) {
    if (temp->nama_pengisi==aki->nama_pengisi_) {

      std::cout << temp->no_kajian << '\t';
      std::cout <<temp->tahun <<" - "<<temp->bulan <<" - " << temp->tanggal << "\t";
      std::cout <<"   "<< temp->nama_pengisi <<"("<<temp->kode_nama<<")"<<"\t";
      std::cout <<"\t"<< temp->nama_tempat << "\t";
      std::cout <<"\t"<< "\t"<<"  "<<temp->daerah << '\t';
      std::cout << "\t\t"<<temp->jam<<":"<<temp->menit << '\n';
      std::cout  << '\n';

    }


  }

  temp=temp->next;
}


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
user_priv *user=new user_priv;
user->point_to=head;

  int pilih;
usr_menu();
std::cin >> pilih;
switch (pilih) {
  case 1:{show_event_pengisi(user);break;}
  case 2:{show_event_date(user);break;} //done
  case 3:{show_event_time(user);break;} //done
  case 4:{show_event_dt(user);break;} //done
  case 5:{delete user; return 4;break;} //mencegah memory leak
}

}


#endif
