#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
  *init_dog - a function that initialize a Structure
  *@d : our Structure
  *@name : the name we are going to attribute
  *@age : the age we are going to attribute
  *@owner : the owner name we are going to attribute
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
