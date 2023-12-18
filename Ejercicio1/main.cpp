#include <cstdlib>
#include <cstdio>
#include <ctime>

int main() {
    srand(time(0));
    int random_number = rand();
    printf("Numero aleatorio: %d\n", random_number);

    return 0;
}



