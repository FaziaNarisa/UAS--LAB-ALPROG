#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char judul[50];
    char pengarang[50];
    char penerbit[50];
    int tahun;
    int status;
}data;
data perpus[50];
int tahun, x, i, pil;

void listOneBook(int i){
    printf("||%-5d||%-30s||%-22s||%-25s||%-15d||", (i+1), perpus[i].judul, perpus[i].pengarang, perpus[i].penerbit, perpus[i].tahun, perpus[i].status);

    char status[25] = "Buku Tersedia";
    if(perpus[i].status == 0){
        strcpy(status, "Buku Tidak Tersedia");
    }
    printf("%-20s||\n", status);
}

void list(){
    if(x == 0){
        printf("Buku Masih dalam Peminjaman");
        return;
    }
    
    int i;
    printf("===================================================================================================================================\n");
    printf("||%-5s||%-30s||%-22s||%-25s||%-15s||%-20s||\n", "No", "Judul Buku", "Nama Pengarang", "Penerbit", "Tahun Terbit", "Status");
    printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i < x; i++){
        listOneBook(i);
    }
    printf("===================================================================================================================================\n\n");
}

void init(){
    strcpy(perpus[x].judul, "Filosofi Teras");
    strcpy(perpus[x].pengarang, "Henry Manampiring");
    strcpy(perpus[x].penerbit, "Kompas");
    perpus[x].tahun = 2018;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Laut Bercerita");
    strcpy(perpus[x].pengarang, "Leila Chudori");
    strcpy(perpus[x].penerbit, "KPG");
    perpus[x].tahun = 2017;
    perpus[x].status = 1;
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
    strcpy(perpus[x].judul, "Bad Gays: A Homosexual History");
    strcpy(perpus[x].pengarang, "Huw Lemmey, Ben Miller");
    strcpy(perpus[x].penerbit, "Verso");
    perpus[x].tahun = 2022;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "The Trackers");
    strcpy(perpus[x].pengarang, "Charles Frazier");
    strcpy(perpus[x].penerbit, "Ecco");
    perpus[x].tahun = 2023;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Catatan Najwa 2");
    strcpy(perpus[x].pengarang, "Najwa Shihab");
    strcpy(perpus[x].penerbit, "Literati Books");
    perpus[x].tahun = 2020;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Hidup di Atas Patahan");
    strcpy(perpus[x].pengarang, "Anwar Jimpe Rachman");
    strcpy(perpus[x].penerbit, "Diandra Primamitra");
    perpus[x].tahun = 2012;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Ekonomi Maritim Indonesia");
    strcpy(perpus[x].pengarang, "Ade Prasetia");
    strcpy(perpus[x].penerbit, "Diandra Primamitra");
    perpus[x].tahun = 2017;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Si Anak Kuat");
    strcpy(perpus[x].pengarang, "Tere Liye");
    strcpy(perpus[x].penerbit, "Gramedia");
    perpus[x].tahun = 2021;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Sayat-Sayat Sunyi");
    strcpy(perpus[x].pengarang, "S Gegge Mappangewa");
    strcpy(perpus[x].penerbit, "Indiva Media Kreasi");
    perpus[x].tahun = 2020;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Nasi Lemak Melankolis");
    strcpy(perpus[x].pengarang, "Saad Pamungkas");
    strcpy(perpus[x].penerbit, "Anak Hebat Indonesia");
    perpus[x].tahun = 2017;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Sosok di Balik Perang");
    strcpy(perpus[x].pengarang, "Ratna Rengganis");
    strcpy(perpus[x].penerbit, "Raih Asa Sukses");
    perpus[x].tahun = 2013;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Lukisan Hujan");
    strcpy(perpus[x].pengarang, "Sitta Karina");
    strcpy(perpus[x].penerbit, "Literati Books");
    perpus[x].tahun = 2015;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Percakapan Politik");
    strcpy(perpus[x].pengarang, "A. Sudiarja");
    strcpy(perpus[x].penerbit, "Kompas");
    perpus[x].tahun = 2020;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Huwaida Elmira");
    strcpy(perpus[x].pengarang, "Riviena Nidya W");
    strcpy(perpus[x].penerbit, "Diandra Primamitra");
    perpus[x].tahun = 2022;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Upaya Mencapai Klimaks");
    strcpy(perpus[x].pengarang, "Nuring Pangastuti");
    strcpy(perpus[x].penerbit, "Diandra Primamitra");
    perpus[x].tahun = 2020;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Marasi");
    strcpy(perpus[x].pengarang, "A.R. Rizal");
    strcpy(perpus[x].penerbit, "Angkasa");
    perpus[x].tahun = 2017;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Cerita Batik");
    strcpy(perpus[x].pengarang, "Iwet Ramadhan");
    strcpy(perpus[x].penerbit, "Literati Books");
    perpus[x].tahun = 2013;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Signora Davinci");
    strcpy(perpus[x].pengarang, "Robin Maxwell");
    strcpy(perpus[x].penerbit, "Literati Books");
    perpus[x].tahun = 2010;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Tastes Like War");
    strcpy(perpus[x].pengarang, "Grace M. Cho");
    strcpy(perpus[x].penerbit, "The Feminist Press");
    perpus[x].tahun = 2021;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Tuan Direktur");
    strcpy(perpus[x].pengarang, "Hamka");
    strcpy(perpus[x].penerbit, "Gema Insani");
    perpus[x].tahun = 2022;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Sagaras");
    strcpy(perpus[x].pengarang, "Tere Liye");
    strcpy(perpus[x].penerbit, "Sabak Grip");
    perpus[x].tahun = 2022;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Atalanta");
    strcpy(perpus[x].pengarang, "Jennifer Saint");
    strcpy(perpus[x].penerbit, "Flatiron Books");
    perpus[x].tahun = 2023;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Apology");
    strcpy(perpus[x].pengarang, "Chacha");
    strcpy(perpus[x].penerbit, "Aria Media Mandiri");
    perpus[x].tahun = 2019;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Mantappu Jiwa");
    strcpy(perpus[x].pengarang, "Jerome Polin Sijabat");
    strcpy(perpus[x].penerbit, "Gramedia Pustaka Utama");
    perpus[x].tahun = 2019;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Sabarilah");
    strcpy(perpus[x].pengarang, "Hamka");
    strcpy(perpus[x].penerbit, "Gema Insani");
    perpus[x].tahun = 2022;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Sagra");
    strcpy(perpus[x].pengarang, "Ida Ayu Oka");
    strcpy(perpus[x].penerbit, "Gramedia Pustaka Utama");
    perpus[x].tahun = 2023;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Anotasi Ekspetasi");
    strcpy(perpus[x].pengarang, "Dharmawati Chen");
    strcpy(perpus[x].penerbit, "Gramedia Pustaka Utama");
    perpus[x].tahun = 2019;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Future Skills");
    strcpy(perpus[x].pengarang, "Perttu Polonen");
    strcpy(perpus[x].penerbit, "Gemilang");
    perpus[x].tahun = 2023;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Self-Help");
    strcpy(perpus[x].pengarang, "Samuel Smiles");
    strcpy(perpus[x].penerbit, "Gemilang");
    perpus[x].tahun = 2020;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Ansdalusia");
    strcpy(perpus[x].pengarang, "Dr. Abdurrahman");
    strcpy(perpus[x].penerbit, "Alvabet");
    perpus[x].tahun = 2022;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Si Anak Kuat");
    strcpy(perpus[x].pengarang, "Tere Liye");
    strcpy(perpus[x].penerbit, "Gramedia");
    perpus[x].tahun = 2021;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Tanah Air");
    strcpy(perpus[x].pengarang, "Agus Noor");
    strcpy(perpus[x].penerbit, "Kompas");
    perpus[x].tahun = 2017;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Dream Big An Impact");
    strcpy(perpus[x].pengarang, "Nadia Permatasari");
    strcpy(perpus[x].penerbit, "Kompas");
    perpus[x].tahun = 2017;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Ibnu Khuldun");
    strcpy(perpus[x].pengarang, "A.R.Shoibul Ulum");
    strcpy(perpus[x].penerbit, "Anak Hebat Indonesia");
    perpus[x].tahun = 2023;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Feel Real");
    strcpy(perpus[x].pengarang, "Radin Azkia");
    strcpy(perpus[x].penerbit, "GagasMedia");
    perpus[x].tahun = 2017;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Obsesi");
    strcpy(perpus[x].pengarang, "Sutan Iwan");
    strcpy(perpus[x].penerbit, "Angkasa");
    perpus[x].tahun = 2012;
    perpus[x].status = 1;
    x++;
    strcpy(perpus[x].judul, "Membaca Ekspresif");
    strcpy(perpus[x].pengarang, "Prof.Dr. Henry Guntur");
    strcpy(perpus[x].penerbit, "Angkasa");
    perpus[x].tahun = 2011;
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
    printf("\nMasukkan judul buku: ");
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
    
    printf("\nMasukkan judul buku yang ingin dicari: ");
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

