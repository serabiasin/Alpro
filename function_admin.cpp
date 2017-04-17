#ifndef function_admin
#define function_admin

void make_pengisi(pengisi *z) {
  std::cout << "Masukkan Nama Pengisi : " << '\n';
  std::cin >> z->nama_pengisi_;

  pengisi:
  std::cout << "Masukkan Kode Pengisi" << '\n';
  std::cin >> z->kode_nama_;
  /*Mekanisme Linked List*/
/*Lakukan Algoritma pencarian  dengan kode pengisi jika belum ada tambahkan
Jika Belum, ulang langkah kode pengisi
*/

}



/*Menu buat data nama_pengisi*/
void make_event(admin_priv *x) {

ua_l *temp=new ua_l;

std::cout << "Masukkan Tanggal Kajian (FORMAT TANGGAL-BULAN-TAHUN): " << '\n';
std::cin >> temp->tanggal;
std::cout << "Masukkan Daerah : " << '\n';
std::cin >> temp->daerah;
std::cout << "Masukkan Tempat Kajian Berlangsung : " << '\n';
std::cin >> temp->nama_tempat;

/*akan ditentukan siapa pengisi menggunakan switch*/


temp->next=head; /*Elemen selanjutnya kosong*/
head=temp; /*semua data akan ditaruh disini*/
x->point=head;
sebuah_user->point_to=head;

}


/*BUAT ADMIN*/
int admin_mode() {
int pilih;

  std::cout << "======================================================================" << "\n";
  std::cout << "========================  Menu Administrator  ========================" << "\n";
  std::cout << " 1. Input Kajian, Waktu dan Wilayah " << "\n";
  std::cout << " 2. Hapus Jadwal Kajian " << "\n";
  std::cout << " 3. Pengkodean Nama Pengisi " << "\n";
  std::cout << " 4. Keluar(logout)" << '\n';
std::cout <<'\n' << '\n';
std::cout << "Pilih Menu : " << '\n';
std::cin >> pilih;

switch (pilih) {
  case 1:{make_event(admin);break;}
  case 2:{break;}
  case 3:{break;}
  case 4:{return 4;}
}


}

#endif
