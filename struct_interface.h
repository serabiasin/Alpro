#ifndef STRUCT_INTERFACE_H
#define STRUCT_INTERFACE_H


/*USER-ADMIN LINKING*/
struct ua_l {

  std::string nama_pengisi;
  std::string nama_tempat;
  std::string daerah;
  ua_l *next;

};

/*KONFIGURASI USER*/
struct user_priv{
  user_priv *next; /*Mempoint data melalui struct ua_l*/

};

/*KONFIGURASI ADMIN*/
struct admin_priv {

  ua_l *modif;
  std::string password;
  std::string nama_admin;
  int flag; /*indikasi apakah login sukses atau tidak */
};

admin_priv *admin=new admin_priv;
ua_l *data;
user_priv *user;


#endif
