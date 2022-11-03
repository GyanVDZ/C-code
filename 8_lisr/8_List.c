#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Student: Boyan Lowies
Studynumber: 5845750
Assignment number: 8
*/

struct members{																	/*define struct and its items*/
    char name[31];
    char type;
    int age;
    struct members* next;
};


int main(void){
    FILE* ptr;
    char namef[31], typef;														/*open file and define vars*/
    int agef;
    float agea=0, ageb=0, counta =0, countb=0;

    struct members* head;
    struct members* new;														/*define struct entries for list*/
    struct members* seek;

    ptr = fopen("members", "r");
    if (NULL == ptr) {															/*check if file can be read and say so if it doesnt*/
        printf("Cannot open 'members'\n");
		return 0;
    }
    
    head = NULL;

    while(fscanf(ptr, "%s %c %d", namef, &typef, &agef)>=3){					/*loop until file is completely read*/
        
        new = malloc(sizeof(struct members));									/*allocate memory for struct*/
        
        strcpy(new -> name, namef);												/*set new struct vars*/
        new -> type = typef;
        new -> age = agef;
        new -> next = NULL;
        
        if(head == NULL || strcmp(head -> name, new -> name) > 0){				/*check if entry should become head*/
            new -> next = head;
            head = new;
        }
        else{
            seek = head;														/*find place in order where entry should belong*/
            while(seek -> next != NULL && strcmp(seek -> next -> name, new -> name)<0){
                seek = seek -> next;
            }
            new -> next = seek -> next;
            seek -> next = new;
        }
    }       


    while(head != NULL){
        
        printf("%s %c %d\n", head -> name, head -> type, head -> age);			/*print linked list*/
        
        if(head -> type == 'a'){												/*check if member is a or f and update values accordingly*/
            agea += head -> age;
            counta++;
        }
        else{
            ageb += head -> age;
            countb++;
        }
        
        head = head -> next;
    }
    
    printf("full member average age %.1f\n", ageb/countb);						/*take averageges of f and a and print them*/
    printf("associate member average age %.1f\n", agea/counta);

    fclose(ptr);																/*close file*/
    return 0;	
}