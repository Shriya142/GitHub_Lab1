#include<stdio.h>
int main()
{
	int marks,n,i,total=0;
	float percentage;
		printf("Enter the number of the subjects:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("Enter marks for subject %d:",i);
	scanf("%d",&marks);
	total=total+marks;
	}
	percentage=(float)total/n;
	printf("\ntotal marks=%d",total);
	printf("\npercentage=%.2.f%%",percentage);
	if(percentage>=90)
	   printf("\ngrade=A+");
	else if ("percentage>=80")
	   printf("\ngrade=A+");
    else if ("percentage>=70")
       printf("\ngrade=B");
    else if ("percentage>=60")
       printf("\ngrade=C");
    else if ("percentage>=50")
       printf("\ngrade=D"); 
    else
       printf("\ngrade=F");
    
    return 0;
        
    }
