#include <iostream>
#include<vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    vector<string> produk = {"Laptop", "Mouse", "Keyboard", "Monitor", "Headset"};
    auto cari = find(produk.begin(), produk.end(), "Keyboard");
    if(cari != produk.end()){
        cout << "Ada kata Keyboard";
    }
    else{
        cout << "Tidak Ditemukan";
    }
    vector<string> filter;
    copy_if(produk.begin(), produk.end(), back_inserter(filter), [](string x){
        return
        x.length() > 5;
    });
    cout << " Hasil Filter: ";
    for(string x : filter){
        cout << x << " ";
    }

}