/*
 * ADD NAMES AND STUDY NUMBERS HERE
 * Assignment: 7_List
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct member {
	char name[32];
	char type;
	int age;
	struct member *next;
};

int main()
{
	struct member *head;
	FILE *fp;
	char name[32];
	char type;
	int age;
	struct member *new;
	
	
	/* Open file 'members' to file pointer fp.
	   Give error message and exit when not possible.
	   See slide 22 from lecture C8. */

	ADD CODE HERE

	head = NULL;
	while (fscanf(fp, "%s %c %d", name, &type, &age) >= 3) {
		/* Allocate and fill new element */
		new = malloc (sizeof (struct member));
		strcpy (new -> name, name);
		new -> type = type;
		new -> age = age;
		if (head == NULL || strcmp (head -> name, new -> name) > 0) {
			/* New element becomes the head of the list. 
			   See slide 9 from lecture C8. */

			ADD CODE HERE
		}
		else {
			/* New element does not become head. 
			   Search correct position in list,
			   such that correct ordering is obtained,
			   and insert element.
			   See slide 7 and 8 from lecture C8. */

			ADD CODE HERE
		}
	}

	
	/* Visit list elements and print element name, type and age. */

	ADD CODE HERE

	/* Visit list elements and incrementally compute for both type 'f' 
	   and type 'a' the total age and the number of elements. */

	ADD CODE HERE

	/* Compute and print average age for both type 'f' and type 'a'. */

	ADD CODE HERE

	return 0;
}
