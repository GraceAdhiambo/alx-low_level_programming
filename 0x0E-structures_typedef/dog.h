#ifndef DOG_H
#define DOG_H
/**
  * struct dog - dog structure
  * @name: member1
  * @age: member2
  * @owner: member3
  * Return: nothing
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
  * dog_t - typdef for struct dog
  */
typedef struct dog my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
