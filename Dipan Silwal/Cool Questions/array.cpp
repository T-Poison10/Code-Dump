#include <stdio.h>
int main()
{
	int temp,n,num[20],i,j,k;
	printf("Enter how many entries you want:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number:\n");
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		for (j=i;j<n;j++)
		{
			if (num[i] > num[j]) 
        	{
            	temp =  num[i];
            	num[i] = num[j];
		    	num[j] = temp;
	
			}
		}
	}
	for ( i = 0; i < n; i ++)  
    {  
        for ( j = i + 1; j < n; j++)  
        {   
            if ( num[i] == num[j])  
            {  
                for ( k = j; k < n - 1; k++)  
                {  
                    num[k] = num [k + 1];  
                }  
                n--;
                j--;      
            }  
        }  
    }  
	
	printf("First two greatest numbers are %d and %d\n",num[n-2],num[n-1]);
	printf("First two smallest numbers are %d and %d\n",num[0],num[1]);
	return 0;
}
