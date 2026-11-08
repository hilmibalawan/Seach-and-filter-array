produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"]
if "Keyboard" in produk:
    print ("Ada Keyboard")
else:
    print("Tidak Ada")
filter = [x for x in produk if len(x) > 5]
print(filter)