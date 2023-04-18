#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - frees memory
  * @d: pointer to struct
  * Return: nothing
  */
void free_dog(dog_t *d)
{
	free(dog->name);
	free(dog->owner);
	free(d);
}
