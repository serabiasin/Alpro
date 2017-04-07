#ifndef STRUCT_INTERFACE_H
#define STRUCT_INTERFACE_H

struct user_priv{
  ua_l *next;

};

/*USER ADMIN LINKING*/
struct ua_l {
  std::string nama_pengisi;
  std::string nama_tempat;
  std::string daerah;
};

struct admin_priv {
  ua_l *modif;
  std::string password;
  std::string nama_admin;

};

#endif
