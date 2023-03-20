#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - return length of string parameter
 * @s: string parameter
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;
	int i;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}

/**
 * _strcpy - copies one string into another
 * @dest: buffer parameter
 * @src: string parmeter
 * Return: pointer to buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: pointer to newly created dog_t, NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;

	ptr_dog = malloc(sizeof(dog_t));
	if (ptr_dog == NULL)
		return (NULL);
	ptr_dog->name = malloc(_strlen(name) + 1);
	if (ptr_dog->name == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}
	ptr_dog->owner = malloc(_strlen(owner) + 1);
	if (ptr_dog->owner == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}

	_strcpy(ptr_dog->name, name);
	_strcpy(ptr_dog->owner, owner);
	ptr_dog->age = age;

	return (ptr_dog);
}
