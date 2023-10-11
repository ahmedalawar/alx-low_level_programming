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
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

