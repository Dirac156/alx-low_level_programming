#include "dog.h"
#include <stddef.h>
/**
  *print_dog - a function that print a Structure
  *@d : our Structure
  */

void print_dog(struct dog *d)
{
if (d != NULL)
{
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\nAge: %f\nOwner: %s\n",
(*d).name != NULL ? d->name : "nil",
(*d).age,
(*d).owner != NULL ? d->owner : "nill");
}
}
