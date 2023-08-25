#include <stdio.h>
#include <string.h>
#include <ctype.h>
typedef int( * compare_func_t)(char, char);
int is_palindrome(char * str, size_t len, compare_func_t compare) {
  for (size_t i = 0; i < len / 2; i++) {
    if (compare(str[i], str[len - i - 1]) != 0) {
      return 0;
    }
  }
  return 1;
}
int compare_chars(char a, char b) {
  if (a < b) {
    return -1;
  } else if (a > b) {
    return 1;
  } else {
    return 0;
  }
}
int compare_case_insensitive(char a, char b) {
  a = tolower(a);
  b = tolower(b);
  if (a < b) {
    return -1;
  } else if (a > b) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  char str1[] = "Hello";
  size_t len = strlen(str1);
  printf("String: %s", str1);
  if (is_palindrome(str1, len, compare_chars)) {
    printf("%s is a palindrome (case-sensitive).\n", str1);
  } else {
    printf("\n%s is not a palindrome (case-sensitive).\n", str1);
  }
  if (is_palindrome(str1, len, compare_case_insensitive)) {
    printf("%s is a palindrome (case-insensitive).\n", str1);
  } else {
    printf("%s is not a palindrome (case-insensitive).\n", str1);
  }

  char str2[] = "aba";
  len = strlen(str2);
  printf("\nString: %s", str2);
  if (is_palindrome(str2, len, compare_chars)) {
    printf("\n%s is a palindrome (case-sensitive).\n", str2);
  } else {
    printf("\n%s is not a palindrome (case-nsensitive).\n", str2);
  }
  if (is_palindrome(str2, len, compare_case_insensitive)) {
    printf("%s is a palindrome (case-insensitive).\n", str2);
  } else {
    printf("%s is not a palindrome (case-insensitive).\n", str2);
  }
  return 0;
}
