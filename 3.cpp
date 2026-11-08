#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> suhu = {-3, 5, 0, -12, 8, 15, -1, 22};
    auto cari = find(suhu.begin(), suhu.end(), 0);
    if(cari != suhu.end()){
        cout << "suhu 0 ada";
    }
    else{
        cout << "Tidak Ditemukan";
    }
    vector<int> filter;
    copy_if(suhu.begin(), suhu.end(), back_inserter(filter), [](int x){
        return x > 0;
    });
    cout << " Hasil Filter: ";
    for(int x : filter){
        cout << x << " ";
    }

}