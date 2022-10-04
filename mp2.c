#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

void main() {
  pid_t pid, pid_hijo;
  pid=fork();
  printf("Soy el proceso p1")
  if (pid==0){
  fork();
  	printf("Soy el proceso p2, el pid del hijo %d\n", getpid());//pid del proceso hijo
  	printf("el pid del padre %d\n", getppid());//pid del proceso padre
  	prinff("")
  	
  	
  }
 	else{
 	 fork();
  	printf("Soy el proceso p3,el pid del hijo %d\n", getpid());//pid del proceso hijo
  	printf("el pid del padre %d\n", getppid());//pid del proceso padre
  	prinff("")
  	}
	exit(0);
  
  
  
  
  
  }
