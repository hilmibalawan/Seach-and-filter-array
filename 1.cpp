#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> nilai = {60, 85, 40, 90, 75, 50, 95};
    auto cari = find(nilai.begin(), nilai.end(), 85);
    int posisi = distance(nilai.begin(), cari);
    if(cari != nilai.end()){
        cout << "Angka 85" << " Ada di Index " << posisi;
    }
    else{
        cout << "Tidak Ditemukan";
    }
    vector<int> filter;
    copy_if(nilai.begin(), nilai.end(), back_inserter(filter), [](int x){
        return x >= 75;
    });
    cout << "Hasil Filter (>=75): ";
    for(int x : filter){
        cout << x << " ";
    }

}