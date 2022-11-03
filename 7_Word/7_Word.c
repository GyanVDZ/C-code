#include <stdio.h>
#include <string.h>

/*
Student: Boyan Lowies
Studynumber: 5845750
Assignment number: 7
*/

int check_string(char string[], char test[]){
    char sub[1024] = "\0";                                  /*init vars*/
    int lenc = strlen(test), lent = strlen(string), x,y, ret =0;
    for(x=0; (x+lenc-1)<lent; x++){
        for(y=0; y<lenc; y++){
            sub[y] = string[x+y];                           /*take as many letters from the word and put them into a substring*/
        }
        if(strcmp(sub, test) == 0){                         /*check if substing is arg and add 1 if so*/
            ret++;
        }
    }
    return(ret);                                            /*return arg count in word*/
}



int main(int argc, char* argv[]){
    char string[1024] = "\0";                               /*init vars*/
    int count =0;
    
    if(argc == 1){
        printf("Please specify a program argument.\n");     /*check for argument*/
        return 0;
    }
    
    while(1){
        scanf("%s", string);                                /*get word*/
        if(strcmp("#EOF", string)==0){                      /*check for EOF*/
            break;
        }
        count += check_string(string, argv[1]);             /*Check if arg is in word*/
    }
    
    printf("%d\n", count);                                  /*print total*/
    return 0;     
}
