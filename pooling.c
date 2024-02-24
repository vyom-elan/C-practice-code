#include <stdio.h>
int buf_size(int f_map, int k_size, int channel_num)
{
    int buf_sz;
    buf_sz=k_size*k_size*channel_num;

}

int main()
{
    const int rows = 8;
    const int cols = 8;
    int f_map[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            f_map[i][j] = rand() % 100; //for randomizing sequence between 0 and 99
        }
    }
    printf("The 8x8 input feature map is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", f_map[i][j]);
        }   
        printf("\n");
    }
    return 0;
}
