//reading from a file and displaying its content

#include<stdio.h>
#include<sys/types.h>
#include<sys/fcntl.h>
#include<sys/stat.h>
#include<sys/unistd.h>
#include<string.h>
int main(){
 int sz;
 char C[100];
 int fd=open("JNTU.txt",O_RDONLY);
 if(fd>0){

 sz=read(fd,C,17);
 C[sz]='\0';
 printf("called read(%d,C,17) it reads 17 bytes into buffer \"%s\"",fd,C);
 close(fd);
 }
 return 0;
}
