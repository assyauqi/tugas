#include <stdio.h>
#include <string.h>

const float pajak_penjualan = 0.05;
#define diskon 0.10

int main()
{
    char namaMahasiswa[51];
    char judulBuku[101];
    int nomorISBN;
    float hargaBuku;
    int jumlahBukuTerjual;
    float hargaSebelumDiskon;
    float Diskon;
    float hargaSetelahDiskon;
    float pajakPenjualan;
    float hargaAkhir;
    float totalPenjualan;

    printf("Masukan nama mahasiswa: ");
    // scanf("%c", &namaMahasiswa);
    fgets(namaMahasiswa, 51, stdin);
    namaMahasiswa[strcspn(namaMahasiswa, "\n")] = '\0';

    printf("Masukan judul buku: ");
    scanf("%c", &judulBuku);

    fgets(judulBuku, 101, stdin);
    judulBuku[strcspn(judulBuku, "\n")] = '\0';

    printf("Masukan nomor ISBN buku: ");
    scanf("%d", &nomorISBN);

    printf("Masukan harga buku: ");
    scanf("%f", &hargaBuku);

    printf("Masukan jumlah buku yang terjual: ");
    scanf("%d", &jumlahBukuTerjual);

    // proses hitung harga

    hargaSebelumDiskon = (hargaBuku);
    Diskon = (hargaSebelumDiskon * diskon);
    hargaSetelahDiskon = (hargaSebelumDiskon - Diskon);
    pajakPenjualan = (hargaSetelahDiskon * pajak_penjualan);
    hargaAkhir = (hargaSetelahDiskon - pajakPenjualan);
    totalPenjualan = (hargaAkhir * jumlahBukuTerjual);

    // output hasil

    printf("Informasi Penjualan Buku Oleh : %c\n", namaMahasiswa);
    printf("Judul buku : %c\n", judulBuku);
    printf("Nomor ISBN : %d\n", nomorISBN);
    printf("Harga buku sebelum diskon : Rp %.2f\n", hargaSebelumDiskon);
    printf("Diskon (10%) : Rp %.2f \n", hargaSetelahDiskon);
    printf("Harga buku setelah diskon : Rp %.2f \n", hargaSetelahDiskon);
    printf("Pajak penjualan : Rp %.2f \n", pajakPenjualan);
    printf("Harga akhir per buku : Rp %.2f \n", hargaAkhir);
    printf("Total Penjualan (%d Buku) : Rp %.2f \n", jumlahBukuTerjual, totalPenjualan);

    return 0;
}
