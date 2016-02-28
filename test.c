#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
	int M=4000;
	int m=(1800+2*4000)/7;
	int i,j,sum1 = 0,sum = 0;
	int pp=(2.5*(m+M));
	float mew1 = (float)(m+M)/2;	
	float mew5 = 5*mew1;
	float mew9 = 9*mew1;
	float cf9 = mew5 - mew9;
	srand(time(NULL));
	printf("%f\n",cf9);	
	int x;
	for (j=0;j<100000; j++)
	{
		sum=0;
		for (i=0; i<9; i++)
		{
			x=rand()%101;
			float xx=(float)x/100;
			int ontime=m+xx*(M-m);
			sum=sum+ontime+(cf9/9);
		}
		//sum = sum + cf9;
		sum1=sum1+sum;
	}
	printf("Average delay for 9: %f\n",(float)sum1/100000);
	printf("%d\n",pp);
}
