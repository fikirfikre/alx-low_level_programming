#ifndef DOG_H
#define DOC_H
/**
 * struct dog - a new type
 * @name: string
 * @age: float
 * @owner: string
 * Description: a new type that contain dog name, age and owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
