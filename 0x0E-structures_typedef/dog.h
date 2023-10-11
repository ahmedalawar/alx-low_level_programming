#ifndef dog_h
#define dog_h

/**
*struct dog - dog specifications
*@name: first argument take dog name
*@age: second arg take dog age
*@owner: third argument take owner
*
*Describtion: long for dogs
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

