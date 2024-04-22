#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct villager{
	int age;
	char name[16];
	struct villager* left;
	struct villager* right;
} villager_t;

int main(int argc, char** argv){
	int num = 0;
	char name[16];

	villager_t* head = NULL;
	villager_t* tail = NULL;

	printf("Enter age: ");
	scanf("%d", );

	while(num != -1){
		printf("Enter name: ");
		scanf("%s", );



	}


	while(head != NULL){
		printf("%s is %d years old.\n", head->name, head->age);
	}


}
