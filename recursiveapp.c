#include <stdio.h>
#include <string.h>
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
void recursive_permutations(char *str, int start, int end) {
    if (start == end) {
        printf("%s\n", str);
    } else {
        for (int i = start; i <= end; i++) {
            swap(&str[start], &str[i]);
            recursive_permutations(str, start + 1, end);
            swap(&str[start], &str[i]); // Backtrack
        }
    }
}
void print_permutations_recursive(char *input_str) {
    int n = strlen(input_str);
    recursive_permutations(input_str, 0, n - 1);
}

int main() {
    char input_str[] = "abc";
    printf("Recursive Permutations:\n");
    print_permutations_recursive(input_str);
    return 0;
}
