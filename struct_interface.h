#ifndef STRUCT_INTERFACE_H
#define STRUCT_INTERFACE_H

int flag_code=0;
int numb=0;
/*SPESIAL VARIABEL' _'   SEBAGAI TANDA struct pengisi*/
struct pengisi
{
  pengisi *next;
  std::string kode_nama_;
  std::string nama_pengisi_;
};
pengisi *head_p=NULL;
pengisi *data_p=new pengisi;


/*USER-ADMIN LINKING*/
struct ua_l {
  int bulan; /*3 unsur ini akan di gabung menggunakan string*/
  int tahun;
  int tanggal;
  std::string nama_pengisi;  /*WIll display*/
  std::string kode_nama;
  std::string nama_tempat;  /*WIll display*/
  std::string daerah;  /*WIll display*/
  int no_kajian;
  ua_l *next;

};
ua_l *head=NULL;


/*KONFIGURASI USER*/
struct user_priv{
ua_l *point_to; /*Mempoint data melalui struct ua_l*/

};
user_priv *sebuah_user=new user_priv;


/*KONFIGURASI ADMIN*/
struct admin_priv {

  ua_l *point; //untuk menunjuk ke head
  std::string password;
  std::string nama_admin;

};

admin_priv *admin=new admin_priv;



#endif
