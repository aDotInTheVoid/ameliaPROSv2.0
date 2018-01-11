#include <stdio.h>

void printArray(int *array, int lenght){
    for(int i = 0; i < lenght; i++){
            printf("%d", array[i]);
    }
}

int main(int argc, char const *argv[]) {
    int array[3] = {1, 2, 3};
    printArray(array, 3);
    return 0;
}
