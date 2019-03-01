#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int pid = fork();
	if (pid == 0) 
		execl("sequential_min_max", "2", "3000", "5", NULL);
	return 0;
}