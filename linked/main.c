#include "main.h"
void arg(char *env[])
{
	int i = 0;
        char *command = "/lds";
        path *head;
        char *var, *valu;
        while (env[i])
        {
                var = strtok(env[i], "=");
                valu = strtok(NULL, "=");

                if (strcmp(var, "PATH") == 0)
                        break;
                i++;
        }

        head = token(valu);
        _strcat(head, command);
}
int main(int argc, char *argv[], char *env[])
{
	arg(env);
/*	int i = 0;
	char *command = "/ls";
	path *head;
	char *var, *valu;
	while (env[i])
	{
		var = strtok(env[i], "=");
		valu = strtok(NULL, "=");
		
		if (strcmp(var, "PATH") == 0)
			break;
		i++;
	}
	
	head = token(valu);
	_strcat(head, command);
*/	
}
