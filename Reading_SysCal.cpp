//reading and writing into file

#include<stdio.h>
#include<sys/types.h>
#include<sys/fcntl.h>
#include<sys/stat.h>
#include<sys/unistd.h>
#include<string.h>
int main(){
 int sz;
 char buff[100];
 int fd=open("JNTU.txt",O_RDWR);
 if(fd>0){
 int size=strlen("new lines");
 sz=write(fd, "new lines", strlen("new lines"));
 printf("called write(%d, %s, %d)\n", fd, "new lines", size);
 sz=read(fd,buff,10);
 buff[sz]=0;
 printf("called read(%d,buff,10) it reads 10 bytes into buffer=\"%s\"",fd,buff);
 close(fd);
 }
 return 0;
}

