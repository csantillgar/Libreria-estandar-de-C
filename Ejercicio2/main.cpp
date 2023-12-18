#include <stdio.h>
#include <cstring>

int main(){
    char str1[] = "Hola";
    char str2[] = "Hola";

    int comparison = strcmp(str1, str2);
    if (comparison==0) {
        printf("Las cadenas son exactamente iguales\n");
    }else {
        printf("Las cadenas son distintas\n");
    }

    return 0;
}