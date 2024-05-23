# Fungsi untuk menambah dan menyimpan data
def simpan_data(tgl_transaksi, ket_transaksi, jumlah, tipe):
    with open("data_keuangan.txt", "a") as file:
        file.write(f"{tgl_transaksi},{ket_transaksi},{jumlah},{tipe}\n")
    print("Data keuangan berhasil ditambahkan.")

# Fungsi untuk menghapus data sebelumnya
def hapus_data(tgl_transaksi,ket_transaksi,jumlah,tipe):
    with open("data_keuangan.txt", "r") as file:
        lines = file.readlines()
    with open("data_keuangan.txt", "w") as file:
        for line in lines:
            if line.split(",")[0] != tgl_transaksi:
                file.write(line)
    print("Data keuangan berhasil dihapus.")

# Fungsi untuk menampilkan seluruh data keuangan 
def tampilkan_data():
    with open("data_keuangan.txt", "r") as file:
        data = file.readlines()
    if data:
        print("Data Keuangan")
        for data in data:
            print(data.strip())
    else:
        print("Data keuangan pribadi.")

# Main program
while True :
    print("\n|--------------Menu--------------|:")
    print("1. Simpan data keuangan")
    print("2. Hapus data keuangan")
    print("3. Tampilkan semua data keuangan")
    print("4. Keluar")
    print (" ")
    pilihan = input("Pilih menu (1/2/3/4): ")

    if pilihan == "1":
        tgl_transaksi= input("Masukkan tanggal transaksi (format: DD-MM-YYYY): ")
        ket_transaksi= input("Masukkan keterangan transaksi: ")
        jumlah = input("Masukkan jumlah uang: ")
        tipe = input("Masukkan tipe(pemasukan/pengeluaran): ")
    
        simpan_data(tgl_transaksi, ket_transaksi,jumlah, tipe)
    
    elif pilihan == "2":
        tgl_transaksi = input("Masukkan tanggal transaksi yang dihapus (format: DD-MM-YYYY): ")
        ket_transaksi= input("Masukkan keterangan transaksi yang dihapus:")
        jumlah = input("Masukkan jumlah uang yang akan dihapus: ")
        tipe = input("Masukkan tipe(pemasukan/pengeluaran) yang dihapus: ")
        hapus_data(tgl_transaksi, ket_transaksi,jumlah, tipe)
    elif pilihan == "3":
        tampilkan_data()
    elif pilihan == "4":
        print("Terima kasih telah mengatur keuangan mu sendiri.")
        break
    else:
        print("Pilihan tidak valid. Silakan pilih menu yang tersedia.")