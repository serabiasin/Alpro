#ifndef STRUCT_INTERFACE_H
#define STRUCT_INTERFACE_H


/*SPESIAL VARIABEL' _'   SEBAGAI TANDA struct pengisi*/
struct pengisi {
  pengisi *next;
  std::string kode_nama_;
  std::string nama_pengisi_;
};
pengisi *data_p=new pengisi;


/*USER-ADMIN LINKING*/
struct ua_l {
  std::string tanggal;
  std::string nama_pengisi;
  std::string kode_nama;
  std::string nama_tempat;
  std::string daerah;
  ua_l *next;

};
ua_l *head=NULL;


/*KONFIGURASI USER*/
struct user_priv{
ua_l *point_to; /*Mempoint data melalui struct ua_l*/

};
user_priv *sebuah_user;


/*KONFIGURASI ADMIN*/
struct admin_priv {

  ua_l *point; //untuk menunjuk ke head
  std::string password;
  std::string nama_admin;

};

admin_priv *admin=new admin_priv;



#endif
