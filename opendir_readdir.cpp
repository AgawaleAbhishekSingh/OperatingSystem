//implementation of opendir and readdir

#include<stdio.h>
#include<fcntl.h>
#include<dirent.h>
int main()
{
char d[10];
char c, op;
DIR *e;
struct dirent *sd;
printf("*menu*\n1.create dir\n2.remove dir\n 3.read dir\n enter ur choice");
scanf("%d",&op);
switch(op)
{
case 1: printf("enter dir name\n");
scanf("%s",&d);
c=mkdir('777');
if(c==1)
printf("dir is not created");
else
printf("dir is created");
break;
case 2: printf("enter dir name\n");
scanf("%s",&d); c=rmdir(d);
if(c==1)
printf("dir is not removed");
else printf("dir is removed");
break;
case 3: printf("enter dir name to open");
scanf("%s",&d);
e=opendir(d);
if(e==NULL)
printf("dir does not exist");
else
{
printf("dir exist\n");
while((sd=readdir(e))!=NULL)
printf("%s\t",sd->d_name);
}
closedir(e);
break;
}
}
