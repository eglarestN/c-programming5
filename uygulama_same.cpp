#include<stdio.h>

int main(void)
{
	int num1, num2, num3, enb;
	
	printf("enter 3 number:");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if(num1>num2)
	{
		if(num1>num3){
			enb = num1;
		}
		else{
			enb = num3;
        }
    }
	else
	{
		if(num2>num3){
			enb = num2;
		}
		else{
			enb = num3;
	    }
	}
		

	
	printf("girilen en buyuk sayi: %d", enb);
	
	
	
	
	
	return 0;
}
