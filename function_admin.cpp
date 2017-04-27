#ifndef function_admin
#define function_admin

void show_event_admin(admin_priv *x) {
  ua_l *temp=new ua_l;
  temp=x->point;
system("clear");
  std::cout << "================================================================================================" << "\n";
  std::cout << "  Tanggal   " << "\t" << "  Nama Pengisi  " << "\t" << "Nama Tempat " <<"\t\t"<< "  Tempat " << "\n";
  std::cout << "================================================================================================" << "\n";

  while (temp!=NULL) {


    std::cout<<temp->tahun <<" - "<<temp->bulan <<" - " << temp->tanggal << "\t";
    std::cout << temp->nama_pengisi <<"("<<temp->kode_nama<<")"<< "\t\t";
    std::cout << temp->nama_tempat << "\t\t";
    std::cout <<"\t"<< temp->daerah << '\n';
    std::cout << "\n" << '\n';

    temp=temp->next;
}
std::cout << "\n\n\n\n" << '\n';

}

ua_l* hapus_jadwal(){

}

/*Mengambil Nama Pengisi*/
pengisi* find_pengisi(pengisi *object,std::string cari){
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


void show_event(admin_priv *z) {
ua_l *x=new ua_l;
x=z->point;
while (x!=NULL) {
  std::cout << x->no_kajian << '\n';
  x=x->next;
}

}


void make_pengisi(pengisi *z) {

pengisi *temp=new pengisi;

  std::string nama_pengisi_temp;
  std::cout << "Masukkan Nama Pengisi : " << '\n';

  std::getline(std::cin,nama_pengisi_temp,'\n');
  temp->nama_pengisi_=nama_pengisi_temp;

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


/*Counting banyaknya kajian sebagai ID*/
int counting_kajian(ua_l *z){

ua_l *temp=new ua_l;
temp=z;
int x=0;

while (temp!=NULL) {
x++;
temp=temp->next;

}

return x;
}


/*Menu buat data nama_pengisi*/
void make_event(admin_priv *x) {

ua_l *temp=new ua_l;

tanggal:
std::cout << "Masukkan Tanggal : " << '\n';
std::cin >> temp->tanggal;
if(temp->tanggal>31 or temp->tanggal<0){
std::cout << "RANGE NOT FOUND!" << '\n';
goto tanggal;
}


bulan:
std::cout << "Masukkan Bulan : " << '\n';
std::cin >> temp->bulan;

if(temp->bulan>12 or temp->bulan<0){
std::cout << "RANGE NOT FOUND!" << '\n';
goto bulan;
}
temp->tahun=2017;

std::string daerah_temp;
std::cout << "Masukkan Daerah : " << '\n';
std::cin.ignore(1);
std::getline(std::cin,daerah_temp,'\n');
temp->daerah=daerah_temp;

std::string nama_tempat_temp;
std::cout << "Masukkan Tempat Kajian Berlangsung : " << '\n';
std::cin.ignore(1);
std::getline(std::cin,nama_tempat_temp,'\n');
temp->nama_tempat=nama_tempat_temp;

/*akan ditentukan siapa pengisi menggunakan switch*/
std::cout << "Pengisi yang tersedia" << '\n';
show_pengisi(data_p);
kode_kode:
std::cout << "Masukkan Kode pengisi : " << '\n';
std::string kode;
std::cin >>kode;
pengisi *temp_p=new pengisi;

temp_p=find_pengisi(data_p,kode);
if (temp_p!=NULL) {
  temp->kode_nama=temp_p->kode_nama_;
  temp->nama_pengisi=temp_p->nama_pengisi_;
}
else{
goto kode_kode;
}
temp->no_kajian=(counting_kajian(x->point))+1;



temp->next=head; /*Elemen selanjutnya kosong*/
head=temp;
x->point=head;
system("clear");

}
void delete_event(admin_priv *x) {

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
    case 2:{show_event_admin(admin);break;}
    case 3:{make_pengisi(data_p);break;}
    case 4:{ system("clear");return 4;}
  }

}
else{
  std::cout << "Anda Belum Pengisi Kode Pengisi.... silahkan isi" << '\n';
  flag_code=1;
  make_pengisi(data_p);
}


}

#endif
