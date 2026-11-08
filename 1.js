const nilai = [60, 85, 40, 90, 75, 50, 95];

const cari = nilai.includes(85);
const posisi = nilai.indexOf(85);
if(cari > 0){
    console.log("Ada 85 Posisi: ", posisi);
}
else{
    console.log("Gak Ada");
}
const filter=nilai.filter(x => x >=75);
console.log("Hasil filter(>=75)", filter);