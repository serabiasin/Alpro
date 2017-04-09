#include <iostream>

#include "struct_interface.h"
#include "function_general.cpp"
#include "function_admin.h"

void init(admin_priv *x); /*setup username admin*/
void login(admin_priv *x);


int main() {

login(admin);
init(admin);
  return 0;
}
