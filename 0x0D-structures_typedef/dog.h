#ifndef HOLBERTON_H
#define HOLBERTON_H
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
/**
  * struct dog - dog structure
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Description: dog structure with 3 members
  *
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* HOLBERTON_H */
