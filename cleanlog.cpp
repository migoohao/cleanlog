#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

const unsigned TOSECOUND = 10;

void cleanLog(unsigned hours);

int main(int argc, char const *argv[])
{
	/* code */
	if(2!=argc)
	{
		cout<<"[ERROR]:please start like that ./cleanlog [hours]\n";
		return 0;
	}
	unsigned hours=atoi(argv[1]);
	if(hours<=0||hours>48)
	{
		cout<<"[ERROR]:parameter error\n";
	}
	cleanLog(hours);
	return 0;
}

void cleanLog(unsigned hours)
{
	hours*=TOSECOUND;
	do
	{
		// system("cd /home/migoo/workspace/");
		system("rm /home/migoo/workspace/*.o");
		sleep(hours);
	}while(true);
}