int getJumlahPeminjaman(){
    int jumlahPeminjaman = 1;
    for(i = 0; i < x; i++){
        if(perpus[i].status == 0){
            jumlahPeminjaman++;
        }
    }
    return jumlahPeminjaman;
}

void kembalikan(){
    if(x == 0){
        printf("Buku Masih dalam Peminjaman");
        return;
    }
    int jumlahPeminjaman = getJumlahPeminjaman();
    if(jumlahPeminjaman = 0){
        printf("Buku Masih dalam Peminjaman");
        return;
    }
    int i;

    printf("===================================================================================================================================\n");
    printf("||%-5s||%-30s||%-22s||%-25s||%-15s||%-20s||\n", "No", "Judul Buku", "Nama Pengarang", "Penerbit", "Tahun Terbit", "Status");
    printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
    for(i = 0; i < x; i++){
        listOneBook(i);
    }
    printf("===================================================================================================================================\n\n");

    int pilihBuku;

    do{
        printf("\nMasukkan nomor buku yang ingin dikembalikan: ");
        scanf("%d", &pilihBuku);

        pilihBuku--;
        if(perpus[pilihBuku].status != 0){
            printf("Harap memasukkan nomor buku yang dipinjam\n");
        }
    }while(perpus[pilihBuku].status != 0 &&(pilihBuku < 1 || pilihBuku > jumlahPeminjaman));

    char konfir;
    do{
        printf("Apakah Anda ingin mengembalikan buku dengan judul %s [Y/T]? ", perpus[pilihBuku].judul);
        fflush(stdin);
        konfir = (char) getchar();

        if(konfir == 'Y'){
            printf("Buku %s berhasil dikembalikan\n\n", perpus[pilihBuku].judul);
            perpus[pilihBuku].status = 1;
        }else{
            printf("Buku %s gagal dikembalikan\n\n", perpus[pilihBuku].judul);
        }
    }while(konfir != 'Y' && konfir != 'T');
}

int main(){

    init();
    do{
        printf("\n======================================================    Program Peminjaman Buku    ============================================\n\n");
        printf("1.Menampilkan Data Buku\n");
        printf("2.Mencari Buku\n");
        printf("3.Menambah Data Buku\n");
        printf("4.Meminjam Buku\n");
        printf("5.Mengembalikan Buku\n");
        printf("6.Keluar\n");
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
                kembalikan();
                break;
             case 6:
                printf("Keluar\n");
                break;
        }
    }while(pil!=6);
}
