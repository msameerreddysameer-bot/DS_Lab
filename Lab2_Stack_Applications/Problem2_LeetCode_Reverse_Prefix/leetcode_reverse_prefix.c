#include <stdio.h>
#include <string.h>

char* reversePrefix(char* word, char ch) {
    char* target = strchr(word, ch);
    if (target != NULL) {
        int left = 0;
        int right = target - word;

        while (left < right) {
            char temp = word[left];
            word[left] = word[right];
            word[right] = temp;
            left++;
            right--;
        }
    }
    return word;
}

int main() {
    char word1[] = "abcdefd";
    printf("Result 1: %s\n", reversePrefix(word1, 'd'));
    return 0;
}
