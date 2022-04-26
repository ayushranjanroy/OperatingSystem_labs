1.	
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
fork();
fork();
fork();
printf("Welcome\n");
}


2.	#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void parentchild()
{
if(fork()==0)
printf("Hello From Child");
else
printf("Hello From parent");
}
int main()
{
parentchild();
}


3.	#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void parentchild()
{
int x=1;
if(fork()==0)
printf("Hello From Child has x=%d \n",++x);
else
printf("Hello From parent has x=%d \n",--x);
}
int main()
{
parentchild();
return(0);
}

4.	#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void forksleep()
{
int x=1;
if(fork()==0)
printf("Hello From Child has x=%d \n",++x);
else
printf("Hello From parent has x=%d \n",--x);
}
int main()
{
forksleep();
sleep(10);
forksleep();
return(0);
}


5.	#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
fork();
fork();
fork();
printf("Welcome\n PID = %d\n",getpid());
}


6.	Check if palindrome number
#include <stdio.h>
#include <unistd.h>
void palindrome()
{
int n,r,sum=0,temp;
printf("\nEnter the number= ");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
if(temp==sum)
printf("Palindrome number ");
else
printf("Not palindrome");
}
int main()
{
int pid;
pid = fork();
if(pid==0)
printf("I am the child process");
palindrome();
return 0;
}
