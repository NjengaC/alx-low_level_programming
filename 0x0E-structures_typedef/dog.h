#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure dog
 * @name: name of the dog
 * @age: dogs age
 * @owner: owners name
 *
 * Description: normal desccription
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

/*dog_t - a new dog typedefed*/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
