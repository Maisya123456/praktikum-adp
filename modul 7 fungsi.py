print ("Nama : Maisya Zahra Fitri")
print ("No.Bp: 2310431027")
print ("Shift: 4")
def hitung_kecepatan_akhir(v0, a, t):
    return v0 + a * t

def hitung_jarak(v0, a, t):
    return v0 * t + 0.5 * a * t**2

def tabel(data):
    print ("_"*77)
    print(f"{'|n ':<5}{'|Kecepatan Awal':<20}{'|Percepatan':<15}{'|Waktu':<10}{'|Kecepatan Akhir':<20}{'|Jarak|':<10}")
    print ("_"*77)
    
    for i, var in enumerate(data, start=1):
        v0, a, t, vt, jarak = var
        print(f"|{i:<4}|{v0:<19}|{a:<14}|{t:<9}|{vt:<19}| {jarak:<4}|")
        
def inputan():
    n = int(input("Masukkan jumlah inputan n : "))
    data = []
    print (" ")
    
    for i in range (n):
        v0 = float(input("Masukkan kecepatan awal (v0) : "))
        a = float(input("Masukkan percepatan (a) : "))
        t = float(input("Masukkan waktu (t) : "))
        print(" ")
        vt = hitung_kecepatan_akhir(v0, a, t)
        jarak = hitung_jarak(v0, a, t)
        data.append((v0, a, t, vt, jarak))
    
    tabel(data)
inputan()