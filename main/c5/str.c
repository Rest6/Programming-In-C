#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _person {
        char* firstName;
        char* lastName;
        char* title;
        unsigned int age;
} Person;

typedef struct _alternatePerson {
	char* firstName;
	char* lastName;
	char* title;
	short age;
} AlternatePerson;

int main(void)
{
Person person;
AlternatePerson otherPerson;
printf("%d\n",sizeof(Person));
printf("%d\n",sizeof(AlternatePerson));

person.firstName = (char*)malloc(strlen("Emily")+1);
strcpy(person.firstName, "Emily");
person.lastName = "Swan";
person.age = 23;
person.title = "Test";

printf("Result: %s\n", person.firstName);
printf("Result: %s\n", person.lastName);
printf("Result: %i\n", person.age);
printf("Result: %s\n\n", person.title);

return 0;
}


