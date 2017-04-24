#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *flat_text(char **word, int n);

int main() {
    char *words[4]= {"Hello", "To", "234122", "Matam"};
    printf("\n%s\n", flat_text(words, 4));
    return 0;
}
char *flat_text(char **word, int n){
    int cur_len=strlen(word[0]);
    char *str=malloc(sizeof(char)*cur_len);
    strcpy(str, word[0]);
    for (int i=1 ; i<n ; i++) {
        cur_len+=strlen(word[i]);
        str= (char *) realloc (str, sizeof(char) * cur_len);
        strcpy(str+cur_len, word[i]);
    }
    return str;
}