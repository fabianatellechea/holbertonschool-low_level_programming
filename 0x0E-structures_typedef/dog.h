#ifndef STRUCTFILE
#define STRUCTFILE

/**
 * struct dog - struct dog
 * @name: char name of the dog
 * @age: floar age of the dog
 * @owner: char owner
 */
struct dog
{
	char * name;
	float age;
	char * owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
