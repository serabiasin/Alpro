/* ALHAMDULILLAH DONE!!!
TO DO : DIPOLES DIKIT :D
===================100% progress!!!==========================================
*/
#ifndef function_CPP
#define function_CPP
#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
#include "struct_interface.h"
#include <cstdlib>
#include <stdio.h>

using namespace std;
int balik(1);

int backmode(){
  return true;
}

/*fitur exit udah bener jangan DI OTAK-ATIK*/
int exit_program(int j){
balik=j;
  return j;
}

/*bikin fungsi yang mencari data password dan username*/
int check(string x,int y)
{
  if(x=="anis_tevong"&&y==1001){
    int nip(y);

return nip;

  }
  if(x=="Trenggalek"&&y==1002){
    int nip(y);
return nip;
}
  if(x=="manggis_1"&&y==1003){  int nip(y); return nip;}
    if(x=="imtheking"&&y==2001){  int nip(y); return nip;}
      if(x=="sayaimut"&&y==2002){  int nip(y); return nip;}
        if(x=="sayakucing"&&y==2003){  int nip(y); return nip;}
          if(x=="sotowae"&&y==3001){  int nip(y); return nip;}
            if(x=="pritprit"&&y==3002){  int nip(y); return nip;}
              if(x=="baksoisgood"&&y==3003){  int nip(y); return nip;}
}
/*FINISHED!*/
void show_data_gaji_helpdesk(){
/*bikin filestream disini untuk data base*/
int data[3], no[3];
string nama[3];
fstream myfile,nomor,data_pegawai;
myfile.open("gaji_helpdesk.txt",ios::app|ios::in|ios::out);
nomor.open("nomor_pegawai.txt",ios::out|ios::app|ios::in);
data_pegawai.open("data_pegawai.txt",ios::in|ios::out|ios::app);

for(int x=0;x<3;x++){
  data_pegawai>>ws;
    getline(data_pegawai,nama[x]); //untuk membaca baris dan spasi
  myfile>>data[x];
  nomor>>no[x];

}
system("clear");
  cout<<"No Pegawai"<<"\t"<<"Nama Pegawai"<<"\t\t"<<"Gaji"<<endl;

/*OUTPUT ALGORITHM*/
for (size_t i = 0; i < 3; i++) {
  cout<<no[i]<<"\t \t";
  cout<<nama[i]<<"\t \t";
  cout<<data[i]<<endl;
}
myfile.close();
nomor.close();
data_pegawai.close();
}

/*DONE!!!!!*/
int ubah_gaji_helpdesk(int gaji,int nim){
/*overall udah berhasil tinggal cari cara nyari gaji berdasarkan urutan*/
fstream check("gaji_helpdesk.txt",ios::out|ios::in|ios::app);
int indeks=nim-3000;
int gaji_ori[5]; //memanggil nya pake indeks
for (size_t i = 0; i < 4; i++) {
 check>>gaji_ori[i];
}

if(nim==3001){
/*bikin algoritma search*/

// gaji_ori;
int temp_data1;
ifstream read_data("gaji_helpdesk.txt");
fstream  temp_data("temp_data.txt",ios::in|ios::out|ios::app);

  if(!read_data || !temp_data) //if both files are not available
{/*jika file tidak ditemukan*/
      cout << "Error opening files!" << endl;
      return 1;
  }
  //variabel temp_data1 membaca file dari read_data
while (read_data>>temp_data1) {
  if(temp_data1==gaji_ori[0]){
    temp_data1=gaji;
  }
  temp_data<<temp_data1<<endl;
}
remove("gaji_helpdesk.txt");
rename("temp_data.txt","gaji_helpdesk.txt");
}

//belum kelar untuk nim 3002-3003
if(nim==3002){
  // int gaji_ori;

  int temp_data1;
  ifstream read_data("gaji_helpdesk.txt");
  fstream  temp_data("temp_data.txt",ios::in|ios::out|ios::app);
    if(!read_data || !temp_data) //if both files are not available
  {/*jika file tidak ditemukan*/
        cout << "Error opening files!" << endl;
        return 1;
    }
  while (read_data>>temp_data1) {//memindahkan semua yang ada di read_data ke variabel temp_data1
    if(temp_data1==gaji_ori[1]){
      temp_data1=gaji; //jika temp_data1 menemukan data yg dicari di ganti!
    }
    temp_data<<temp_data1<<endl; //memindahkan data variabel temp_data1 ke temp_data
  }

  remove("gaji_helpdesk.txt");
  rename("temp_data.txt","gaji_helpdesk.txt");
}

if(nim==3003){
  // int gaji_ori;

  int temp_data1;
  ifstream read_data("gaji_helpdesk.txt");
  fstream  temp_data("temp_data.txt",ios::in|ios::out|ios::app);
    if(!read_data || !temp_data) //if both files are not available
  {/*jika file tidak ditemukan*/
        cout << "Error opening files!" << endl;
        return 1;
    }
  while (read_data>>temp_data1) {
    if(temp_data1==gaji_ori[2]){
      temp_data1=gaji;
    }
    temp_data<<temp_data1<<endl;
  }
  // gaji_ori=gaji;
  remove("gaji_helpdesk.txt");
  rename("temp_data.txt","gaji_helpdesk.txt");
}

/*                                                   */

show_data_gaji_helpdesk();
return backmode();
}

