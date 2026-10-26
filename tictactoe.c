#include <stdio.h>

char C[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

void tampilkanPapan() {
    printf("\n");
    for (int baris = 0; baris < 3; baris++) {
        printf(" %c | %c | %c \n",
               C[baris][0], C[baris][1], C[baris][2]);

        if (baris < 2) {
            printf("---+---+---\n");
        }
    }
    printf("\n");
}



int cekMenang() {
    for (int i = 0; i < 3; i++) {
        // Cek baris
        if (C[i][0] != ' ' &&
            C[i][0] == C[i][1] &&
            C[i][1] == C[i][2]) {
            return 1;
        }

        // Cek kolom
        if (C[0][i] != ' ' &&
            C[0][i] == C[1][i] &&
            C[1][i] == C[2][i]) {
            return 1;
        }
    }

    //diagonal utama
    if (C[0][0] != ' ' &&
        C[0][0] == C[1][1] &&
        C[1][1] == C[2][2]) {
        return 1;
    }

    //diagonal lainnya
    if (C[0][2] != ' ' &&
        C[0][2] == C[1][1] &&
        C[1][1] == C[2][0]) {
        return 1;
    }

    return 0;
}


int main() {
    int pilihan;
    char pemain = 'X';

    for (int giliran = 0; giliran < 9; giliran++) {
        tampilkanPapan();

        printf("Giliran pemain %c\n", pemain);
        printf("Pilih kotak (1-9): ");

        if (scanf("%d", &pilihan) != 1) {
            printf("Input harus berupa angka!\n");
            return 1;
        }

        if (pilihan < 1 || pilihan > 9) {
            printf("Pilihan harus antara 1 sampai 9!\n");
            giliran--;
            continue;
        }

        int baris = (pilihan - 1) / 3;
        int kolom = (pilihan - 1) % 3;

        if (C[baris][kolom] == 'X' ||
            C[baris][kolom] == 'O') {
            printf("Kotak sudah terisi! Pilih yang lain.\n");
            giliran--;
            continue;
        }

        C[baris][kolom] = pemain;

        if (cekMenang()) {
            tampilkanPapan();
            printf("Pemain %c MENANG!\n", pemain);
            return 0;
        }

        if (pemain == 'X') {
            pemain = 'O';
        } else {
            pemain = 'X';
        }
    }

    tampilkanPapan();
    printf("Permainan SERI!\n");

    return 0;
}
