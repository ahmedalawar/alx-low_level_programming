#include <stdio.h>
#include "dog.h"
/**
*init_dog - function that initialize a variable of type struct dog
*@d: pointer indicate to struct
*@name: string hold name of dogs
*@age: float number hold age
*@owner: string that hold owner'sname
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age  = age;
	d->owner = owner;
}

