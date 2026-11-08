const produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"
];
produk.includes("Keyboard");
if(produk.includes("Keyboard") == true){
    console.log("Ada kata keyboard");
}
else{
    console.log("Tidak Ada");
}
console.log(produk.filter(x=> x.length > 5));
