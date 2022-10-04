#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

void main() {
  pid_t pid, pid_hijo;
  pid=fork();
  if(pid==0){
  printf("Soy Miguel Garcia y mi pid es: %d\n", getpid());//pid del proceso hijo 
	printf("Mi padre es el proceso: %d\n", getppid());//pid del proceso padre  hijo
  	}else{
  	wait(NULL);printf("soy el padre y mi pid es: %d\n", getpid()); 
		printf("Mi padre es el proceso: %d\n", getppid());
  	}
   
	
  
  
  
  
  }