/*done*/
void show_data_gaji_marketing(){
fstream file("gaji_marketing.txt",ios::in|ios::out|ios::app);
fstream no("nomor_pegawai_marketing.txt",ios::in|ios::out|ios::app);
fstream nama("data_pegawai_marketing.txt",ios::in|ios::out|ios::app);
int gaji[5],no_data[5];
string nama_peg[5];
for(int x=0;x<3;x++){
  nama>>ws;
    getline(nama,nama_peg[x]); //untuk membaca baris dan spasi
  file>>gaji[x];
  no>>no_data[x];

}
for (size_t i = 0; i < 3; i++) {
  cout<<no_data[i]<<"\t \t";
  cout<<nama_peg[i]<<"\t \t";
  cout<<gaji[i]<<endl;
}

backmode();

}

/*better algorithm*/
int ubah_gaji_marketing(int gaji,int no){
int gaji_pegawai[5],indeks,temp_data1;
indeks=no-2001;
int x(0);
fstream search;
search.open("gaji_marketing.txt",ios::in|ios::out|ios::app);

for (size_t i = 0; i < 5; i++) {
  search>>gaji_pegawai[i];
}

search.close();

fstream data("gaji_marketing.txt",ios::in|ios::out|ios::app);
fstream temp_data("temp.txt",ios::in|ios::out|ios::app);


if(!data || !temp_data) //if both files are not available
{/*jika file tidak ditemukan*/
    cout << "Error opening files!" << endl;
    return 1;
}

while (data>>temp_data1) {
if(temp_data1==gaji_pegawai[indeks]){//gaji_pegawai[indeks] ini acuan yg ingin diganti
  temp_data1=gaji;
}
temp_data<<temp_data1<<endl;
}
// gaji_ori=gaji;
remove("gaji_marketing.txt");
rename("temp.txt","gaji_marketing.txt");
system("clear");

show_data_gaji_marketing();
return backmode();
}


/*ini keluhan dan bla-bla*/
void get_laporan() {
  fstream laporan("laporan.txt",ios::app|ios::in);
  fstream laporan_uang("laporan_uang.txt",ios::app|ios::in);
string data,beta;
int pengeluaran;
int data1(0);
cout<<"Perihal "<<"\t\t"<<"Debit/Kredit"<<endl;
  while (laporan>>data) {
    laporan_uang>>beta;
  laporan>>ws;
  // getline(laporan,pengeluaran);
    getline(laporan,data);
    cout<<data1+1<<"."<<data<<"\t"<<" "<<beta<<endl;
data1++;
  }
}

