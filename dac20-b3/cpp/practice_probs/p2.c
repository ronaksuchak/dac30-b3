#include<stdio.h>
 int main()
 {
	 int n=4;
	 long sum=0;
     long count=0;
		for(long i=1;;i++)
		{
			sum=0;
			for(long j=1;j<i;j++)
			{
				if((i%j)==0)
					sum=sum+j;
				}
			if(sum==i)
			{  
				printf("%ld\n",i);
				++count;
			}

			if(count==n)
				break;
			
		}
	 
	return 0;
}
