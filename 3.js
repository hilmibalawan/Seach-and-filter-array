const suhu =[-3, 5, 0, -12, 8, 15, -1, 22];
if(suhu.includes(0)==true){
    console.log("Ada suhu 0")
}
else{
    console.log("Tidak Ada");
}
console.log(suhu.filter(x=> x > 0));