void ubah_laporan(){
get_laporan();
fstream laporan("laporan.txt",ios::app|ios::in|ios::out);
fstream uang("laporan_uang.txt",ios::app|ios::in|ios::out);
// char perihal[200];
string perihal,perihal2;
  string uang2;
cout<<"Masukkan Perihal :";
cin>>ws>>perihal>>perihal2;
laporan<<"#  "<<perihal<<"  "<<perihal2<<endl;
cout<<"Masukkan Dana (Debit/Kredit)";
cin>>uang2;
uang<<uang2<<endl;
system("clear");
get_laporan();
}

void laporan_keuangan_marketing(){
  string mess[]={"1.Ubah Laporan","2.Lihat Laporan","Pilih Pilihan : ","\0"};
int x(0),pilih;
  while (mess[x]!="\0") {
    cout<<mess[x]<<endl;
  x++;
  }
cin>>pilih;
switch (pilih) {
  case 1:{ubah_laporan();break;} //harus bikin kesepakatan nama file agar bisa di akses!!
  case 2:{get_laporan();break;} //
}

}

void rapat() {
int pilihan,x(0);
string text[100],time_rapat[100];
string mess[]={"1.Lihat jadwal meeting","2.Ubah jadwal"};
  /*fstream*/
  fstream rapat_tembok("meeting.txt",ios::app|ios::in|ios::out);
  fstream waktu("time.txt",ios::app|ios::out|ios::in);

while (x!=3) {
  cout<<mess[x]<<endl;
  x++;
}


cout<<endl<<"Masukkan pilihan :";cin>>pilihan;


switch (pilihan) {
  case 1:{/*sementara 3 dulu kita cari algoritma untuk mencari berapa pass nya*/
    for(int z=0;z<3;z++){
      waktu>>time_rapat[z];
      rapat_tembok>>ws;
        getline(rapat_tembok,text[z]); //untuk membaca baris dan spasi


    }
    cout<<"TANGGAL"<<"\t\t"<<"PERIHAL"<<endl;
    for (size_t i = 0; i < 3; i++) {

      cout<<time_rapat[i]<<"\t"<<text[i]<<endl;

    }

  break;}

  case 2:{
    int c(0);int p(0);
    string pengganti,dicari,penampungan[100];
    cout<<"Masukkan tanggal yang ingin diganti :";cin>>dicari; cout<<endl;
    cout<<"Masukkan tanggal yang ingin diganti (format : hari/bulan/tahun) :";cin>>pengganti;
    fstream temp("temp.txt",ios::app|ios::out|ios::in);//sewaktu-waktu ada perubahan jadwal
/*mekanisme penampungan sementara*/
while (waktu>>penampungan[p]) {
if(penampungan[p]==dicari){penampungan[p]=pengganti;}
temp<<penampungan[p]<<endl;
  p++;
}
 remove("time.txt");
 rename("temp.txt","time.txt");

    break;}
}

}

/*feedback pelanggan*/
void feeder_mode_ceo() {
  system("clear");
string pesan,dari;
  /* fstream */
fstream feedback_data("feedback.txt",ios::app|ios::in|ios::out); //file ini bisa diakses 2 jabatan : ceo dan marketing
cout<<"Keluhan Dari "<<"\t"<<"Isi Keluhan"<<endl;
while (feedback_data>>dari>>pesan) {

getline(feedback_data,pesan);

cout<<dari<<"\t"<<pesan<<endl;
}


}

/*data Inventaris*/
void barang_perusahaan() {
  string data,barang;
  int x(0);
fstream barang_data("inventaris.txt",ios::app|ios::in|ios::out);
cout<<"Nama Barang"<<"\t"<<"Ruangan"<<"\t\t"<<"Kondisi"<<endl;
while (barang_data>>barang>>data) {

  getline(barang_data,data); //mungkin ada ruang kosong makanya jadi kacau sehingga kita mendeklarasikan lagi
barang_data>>ws;
getline(barang_data,barang);
  cout<<barang<<endl;
x++;
}
}

void Manajemen_ceo(){
int indeks(0),pilihan;
system("clear");

string message[]={"1.Rapat","2.Feedback ","3.Data Inventaris Perusahaan"};
do {
  /* code */
  cout<<message[indeks]<<endl;
  indeks++;


  }
 while(indeks!=3);
 cout<<"Pilih Pilihan :";cin>>pilihan;
 switch (pilihan) {
   case 1:rapat();break; //100%
   case 2:feeder_mode_ceo();break;//100%
   case 3:barang_perusahaan();break;
 }

}
void Struktur_organisasi(){
fstream data("struktur.txt",ios::in|ios::out|ios::app);
string all_pick[20];
int all_random[20];
int x(0);
cout<<" Nama "<<"\t\t\t"<<"JABATAN"<<endl;
while (data>>all_pick[x]) {

  getline(data,all_pick[x]);
  cout<<all_pick[x]<<endl;
x++;
}


}


void bonus_gaji(int &gaji,int jam)
{
gaji=gaji*jam;

}

void bonus_gaji_helpdesk(int &gaji_1,int waktu )
{
gaji_1=gaji_1*waktu;

}


/*PROSEDUR BERANTAI CEO*/
void Showmenu_gaji(){
int x(0),menu;
string message[]={"1.Marketing","2.Helpdesk"};
string mes_umum[]={"1.Data Gaji Pegawai","2.Ubah Gaji","3.Bonus"};

cout<<endl;
while(x!=2){

  cout<<message[x]<<endl;
  x++;
}
cout<<"Pilih menu :";cin>>menu;
/*nested switch*/
switch (menu) {
  /*marketing */
  case 1:{
    int menu;
    for (size_t i = 0; i < 3; i++) {
cout<<mes_umum[i]<<endl;
}
cout<<"Pilih menu : ";
cin>>menu;
switch (menu) {
  case 1:show_data_gaji_marketing();break;
  case 2:{
    show_data_gaji_marketing();
int induk,gaji;
cout<<"Masukkan Nomor induk pegawai gaji yang ingi dirubah\n";
cin>>induk;
cout<<"Masukkan Nominal Gaji yang ingin diubah :";
cin>>gaji;
ubah_gaji_marketing(gaji,induk);
break;}
  case 3:{
int bonus_gaji_tambahan ;

/*fill here...*/
int x,jam,indeks,gaji[5],z(0);
fstream file("gaji_marketing.txt",ios::in|ios::out|ios::app);
cout<<"Masukkan NIP(Nomor induk pegawai) :";
cin>>x;
indeks=(x-2000)-1;
cout<<"Masukkan Jumlah Jam Lembur :";
cin>>marketingemploy[indeks].jam;
jam=marketingemploy[indeks].jam;/*PATCH*/
/*algoritma mengambil gaji dan di panggil melalui indeks*/
for(int x=0;x<3;x++){
file>>gaji[x];
}

bonus_gaji_tambahan=gaji[indeks];/*PATCH*/
bonus_gaji(bonus_gaji_tambahan,jam); /*PROSEDUR, MAS*/


cout<<endl<<"Bonus gaji NIP "<<x<<"  Adalah : "<<bonus_gaji_tambahan<<endl;
    break;}
}
  }
  break;

/*Helpdesk*/
  case 2:{int menu;
    for (size_t i = 0; i < 3; i++) {
cout<<mes_umum[i]<<endl;
}
cout<<"Pilih menu : ";
cin>>menu;
switch (menu) {
  case 1:show_data_gaji_helpdesk();break;/*CLEAR!!!*/
  case 2:{/*CLEAR!!!*/
    int x, gaji;
    show_data_gaji_helpdesk();
    cout<<"Masukkan nomor induk pegawai gaji yang ingin diubah\n";
cin>>x;
cout<<"Masukkan jumlah nominal gaji yang diubah : \n";cin>>gaji;
ubah_gaji_helpdesk(gaji,x);
  break;
}


  case 3:{
    int x,jam,indeks,gaji[5],z(0),bonus_gaji_tambahan;
fstream file("gaji_helpdesk.txt",ios::in|ios::out|ios::app);
    cout<<"Masukkan NIP(Nomor induk pegawai) :";
cin>>x;
indeks=(x-3000)-1;
cout<<"Masukkan Jumlah Jam Lembur :";
cin>>pegawai[indeks].jam;

jam=pegawai[indeks].jam;/*PATCH*/
/*algoritma mengambil gaji dan di panggil melalui indeks*/
for(int x=0;x<3;x++){
  file>>gaji[x];
}

bonus_gaji_tambahan=gaji[indeks];
cout<<bonus_gaji_tambahan;
bonus_gaji_helpdesk(bonus_gaji_tambahan,jam); /*PATCH*/
cout<<endl<<"Bonus gaji NIP "<<x<<"  Adalah : "<<bonus_gaji_tambahan;
    break;}
}

  }
  break;
}


}



