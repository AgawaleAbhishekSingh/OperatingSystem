// seek sytem call 

#include<stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
int main(){
int file=0;
char buffer[21];
int i=0;
if((file=open("JNTU.txt",O_RDONLY))<= -1)
 return 1;
int location = 0;
 while(i<3) {
 read(file, buffer,20);
 printf("the file contains 20 bytes data %s at location %d\n" , buffer, location);
 location = lseek(file, 20, SEEK_CUR);
 i+=1;}
 close(file);
 return 0;}
