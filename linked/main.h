#ifndef _MAIN_H
#define _MAIN_H
#include <stdlib.h>
#include <errno.h>
#include <wait.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
typedef struct path
{
	char *str;
	struct path *next;
}path;
path *token(char *path);
void arg(char *env[]);
void creat_list(char *str, struct path **head);
void print_listint(const path *h);
void _strcat(path *head, char *command);
#endif
