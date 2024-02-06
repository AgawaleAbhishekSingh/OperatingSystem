// implementation of stat function call

#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>//for file modules
#include<unistd.h>//for system calls
int main(){
int fd=open("JNTU.txt",O_RDWR|O_CREAT);
//pointer to stat structure
struct stat sfile;
stat("JNTU.txt",&sfile);
printf("file size is:%ld",sfile.st_size);
close(fd);
}
