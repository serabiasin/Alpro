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
ua_l *point_to; /*Mempoint data melalui struct ua_l*/

};

/*KONFIGURASI ADMIN*/
struct admin_priv {

  ua_l *modif;
  std::string password;
  std::string nama_admin;

};

admin_priv *admin=new admin_priv;
ua_l *data;
user_priv *user;


#endif
