#include <stdio.h>
#include <string.h>

int contains_char(const char *str, char c);

int exactly_one_occurrence(const char *str, char c) {
    int count = 0;

    if (str == NULL) {
        return 0;
    }
    for (int i = 0; i < strlen(str); i++)
    {
        if (c == str[i]) {
            count++;
        }
    }
    if (count == 1) {
        return 1;
    }
    return 0;
}

int main(){

    printf("%d\n", contains_char("abc", 'a'));


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