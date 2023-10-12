#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog struct
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 *
 * Description: just a lonely dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
