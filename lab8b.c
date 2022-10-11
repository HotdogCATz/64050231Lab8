//64050321

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
	pid_t pid = fork();
	if(pid == 0){
		printf("child spawned!!\n");
		while(1);
		printf("at normal case you should not see this line appear!\n");
		exit(0);
	}else{
		sleep(0);
		kill(pid, SIGINT);
	}
	printf("child has been killed! .. then how they parent??\n");
	return 0;
}
