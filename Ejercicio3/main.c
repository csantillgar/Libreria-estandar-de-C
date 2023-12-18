#include <stdio.h>
int main(){
    FILE *file = fopen ("file.txt", "w");
    if ( file == NULL ) {
        printf("Error: No se consiguio abrir para escritura\n");
        return 1;
    }
    fprintf(file, "Hola, profe\n");
    fclose(file);

    file = fopen("file.txt", "r");
    if ( file == NULL ) {
        printf("Error: No se consiguio abrir para lectura\n");
        return 1;
    }
    char buffer[50];
    fscanf(file, "%s\n", buffer);
    fclose(file);

    return 0;

}
