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

int main(){
    do{
        printf("===========================================================================================================\n");
        printf("||                                          Program Peminjaman Buku                                      ||\n");
        printf("===========================================================================================================\n");
        printf("1.Menampilkan Data Buku\n");
        printf("2.Menamba Data Buku\n");
        printf("3.Keluar\n");
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
                printf("Keluar");
                break;
        }
    }while(pil!=3);
}

