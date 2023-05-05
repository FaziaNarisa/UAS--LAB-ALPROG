#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char judul[50];
    char pengarang[50];
    char penerbit[50];
    int tahun;
}
data;
data perpus[50];
int tahun, x, i, pil,cuy,j, bil;
char jd[50];

void lihat(){
    int i;

    printf("===========================================================================================================\n");
    printf("||%-5s||%-30s||%-20s||%-25s||%-15s||\n", "No", "Judul Buku", "Nama Pengarang", "Penerbit", "Tahun Terbit");
    printf("-----------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i < x; i++){
        printf("||%-5d||%-30s||%-20s||%-25s||%-15d||\n", (i+1), perpus[i].judul, perpus[i].pengarang, perpus[i].penerbit, perpus[i].tahun);
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
    strcpy(perpus[x].judul, "Pulang Pergi");
    strcpy(perpus[x].pengarang, "Tere Liye");
    strcpy(perpus[x].penerbit, "Gramedia");
    perpus[x].tahun = 2021;
    perpus[x].status = 1;
    x++;
}

void input(){
    FILE*fp;
    fp=fopen("daftar buku .txt", "a");
    printf("\n===========================================================================================================\n");
    printf("||                                               Penambahan Buku                                         ||\n");
    printf("===========================================================================================================\n");
    printf("judul\t:");fflush(stdin); gets(perpus[x].judul);
    fprintf(fp,"judul %s\n", perpus[x].judul);
    printf("pengarang\t:");fflush(stdin); gets(perpus[x].pengarang);
    fprintf(fp,"pengarang %s\n", perpus[x].pengarang);
    printf("penerbit\t:");fflush(stdin); gets(perpus[x].penerbit);
    fprintf(fp,"penerbit %s\n", perpus[x].penerbit);
    printf("tahun terbit\t:");
    scanf("%d", &perpus[x].tahun);
    fprintf(fp,"tahun terbit %d\n", perpus[x].tahun);
    fclose(fp);
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
    do{
        printf("===========================================================================================================\n");
        printf("||                                          Program Peminjaman Buku                                      ||\n");
        printf("===========================================================================================================\n");
        printf("1.Menampilkan Data Buku\n");
        printf("2.Menambah Data Buku\n");
        printf("3.Mencari Buku\n);
        printf("4.Keluar\n");
        printf("\nPilihan: ");
        scanf("%d", &pil);
        switch(pil){
            case 1 :
                lihat();
                break;
            case 2 :
                input();
                break;
            case 3:
                cari();
                break;
            case 4:
                printf("Keluar");
                break;
        }
    }while(pil!=4);
}

