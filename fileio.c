#include "fileio.h"
#include <stdio.h>
#include <stdlib.h>
void saveTransactions(Transaction *array, int size) {
    FILE *fp = fopen("transactions.dat", "wb");
    if (fp) {
        fwrite(array, sizeof(Transaction), size, fp);
        fclose(fp);
    }
}
int loadTransactions(Transaction **array, int *capacity) {
    FILE *fp = fopen("transactions.dat", "rb");
    if (!fp) return 0;
    fseek(fp, 0, SEEK_END);
    int size = ftell(fp) / sizeof(Transaction);
    rewind(fp);
    *array = malloc(size * sizeof(Transaction));
    fread(*array, sizeof(Transaction), size, fp);
    *capacity = size > 0 ? size * 2 : 10;
    fclose(fp);
    return size;
}