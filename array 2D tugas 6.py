barang =["tepung","gula","minyak","kopi","beras","telur"]
harga =[15000,10000,14000,5000,25000,3000]
stok =[6,8,12,14,5,20]

print ("----TOKO KELONTONG BUK INAH----")
print ("| Nama Barang |  Harga | Stok |")
for i in range (len (barang)):
    print (f"|{barang[i]:12} | {harga[i]:7}| {stok[i]:5}|")
    
hasil_kali =[]
for i in range (len(barang)):
    hasil_kali.append(harga[i]*stok[i])
print ("-------------------------------")
print ("|{:>12} |  {:>9}    |".format("Nama barang", "Untung"))
for i in range (len(barang)):
    print (f"|{barang[i]:12} | {hasil_kali[i]: 13} |")
        
maks=0
indeks=0
for i in range (len(hasil_kali)):
    if (maks < hasil_kali[i]):
        maks = hasil_kali[i]
        indeks =i
        
print ( "Nama barang dengan keuntungan terbesar  adalah {}".format(barang[indeks]))

min =0
data=i
for i in range (len(hasil_kali)):
    if (min > hasil_kali[i]):
        min = hasil_kali[i]
        data=i
        
print ("Nama barang dengan keuntungan terkecil  adalah {}".format (barang[data]))

total = sum(hasil_kali)
print (f"Total Keuntungan adalah Rp. {total}")