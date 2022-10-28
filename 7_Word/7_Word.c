#include <stdio.h>
#include <string.h>

int check_string(char string[]){
    char test[] = "let";
    char hulp[strlen(test)];
    int lenc = strlen(test), lent = strlen(string), x,y, ret =0;
    for(x=0; (x+lenc-1)<lent; x++){
        for(y=0; y<lenc; y++){
            hulp[y] = string[x+y];
        }
        if(strcmp(hulp, test) == 0){
            ret++;
        }
    }
    return(ret);
}

int main(int argc, char **argv){
    char string[1024];
    int x, count =0;
    printf("%s", argv);

    while(1){
        scanf("%s", &string);
        count += check_string(string);
        if(strcmp("#EOF", string)==0){
            break;
        }
    }
    printf("%d", count);
    return 0;     
}