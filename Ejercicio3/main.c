#include <stdio.h>
int main(){
    FILE *file = fopen ("file.txt", "r");
    if ( file == NULL ) {
        printf("Error: No se consiguio abrir el archivo\n");
        return 1;
    }
    fclose(file);
    return 0;

}
