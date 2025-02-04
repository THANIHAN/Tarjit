#include <stdio.h>
# include <string.h>
int starts_with(const char *str, const char *sub);
int main () {
    printf("%d\n", starts_with("aahahaha", "aah"));
    return 0;
}

int starts_with(const char *str, const char *sub){
    for(int i= 0; i<strlen(str); i++){
        if (str[i] == sub[i]);
        return 1;
    }
}
