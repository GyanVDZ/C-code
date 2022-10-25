#include <stdio.h>
#include <string.h>

int check_string(char string[]){
    char test[] = "let";
    int lenc = strlen(test), lent = strlen(string), x,y;
    for(x=0; (x+lenc-1)<lent; x++){
        for(y=0; y<lenc; y++){
            printf("%c", string[x+y]);
        }
        printf("\n");
    }
    




}

int main(void){
    char string[1024];
    int x, count =0;

    while(1){
        scanf("%s", &string);
        count += check_string(string);
        printf("%d\n", count);
    }
    return 0;     
}