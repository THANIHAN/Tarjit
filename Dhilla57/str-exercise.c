#include <stdio.h>
#include <string.h>
int starts_with(const char *str, const char *sub);
int count = 0;
int main () {
    printf("%d\n", starts_with("aahahaha", "ah"));
    return 0;
}

int starts_with(const char *str, const char *sub){
    for(int i= 0; i<strlen(str); i++){
        if (str[i] == sub[i]){
            count = count+1;
            if(count == strlen(sub)){
                return 1;
            }
        }else{
            return 0;
        }
    }
}