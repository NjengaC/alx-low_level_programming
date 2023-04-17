#ifndef DOG_H
#define DOG_H

/**
 * struct dog - details of a dog
 * @name: name of the dog member
 * @age: dogs age member
 * @owner: owner name member
 *
 * Description: Longer desccription
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