void menu_ceo(){

  cout<<"AKSES FITUR : \n";
string menu[]={"1.Pengaturan Gaji Divisi ","2.Manajemen","3.Laporan Keuangan","4.Struktur Organisasi","5.Exit"};
int x(0),pilih;
do {
cout<<menu[x]<<endl;
x++;
} while(x!=5);
cin>>pilih;
switch (pilih) {
  case  1 :Showmenu_gaji();break; //100%!
  case  2 :Manajemen_ceo();break; //TUNTAS!
  case  3 :get_laporan();break; //belum tuntas
  case  4 :Struktur_organisasi();break; //TUNTAS(gak ada no induk nya :V)
  case  5 :cout<<"Good Bye !";exit_program(0);break; //TUNTAS
}
cout<<endl;
}

void rapat_modepegawai(){
  system("clear");

  string text[100],time_rapat[100];
  // string mess[]={"1.Lihat jadwal meeting","2.Ubah jadwal"};
    /*fstream*/
    fstream rapat_tembok("meeting.txt",ios::app|ios::in|ios::out);
    fstream waktu("time.txt",ios::app|ios::out|ios::in);
  for(int z=0;z<3;z++){
    waktu>>time_rapat[z];
    rapat_tembok>>ws;
      getline(rapat_tembok,text[z]); //untuk membaca baris dan spasi


  }
  cout<<"TANGGAL"<<"\t\t"<<"PERIHAL"<<endl;
  for (size_t i = 0; i < 3; i++) {

    cout<<time_rapat[i]<<"\t"<<text[i]<<endl;

  }
}
void menu_marketing() {
int x(0),pilihan;
string menu[]={" 1.Laporan Keuangan"," 2.Info Meeting "," 3.Exit "," Masukkan Pilihan : ","\0"};
while (menu[x]!="\0") {
  cout<<menu[x]<<endl;
  x++;
}

cin>>pilihan;
switch (pilihan) {
  case 1:laporan_keuangan_marketing();menu_marketing();break;//DONE
  case 2:rapat_modepegawai();menu_marketing();break; //sudah pre installed
  case 3:exit_program(0);break;
}

}

void tambah_laporan_keluhan(){
  feeder_mode_ceo();
fstream Laporan("feedback.txt",ios::app|ios::in|ios::out);
string instansi,perihal,perihal2;
string spasi=" ";
cout<<"Masukkan Kode Instansi(Pelanggan/Marketing/Helpdesk) : ";cin>>instansi;
cout<<"\nMasukkan Permasalahan :";cin>>perihal>>perihal2; //menghindari data tidak terbaca

Laporan<<instansi<<"\t\t"<<"_"<<spasi<<perihal<<spasi<<perihal2<<endl;
feeder_mode_ceo();

}

void menu_helpdesk() {
int pilihan,x(0);

string menu[]={"1.Laporan Keluhan/Saran "," 2.Info Meeting "," 3.Exit "," Masukkan Pilihan : ","\0"};
while (menu[x]!="\0") {
  cout << menu[x]<<endl;
  x++;
}
cin>>pilihan;
  switch (pilihan) {
    case 1:tambah_laporan_keluhan();menu_helpdesk();break;
    case 2:{rapat_modepegawai();menu_helpdesk();break;}
case 3:exit_program(0);break;
  }

}

/*fitur ini udah bener JANGAN DI OTAK-ATIK*/
int fitur_basic(int l){

  if(l>=1000&&l<=1003){
menu_ceo();


  }
  if(l>=2000&&l<=2003){
    menu_marketing();
  }
  if(l>=3000&&l<=3003){
menu_helpdesk();//belum ada fiturnya
}


}



#endif
