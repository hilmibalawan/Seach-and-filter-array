nilai = [60, 85, 40, 90, 75, 50, 95]
cari = 85 in nilai
if cari:
    print("Ada 85, Posisi index", nilai.index(85))
else:
    print("Tidak Ada")
filter=[x for x in nilai if x >= 75]
print("Hasil Filter(>=75): ", filter);
