#include <stdio.h>
#include <string.h>

void reverseWord(char* start, char* end) {
    // Reverse the characters between 'start' and 'end' in-place
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWords(char* sentence) {
    if (sentence == NULL || *sentence == '\0') {
        return;
    }

    int length = strlen(sentence);
    char* start = sentence;
    char* end = sentence;

    // Find the start and end of each word and reverse them
    while (*end != '\0') {
        if (*end == ' ') {
            reverseWord(start, end - 1);
            start = end + 1;  // Move to the start of the next word
        }
        end++;
    }

    // Reverse the last word
    reverseWord(start, end - 1);

    // Reverse the entire sentence to get the words in the correct order
    reverseWord(sentence, end - 1);
}

int main() {
    char sentence[] = "I work as an embedded software engineer for 3 years";

    reverseWords(sentence);

    printf("Reversed sentence: %s\n", sentence);

    return 0;
}
