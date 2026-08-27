#include <stdio.h>
#include <unistd.h>

struct datos {
    char buffer[8];
    int secreto;
};

int main(void) {
    struct datos d;

    d.secreto = 12345678;

    printf("\n========== BUFFER OVERFLOW DEMO ==========\n");
    printf("Tamaño del buffer: %zu bytes\n", sizeof(d.buffer));
    printf("Valor inicial de secreto: %d\n", d.secreto);

    printf("\n----- ANTES DEL INPUT -----\n");
    printf("buffer : [        ]\n");
    printf("secreto: %d\n", d.secreto);

    printf("\nIntroduce el input:\n> ");
    fflush(stdout);

    read(STDIN_FILENO, d.buffer, 20);

    printf("\n----- DESPUÉS DEL INPUT -----\n");
    printf("buffer : %.8s\n", d.buffer);
    printf("secreto: %d\n", d.secreto);

    printf("\n==========================================\n\n");

    return 0;
}
