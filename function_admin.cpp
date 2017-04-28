#ifndef function_admin
#define function_admin


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



void sorting_date(ua_l *x) {

ua_l *current;
ua_l *next_node;

  int bulan_temp;
  int tanggal_temp;
  int jam_temp;
  int menit_temp;
  std::string nama_pengisi_temp;
  std::string kode_nama_temp;
  std::string nama_tempat_temp;
  std::string daerah_temp;
  int no_kajian_temp;

int size=counting_kajian(x)+1;
int k=counting_kajian(x);
for (size_t i = 0; i < size-1; i++) {
  current=admin->point;
  next_node=admin->point->next;

  for (size_t z = 0; z <k; z++) {
      if(current->tanggal < next_node->tanggal){
        /*tukar hari antar node*/
        tanggal_temp=current->tanggal;
        current->tanggal=next_node->tanggal;
        next_node->tanggal=tanggal_temp;

        /*tukar bulan antar node*/
        bulan_temp=current->bulan;
        current->bulan=next_node->bulan;
        next_node->bulan=bulan_temp;


        /*Tukar Jam antar node*/
        jam_temp=current->jam;
        current->jam=next_node->jam;
        next_node->jam=jam_temp;


        /*Tukar menit antar node*/
        menit_temp=current->menit;
        current->menit=next_node->menit;
        next_node->menit=menit_temp;

        /*Tukar nama_pengisi antar node*/
        nama_pengisi_temp=current->nama_pengisi;
        current->nama_pengisi=next_node->nama_pengisi;
        next_node->nama_pengisi=nama_pengisi_temp;


        /*Tukar kode_nama antar node*/
        kode_nama_temp=current->kode_nama;
        current->kode_nama=next_node->kode_nama;
        next_node->kode_nama=kode_nama_temp;


        /*Tukar daerah antar node*/
        daerah_temp=current->daerah;
        current->daerah=next_node->daerah;
        next_node->daerah=daerah_temp;


        /*Tukar nama_tempat antar node*/
        nama_tempat_temp=current->nama_tempat;
        current->nama_tempat=next_node->nama_tempat;
        next_node->nama_tempat=nama_tempat_temp;


      }


      }

      current = current->next;
      next_node = next_node->next;

    }
admin->point=current;

}

void show_event_admin(admin_priv *x) {
  ua_l *temp=new ua_l;
  temp=x->point;
system("clear");
  std::cout << "========================================================================================================================" << "\n";
  std::cout <<"No"<<"\t"<< "  Tanggal   " << "\t" << "  Nama Pengisi  " << "\t" << "Nama Tempat " <<"\t\t"<< "  Tempat " <<"\t\t"<<"Waktu"<< "\n";
  std::cout << "========================================================================================================================" << "\n";

  while (temp!=NULL) {

    std::cout << temp->no_kajian << '\t';
    std::cout <<temp->tahun <<" - "<<temp->bulan <<" - " << temp->tanggal << "\t";
    std::cout <<"   "<< temp->nama_pengisi <<"("<<temp->kode_nama<<")"<<"\t";
    std::cout <<"\t"<< temp->nama_tempat << "\t";
    std::cout <<"\t"<< "\t"<<"  "<<temp->daerah << '\t';
    std::cout << "\t\t"<<temp->jam<<":"<<temp->menit << '\n';
    std::cout << "\n" << '\n';

    temp=temp->next;
}
std::cout << "\n\n\n\n" << '\n';

}

void hapus_jadwal(struct ua_l **head_ref)
{
    // Store head node
    struct ua_l* temp = *head_ref, *prev;
int key;
std::cout << "Masukkan No Kajian : " << '\n';
std::cin >> key;


    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->no_kajian == key)
    {
        *head_ref = temp->next;   // Changed head
        free(temp);               // free old head
        return;
    }

    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->no_kajian != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL) return;

    // Unlink the node from linked list
    prev->next = temp->next;

    free(temp);  // Free memory
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

waktu:
std::cout << "Masukkan Waktu(jam:menit)" << '\n';
std::cin >> temp->jam>>temp->menit;
if (temp->jam>24 or temp->menit>60) {
  std::cout << "ULANGI ! " << '\n';
  goto waktu;
}

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
    case 2:{show_event_admin(admin);hapus_jadwal(&admin->point);break;}
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
