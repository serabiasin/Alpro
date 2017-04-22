#ifndef function_admin
#define function_admin


ua_l hapus_jadwal(){

}

/*Mengambil Nama Pengisi*/
pengisi find_pengisi(pengisi *object,std::string cari){

while (object!=NULL) {
  if (cari==object->kode_nama_) {
    return *object;
    break;
  }
  else if(cari!=object->kode_nama_){
    object=object->next; //lanjut
  }
  else {
    std::cout << "NOT FOUND!!" << '\n';

  }
}

}


void show_event(admin_priv *z) {
ua_l *x=new ua_l;
x=z->point;
while (x!=NULL) {
  std::cout << "x" << '\n';
  x=x->next;
}

}

int get_many_data(pengisi *x){
int z=0;
while (x!=NULL) {
  z++;
  x=x->next;
}

return z;
}


void make_pengisi(pengisi *z) {

pengisi *temp=new pengisi;

  std::cout << "Masukkan Nama Pengisi : " << '\n';
  std::cin >> temp->nama_pengisi_;

  pengisi:
  std::cout << "Masukkan Kode Pengisi" << '\n';
  std::cin >> temp->kode_nama_;
/*Mekanisme linked list*/
temp->next=head_p;
head_p=temp;
data_p=head_p;


/*Lakukan Algoritma pencarian  dengan kode pengisi jika belum ada tambahkan
Jika Belum, ulang langkah kode pengisi*/


}

void show_pengisi(pengisi *data) {
  std::cout << "================================================" << '\n';
  std::cout << "NAMA " << '\t'<<'\t'<<'\t'<<"KODE"<<std::endl;
  std::cout << "================================================" << '\n';
  while (data!=NULL) {
    std::cout << data->nama_pengisi_ <<'\t'<< '\t'<<'\t'<<data->kode_nama_<<std::endl;
    data=data->next;
  }
  std::cout << "\n" << '\n';
}

/*Menu buat data nama_pengisi*/
void make_event(admin_priv *x) {

ua_l *temp=new ua_l;

std::cout << "Masukkan Tanggal : " << '\n';
std::cin >> temp->tanggal;
std::cout << "Masukkan Bulan : " << '\n';
std::cin >> temp->bulan;
std::cout << "Masukkan Tahun : " << '\n';
std::cin >> temp ->tahun;
std::cout << "Masukkan Daerah : " << '\n';
std::cin >> temp->daerah;
std::cout << "Masukkan Tempat Kajian Berlangsung : " << '\n';
std::cin >> temp->nama_tempat;

/*akan ditentukan siapa pengisi menggunakan switch*/
std::cout << "Pengisi yang tersedia" << '\n';
show_pengisi(data_p);
std::cout << "Masukkan Kode pengisi : " << '\n';
std::string kode;
std::cin >>kode;

pengisi *k_pengisi=new pengisi;
*k_pengisi=find_pengisi(data_p,kode);

temp->kode_nama=k_pengisi->kode_nama_;
temp->nama_pengisi=k_pengisi->nama_pengisi_;

delete k_pengisi;



temp->next=head; /*Elemen selanjutnya kosong*/
head=temp;
x->point=head;

system("clear");

}



/*BUAT ADMIN*/
int admin_mode() {
int pilih;

/*Jika sudah ada pengisi*/
if (flag_code!=0) {
  /* code */
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
    case 1:{make_event(admin); break;}
    case 2:{break;}
    case 3:{make_pengisi(data_p);break;}
    case 4:{  system("clear");return 4;}
  }

}
else{
  std::cout << "Anda Belum Pengisi Kode Pengisi.... silahkan isi" << '\n';
  flag_code=1;
  make_pengisi(data_p);
}


}

#endif
