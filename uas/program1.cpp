#include<iostream>
using namespace std;
int main(){
    string nama;
    int NIM;
    cout<<"Nama saya : ";
    getline(cin,nama);
    cout<<"NIM saya : ";
    cin>>NIM;
    cout<<"Memory Alokasi String : "<<sizeof(string)<<endl;
    cout<<"Alamat Memory Nama : "<<&nama<<endl;
    cout<<"Alamat Memory NIM : "<<&NIM<<endl;
    return 0;
}