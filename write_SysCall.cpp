// reading from one file and writing into the another file

#include<stdio.h>
#include<sys/types.h>
#include<sys/fcntl.h>
#include<sys/stat.h>
#include<sys/unistd.h>
#include<string.h>
int main(){
 int sz;
 char buff[1];
 int fr=open("JNTU.txt",O_RDONLY);
 int fw = open("write.txt", O_RDWR|O_CREAT, 0666);
 if(fr>0 && fw>0){
 while(read(fr, buff, 1)!=0){
 write(fw,buff,1);
 }
 close(fr);
 close(fw);
 printf("writing to files is completed");
 }
 else
 printf("Error opening files");
 return 0;
}
