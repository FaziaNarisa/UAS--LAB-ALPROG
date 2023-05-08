#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char judul[50];
    char pengarang[50];
    char penerbit[50];
    int tahun;
}data;
data perpus[50];
int tahun, x, i, pil,j, bil;
char jd[50];

void lihat(){
    int i;

    printf("===========================================================================================================\n");
    printf("||%-5s||%-30s||%-25s||%-30s||%-15s||\n", "No", "Judul Buku", "Nama Pengarang", "Penerbit", "Tahun Terbit");
    printf("-----------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i < x; i++){
        printf("||%-5d||%-30s||%-25s||%-30s||%-15d||\n", (i+1), perpus[i].judul, perpus[i].pengarang, perpus[i].penerbit, perpus[i].tahun);
    }
    printf("===========================================================================================================\n");
}

void init(){
    strcpy(perpus[x].judul, "Filosofi Teras");
    strcpy(perpus[x].pengarang, "Henry Manampiring");
    strcpy(perpus[x].penerbit, "Kompas");
    perpus[x].tahun = 2018;
    x++;
    strcpy(perpus[x].judul, "Laut Bercerita");
    strcpy(perpus[x].pengarang, "Leila Chudori");
    strcpy(perpus[x].penerbit, "KPG");
    perpus[x].tahun = 2017;
    x++;
    strcpy(perpus[x].judul, "Melati");
    strcpy(perpus[x].pengarang, "Chacha");
    strcpy(perpus[x].penerbit, "Simpel Media");
    perpus[x].tahun = 2020;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Pulang-Pergi");
    strcpy(perpus[x].pengarang, "Tere Liye");
    strcpy(perpus[x].penerbit, "Gramedia Pustaka Utama");
    perpus[x].tahun = 2021;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Guru Aini");
    strcpy(perpus[x].pengarang, "Andrea Hirata");
    strcpy(perpus[x].penerbit, "Bentang Pustaka");
    perpus[x].tahun = 2020;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Terusir");
    strcpy(perpus[x].pengarang, "Hamka");
    strcpy(perpus[x].penerbit, "Gema Insani");
    perpus[x].tahun = 2022;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Memoar Marla");
    strcpy(perpus[x].pengarang, "Safira Hapsari");
    strcpy(perpus[x].penerbit, "Elex Media Komputindo");
    perpus[x].tahun = 2019;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Blood Debts");
    strcpy(perpus[x].pengarang, "Terry J. Benton-Walker");
    strcpy(perpus[x].penerbit, "Tor Teen");
    perpus[x].tahun = 2023;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Konspirasi Alam Semesta");
    strcpy(perpus[x].pengarang, "Fiersa Besari");
    strcpy(perpus[x].penerbit, "MediaKita");
    perpus[x].tahun = 2017;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Galaksi");
    strcpy(perpus[x].pengarang, "Poppi Pertiwi");
    strcpy(perpus[x].penerbit, "Coconut Books");
    perpus[x].tahun = 2018;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Desiran Angin Laut");
    strcpy(perpus[x].pengarang, "Alnira");
    strcpy(perpus[x].penerbit, "Gramedia Widiasarana Indonesia");
    perpus[x].tahun = 2019;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "The Trackers");
    strcpy(perpus[x].pengarang, "Charles Frazier");
    strcpy(perpus[x].penerbit, "Ecco");
    perpus[x].tahun = 2023;
    perpus[x].status = 1;
    x++;
}

void pinjam(){
    if(x == 0){
        printf("Buku Masih dalam Peminjaman");
        return;
    }

    int pilihBuku;
    list();

    do{
        printf("\nMasukkan Nomor Buku: ");
        scanf("%d", &pilihBuku);
    }while(pilihBuku < 1 || pilihBuku > x);

    pilihBuku--;
    if(perpus[pilihBuku].status == 0){
        printf("Buku %s tidak tersedia untuk dipinjam\n", perpus[pilihBuku].judul);
        return;
    }
    char konfir;
    do{
        printf("Apakah Anda ingin meminjam Buku dengan judul %s [Y/T]? ", perpus[pilihBuku].judul);
        fflush(stdin);
        konfir = (char) getchar();

        if(konfir == 'Y'){
            printf("Buku %s berhasil dipinjam\n\n", perpus[pilihBuku].judul);
            perpus[pilihBuku].status = 0;
        }else{
            printf("Buku %s gagal dipinjam\n\n", perpus[pilihBuku].judul);
        }
    }while(konfir != 'Y' && konfir != 'T');
}

void input(){
    if(x >= 50){
        printf("Kuota buku sudah penuh!\n");
        return;
    }
    printf("Masukkan judul buku: ");
    fflush(stdin);
    fgets(perpus[x].judul, 50, stdin);
    perpus[x].judul[strcspn(perpus[x].judul, "\n")] = '\0';

    printf("Masukkan nama pengarang: ");
    fflush(stdin);
    fgets(perpus[x].pengarang, 50, stdin);
    perpus[x].pengarang[strcspn(perpus[x].pengarang, "\n")] = '\0';

    printf("Masukkan nama penerbit: ");
    fflush(stdin);
    fgets(perpus[x].penerbit, 50, stdin);
    perpus[x].penerbit[strcspn(perpus[x].penerbit, "\n")] = '\0';

    printf("Masukkan tahun terbit: ");
    scanf("%d", &perpus[x].tahun);
    perpus[x].status = 1;

    x++;
    printf("Buku berhasil ditambahkan ke perpustakaan.\n");
}

void cari(){
    char judul[50];
    int found = 0;
    
    printf("\n===========================================================================================================\n");
    printf("||                                               Mencari Buku                                            ||\n");
    printf("===========================================================================================================\n");
    
    printf("Masukkan judul buku yang ingin dicari: ");
    fflush(stdin); 
    fgets(judul, 50, stdin);
    judul[strcspn(judul, "\n")] = '\0';

    for(i=0; i<x; i++){
        if(strcmp(judul, perpus[i].judul)==0){
            printf("\nBuku dengan judul '%s' ditemukan di perpustakaan.\n", perpus[i].judul);
            printf("Nama Pengarang: %s\n", perpus[i].pengarang);
            printf("Penerbit: %s\n", perpus[i].penerbit);
            printf("Tahun Terbit: %d\n", perpus[i].tahun);
            if(perpus[i].status == 1){
                printf("Status: Buku Tersedia\n");
            } else {
                printf("Status: Buku Tidak Tersedia\n");
            }
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("\nBuku dengan judul '%s' tidak ditemukan di perpustakaan.\n", judul);
    }
}

int main(){

    init();
    do{
        printf("\n======================================================    Program Peminjaman Buku    ============================================\n\n");
        printf("1.Menampilkan Data Buku\n");
        printf("2.Mencari Buku\n");
        printf("3.Menambah Data Buku\n");
        printf("4.Meminjam Buku\n");
        printf("5.Keluar\n");
        printf("\nPilihan: ");
        scanf("%d", &pil);
        switch(pil){
            case 1 :
                list();
                break;
            case 2 :
                cari();
                break;
            case 3 :
                input();
                break;
             case 4:
                pinjam();
                break;
             case 5:
                printf("Keluar\n");
                break;
        }
    }while(pil!=5);
}
