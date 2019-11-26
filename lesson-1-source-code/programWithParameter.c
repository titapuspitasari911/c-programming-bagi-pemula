#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    system("clear");
    if( argc == 2 ) {
        printf("Satu parameter yang dimasukan: %s\n", argv[1]);
    }
    else if( argc > 2 ) {
        printf("Banyak parameter yang Anda masukan.\n");
    }
    else {
        printf("Tidak ada parameter yang dimasukan.\n");
    }
    return 0;
}

