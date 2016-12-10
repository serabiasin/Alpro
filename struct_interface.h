#ifndef STRUCT_INTERFACE_H
#define STRUCT_INTERFACE_H

// #include <iostream>
// #include <string>
// #include "function.cpp"
using namespace std;

struct marketing   //marketing no induk 2000-2999
{
string nama;
int no;
int jam,gaji;
string meeting;


}marketingemploy[3];


struct helpdesk //no induk 3000-3999
{
int no_induk,gaji,jam;

string nama;
int indeks[100];


}pegawai[3];//kerjaan ini jika ada permasalahan (atau kita pake filestream ?)
//disediakan ruang kosong karena string menyimpan satu ruang untu \0



struct ceo
{

int gaji,tunjangan;
int nomor;
string nama_ceo;


};



#endif
