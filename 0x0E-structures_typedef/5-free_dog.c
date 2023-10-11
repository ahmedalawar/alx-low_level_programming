#include <stdio.h>
#include "dog.h"
/**
*free_dog - function that frees dogs.
*@d: pointer of struct dog
*/

void free_dog(dog_t *d)
{
	free(d);
}
