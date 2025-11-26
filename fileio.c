#include "fileio.h"
#include <stdio.h>
#include <stdlib.h>
void saveTransactions(transaction *array, int size) {
    FILE *fp = fopen("transactions.dat", "wb");
    if (fp) {
        fwrite(array, sizeof(transaction), size, fp);
        fclose(fp);
    }
}
int loadTransactions(transaction **array, int *capacity) {
    FILE *fp = fopen("transactions.dat", "rb");
    if (!fp) return 0;
    fseek(fp, 0, SEEK_END);
    int size = ftell(fp) / sizeof(transaction);
    rewind(fp);
    *array = malloc(size * sizeof(transaction));
    fread(*array, sizeof(transaction), size, fp);
    *capacity = size > 0 ? size * 2 : 10;
    fclose(fp);
    return size;
}
