#include <stdio.h>
#include <string.h>

int contains_char(const char *str, char c);

int main(){

    printf("%d", contains_char("abc", 'a'));

    return 0;
}

int contains_char(const char *str, char c){
    for (int i = 0; i < strlen(str); i++) {
        if (c == str[i]){
            return 1;
        }


    }
    return 0;
}