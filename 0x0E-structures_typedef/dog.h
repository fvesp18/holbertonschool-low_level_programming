#ifndef DOG_H
#define DOG_H

/**
 * struct dog - holds info for dog.name, dog.age, and dog.owner
 * @name: name
 * @owner: owner
 * @age: age
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif