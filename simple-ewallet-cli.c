#include <stdio.h>

int main()
{
    //di bawah ini adalah beberapa deklarasi variabel yang digunakan di program ini
    int saldo;
    int nominal;
    int transaksi;
    char tujuantf[10];
    int katasandi;
    int tujuan;
    int lagigaktu;
    int lagigaktf;
    char namausr[50];
    saldo = 100000; //ini adalah permisalan saldo yang dimiliki

    printf("Sebelum lanjut, isi nama kamu dulu yuk! (satu kata)\n");
    scanf("%s", &namausr);
    printf("Yeayy, nama berhasil disimpan..\n");

    //perulangan transaksi
    do{

        printf("\n========== Hai %s", namausr);
        printf(" , Selamat Datang di Anything 4 U Pay =========="); // untuk membuat header
        //fungsi ini untuk meningkatkan user experience
        printf("\nHari ini mau transaksi apa nih?\n");
        printf("Uang kamu sekarang:: Rp%d\n", saldo);
        printf("\n");
        //fungsi ini untuk menampilkan tawaran piihan transaksi
        printf("Pilihan Transaksi\n");
        printf("1. Top Up\n");
        printf("2. Transfer\n");
        printf("3. Selesai\n");
        printf("\nPilihan kamu : \n");
        scanf("%d", &transaksi);

        //pemilihan menggunakan switch dan program yang terjadi sesuai pilihan yang diinginkan user
        switch (transaksi) {
            case 1:
                printf("\n===+ Top Up +===\n" );
            do {
                printf("Masukkan nominalnya yaa : \n");
                scanf("%d", &nominal);
                saldo = saldo + nominal; //sistem bekerja dengan menambahkan saldo terkini dengan nominal yang dimasukkan
                printf("Top Up berhasil nih!\n");
                printf("Uang kamu jadi Rp %d\n", saldo);
                printf("Mau Top Up lagi?\n");
                printf("1. Ya\n");
                printf("2. Tidak\n");
                printf("Jawaban kamu :\n");
                scanf("%d", &lagigaktu);
            }while (lagigaktu !=2 ); //penutup loop, dimana angka 2 sebagai penanda bahwa program akan diberhentikan bila user memilih pilihan ke-2
            break;
            case 2:
                printf("\n===- Transfer -===\n");
            do {
                printf("Transfer ke siapa nih?\n");
                scanf("%s", &tujuantf);
                printf("Masukin nominalnya yaa : \n");
                scanf("%d", &nominal);
            if (saldo >= nominal)
            {
            saldo = saldo - nominal; //sistem bekerja dengan mengurangi saldo terkini dengan nominal yang dimasukkan

            printf("Uangnya berhasil dikirim ke %s\n", tujuantf);
            }
            else
            {
            printf("Waduh, maaf saldo kamu gak cukup <_>\n");
            }

            printf("Transfer berhasil nih!\n");
            printf("Mau Transfer lagi?\n");
            printf("1. Ya\n");
            printf("2. Tidak\n");
            printf("Pilihan kamu : \n");
            scanf("%d", &lagigaktf);
         }while (lagigaktf != 2); //penutup loop, dimana angka 2 sebagai penanda bahwa program akan diberhentikan bila user memilih pilihan ke-2
            break;
            case 3 :
                printf("Makasih yaa udah Transaksi di Anything 4U Pay");
                break;
            default:
                printf("Waduh, gak ada dalam pilihan nih :(\n");
                break;
            }

            printf("\n");
    //penutup loop, dimana angka 3 sebagai penanda bahwa program akan diberhentikan bila user memilih pilihan ke-3
}   while (transaksi != 3);
        return 0;
}
