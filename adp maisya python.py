print ('--Maskapai Penerbangan Elang Cendana--')
print ('---------------------------------------')
print ('Formulir tiket pemesanan dibawah ini:')

print ('Tujuan Kota------harga')
print ('1.Aceh.       Rp.300.000')
print ('2.Bandung.    Rp.400.000')
print ('3.Bali.       Rp.600.000')
print ('4.Jogja.      Rp.500.000')


kode =input ("Kode Tujuan Penerbangan:")
tujuan =[]
harga =[]

if (kode== "1"):
    tujuan=("Aceh")
    harga =300.000
elif (kode=="2"):
     tujuan =("Bandung")
     harga =400.000
elif (kode =="3"):
     tujuan =("Bali")
     harga =600.000
elif (kode=="4"):
      tujuan=("Jogja")
      harga =500.000  
else :
      tujuan= ('tidak valid')
      
      
print ("Jenis Kelas Maskapai      Biaya   ")
print ("1. First Class         Rp.200.000")
print ("2. Bisnis Class        Rp.150.000")
print ("3. Ekonomi Class       Rp.100.000")  

kelas= input ("Jenis kelas :")    
jenis=[]
biaya=[]
if kelas =="1":
    jenis= ("First Class")
    biaya= 200.000
elif kelas =="2":
    jenis = ("Bisnis Class")
    biaya =150.000
elif kelas =="3":
    jenis = ("Ekonomi Class")
    biaya =100.000


diskon=[]
jumlahtiket=int (input("Jumlah Pembelian Tiket:"))
if jumlahtiket >=3:
    diskon=0.25
else :
    diskon=0   
total_biaya= (harga+biaya)*jumlahtiket 
total_diskon=(total_biaya*diskon)
total_bayar =(total_biaya-total_diskon )
print ("----------------------")
nama=input( 'Nama:')
umur=input('Umur:')
jenis_kelamin=input('Jenis Kelamin:')

print ("----------------------")
print ("Kode Tujuan :",kode)
print ("Kota Tujuan :",tujuan)
print ("Kode Kelas  :",kelas)
print ("Jenis kelas :",jenis)
print ("Jumlah Tiket:",jumlahtiket)
print ("----------------------")
print ("Total Biaya :",total_biaya)
print ("Total Diskon:",total_diskon)
print ("Total Bayar :",total_bayar)
   
    
    
    
    