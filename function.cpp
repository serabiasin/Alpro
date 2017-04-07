#ifndef function_cpp
#define function_cpp
#include "struct_interface.h"
#include <unistd.h>

void init(admin_priv *x) {

std::cout << "Initializing....." << '\n';

for (size_t i = 0; i <3; i++) {
  std::cout << "." << '\n';
  sleep(1);
}

  x->password="";
  x->nama_admin="Harry";

std::cout << "Success...." << '\n';

}

void tampilan(){


}

#endif
