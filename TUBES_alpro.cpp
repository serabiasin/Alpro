#include <iostream>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include "struct_interface.h"
#include <fstream>
#include "function.cpp"
#include <string>
// using namespace std;



int main() {
fstream mydata,nomor;
mydata.open("data_pegawai.txt",ios::app|ios::in);
nomor.open("nomor_pegawai.txt",ios::app|ios::in); //disini nama seblum diacak-acak nomor_pegawai_marketing.txt
string password;

/*object ini bakal kepakai*/
 ceo anis;
anis.nama_ceo="Anis faturahman";
anis.nomor=1001;
ceo roro;
roro.nama_ceo="Trenggalek";
roro.nomor=1002;
ceo odesa;
odesa.nama_ceo="Zaky odesa";
odesa.nomor=1003;


marketingemploy[0].nama="budi lenggono";marketingemploy[0].no=2001;
marketingemploy[1].nama="Zaimul mujtahid";marketingemploy[1].no=2002;
marketingemploy[2].nama="lingling";marketingemploy[2].no=2003;

pegawai[0].nama="nurul";
pegawai[0].no_induk=3001;
pegawai[1].nama="junedi";pegawai[1].no_induk=3002;
pegawai[2].nama="bakso hidayat";pegawai[2].no_induk=3003;


int indukpegawai;

bool indikator(false);
/*Sudah clear*/
do {

cout<<"Masukkan no induk pegawai :";cin>>indukpegawai;

  password=getpass("Enter password: "); //pass nya nama orangnya

if(check(password,indukpegawai)==indukpegawai){

  if(indukpegawai==1001) {


  cout<<"Selamat datang bapak "<<anis.nama_ceo<<endl;
  indikator=true;// disini tadi false

}
  if(indukpegawai==1002){
    cout <<"Correct password!\n";
    cout<<"Selamat datang bapak "<<roro.nama_ceo<<endl;
    indikator=true;

  }
  if(indukpegawai==1003){
    cout<<"Correct password!\n";
    cout<<"Selamat datang bapak "<<odesa.nama_ceo<<endl;
    indikator=true;

  }
  if(indukpegawai==2001){  cout<<"Correct password!\n";
    cout<<"Selamat datang bapak "<<marketingemploy[0].nama<<endl;
    indikator=true;}
  if(indukpegawai==2002){  cout<<"Correct password!\n";
    cout<<"Selamat datang bapak "<<marketingemploy[1].nama<<endl;
    indikator=true;}
  if(indukpegawai==2003){  cout<<"Correct password!\n";
    cout<<"Selamat datang bapak "<<marketingemploy[2].nama<<endl;
    indikator=true;}
  if(indukpegawai==3001){cout<<"Correct password!\n";
    cout<<"Selamat datang bapak "<<pegawai[0].nama<<endl;
    indikator=true;}
  if(indukpegawai==3002){cout<<"Correct password!\n";
    cout<<"Selamat datang bapak "<<pegawai[1].nama<<endl;
    indikator=true;}
  if(indukpegawai==3003){cout<<"Correct password!\n";
    cout<<"Selamat datang bapak "<<pegawai[2].nama<<endl;
    indikator=true;}

}
else if(check(password,indukpegawai)!=indukpegawai) cout<<"DATA NOT FOUND"<<endl;
} while(indikator!=true);
basic:
fitur_basic(indukpegawai);
if(balik==0){
  cout<<"Good Bye !";
return 0;

}
else
goto basic;
}
