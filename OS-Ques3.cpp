#include<stdio.h>
#include<sys/sysinfo.h>
#include<stdlib.h>
#include<sys/utsname.h>
using namespace std;

int main()
{
	int p = 0 , q = 0;
	struct sysinfo un;
	p = sysinfo(&un);
	
	struct utsname s1;
	
	q = uname(&s1);

	
	if(p==0 && q==0)
	{
		printf("\n Kerner version : %s", s1.version);
	


		printf("\n Total RAM : %ld MB \n", (un.totalram));
		printf("\n Free RAM : %ld MB \n", (un.freeram));
		printf("\n Used RAM : %ld MB \n", (un.totalram-un.freeram));

	}
	
	else
	{
		printf("Error");
	}	
	
	return 0;
}



