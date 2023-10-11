#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
*print_dog -  function that prints a struct dog
*@d: pointer that indicates to struct
*/
void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		putchar('\0');
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age == 0)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Owner (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
