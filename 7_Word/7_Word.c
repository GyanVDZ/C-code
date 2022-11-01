#include <stdio.h>
#include <string.h>

/*
Student: Boyan Lowies
Studynumber: 5845750
Assignment number: 7
*/

int check_string(char string[], char test[]){
    char sub[1024] = "\0";
    int lenc = strlen(test), lent = strlen(string), x,y, ret =0;
    for(x=0; (x+lenc-1)<lent; x++){
        for(y=0; y<lenc; y++){
            sub[y] = string[x+y];
        }
        if(strcmp(sub, test) == 0){
            ret++;
        }
    }
    return(ret);
}



int main(int argc, char* argv[]){
    char string[1024] = "\0";
    int count =0;
    
    if(argc == 1){
        printf("Please specify a program argument.\n");
        return 0;
    }
    
    while(1){
        scanf("%s", string);
        if(strcmp("#EOF", string)==0){
            break;
        }
        count += check_string(string, argv[1]);
    }
    
    printf("%d\n", count);
    return 0;     
}
