//print characters using iteration

#include <stdio.h>
#include <string.h>

void iterative_permutations(char *str) {
    int n = strlen(str);
    int *count = (int *)calloc(n, sizeof(int));

    printf("%s\n", str);

    int i = 0;
    while (i < n) {
        if (count[i] < i) {
            if (i % 2 == 0) {
                swap(&str[0], &str[i]);
            } else {
                swap(&str[count[i]], &str[i]);
            }
            printf("%s\n", str);
            count[i]++;
            i = 0;
        } else {
            count[i] = 0;
            i++;
        }
    }

    free(count);
}

int main() {
    char input_str[] = "abc";
    printf("Iterative Permutations:\n");
    iterative_permutations(input_str);
    return 0;
}
