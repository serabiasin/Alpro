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

void sortedInsert(ua_l** head_ref,ua_l* new_node)
{
    ua_l* current;
    /* Special case for the head end */
    if (*head_ref == NULL || (*head_ref)->no_kajian >= new_node->no_kajian)
    {
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
    else
    {
        /* Locate the node before the point of insertion */
        current = *head_ref;
        while (current->next!=NULL &&
               current->next->no_kajian< new_node->no_kajian)
        {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}


// function to sort a singly linked list using insertion sort
void insertionSort(ua_l**head_ref)
{
    // Initialize sorted linked list
     ua_l *sorted = NULL;

    // Traverse the given linked list and insert every
    // node to sorted
     ua_l *current = *head_ref;

    while (current != NULL)
    {
        // Store next for next iteration
        ua_l *next = current->next;

        // insert current in sorted linked list
        sortedInsert(&sorted, current);

        // Update current
        current = next;
    }

    // Update head_ref to point to sorted linked list
    *head_ref = sorted;
}



/*Bikin Algoritma sorting*/


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

        prev = temp; //make addresss previous
        temp = temp->next; //move to next address
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
  std::cout << "Masukkan Nama Pengisi : ";
  std::cin.ignore();
  std::getline(std::cin,nama_pengisi_temp,'\n');
  temp->nama_pengisi_=nama_pengisi_temp;
  std::cin.clear();

  pengisi:
  std::cout << "Masukkan Kode Pengisi" << '\n';
  std::cin >> temp->kode_nama_;

/*Mekanisme linked list*/
temp->next=head_p;
head_p=temp;
data_p=head_p;


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
std::cin.ignore();
std::getline(std::cin,daerah_temp,'\n');
temp->daerah=daerah_temp;

std::string nama_tempat_temp;
std::cout << "Masukkan Tempat Kajian Berlangsung : " << '\n';
std::cin.ignore();
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
temp->no_kajian=(counting_kajian(x->point))+1001;



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
    case 2:{insertionSort(&admin->point);show_event_admin(admin);hapus_jadwal(&admin->point);break;}
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
