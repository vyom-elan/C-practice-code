#include <stdio.h>
#include <stdlib.h>
int max_element(int kernelmatrix[3][3]) {
    int maxElement = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (kernelmatrix[i][j] > maxElement) {
                maxElement = kernelmatrix[i][j];  // Updating the maximum element
            }
        }
    }
    return maxElement;
}
void pool_operation(int f_map[8][8]) {
    int poolres[6][6];
    int kernelmatrix[3][3];
    int x = 0;
    int y = 0;
    for (int i = 0; i < 8; i += 1) {
        for (int j = 0; j < 8; j += 1) {
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    kernelmatrix[k][l] = f_map[i + k][j + l];
                }
            }
            poolres[x][y] = max_element(kernelmatrix);
            y++;
        }
        x++;
        y = 0;
    }

    printf("Pooling result:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d\t", poolres[i][j]);
        }
        printf("\n");
    }
}

int main() {
    const int rows = 8;
    const int cols = 8;
    int f_map[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            f_map[i][j] = rand() % 100; //random numbers between 0 and 100(mutually exclusive)
        }
    }
    printf("The 8x8 input feature map is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", f_map[i][j]);
        }
        printf("\n");
    }
    pool_operation(f_map);
    return 0;
}
