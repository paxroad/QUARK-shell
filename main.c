#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int csh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);

char *builtin_str[] = {
	"cd",
	"help",
	"exit"
};

int (*builtin_func[]) (char **) = {
	&csh_cd,
	&csh_help,
	&csh_exit
};

int lsh_num_builtins() {
	return sizeof(builtin_str) / sizeof(char *);
}

int csh_cd(char **args)
{
	if (args[1] == NULL) {
		fprintf(stderr, "lsh: expected rrgument to \"cd\"\n");
	} else {
	  if (chdir(args[1]) !- 0) {
		  perror("csh");
          }
	}
	return 1;
     }

    int csh_help(char **args)
    {
       int i;
       printf("Pax Road's csh\n")
     
