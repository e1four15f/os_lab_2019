#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
 
int main ()
{
  pid_t child_pid;
  int child_status;
 
  child_pid = fork ();
  if (child_pid > 0) {
    fprintf(stderr,"parent process - %d\n", getpid());    
    sleep(30); 
    exit(0);
  }
  else if (child_pid == 0) {
    // child process will exit immediately
    fprintf(stderr,"child process - %d\n", getpid());
    exit(0);    
  }
  
  return 0;
}