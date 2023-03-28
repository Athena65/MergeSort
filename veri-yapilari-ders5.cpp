#include<stdlib.h>
#include<stdio.h>
int main(){
	int b;
	int dizi[5]= {5,3,4,2,1};
	
	for(int i=0; i<5;i++)
	{
		printf("%d",dizi[i]);
	}
	
	//kabarcik siralama kucukten buyuge 
	for(int i =0;i<5;i++)
	{
		for(int j=0; j<4;j++)
		{
			if(dizi[j+1]<dizi[j])
			{
				b=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=b;
				
			}
			
		}
		
	}
	printf("\n");
	for(int i=0; i<5;i++)
	{
		printf("%d",dizi[i]);
	}
	
	
	
	
	
		//kabarcik siralama buyukten kucuge
	
	
		for(int i =0;i<5;i++)
	{
		for(int j=0; j<4;j++)
		{
			if(dizi[j+1]>dizi[j])
			{
				b=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=b;
				
			}
			
		}
		
	}
	printf("\n");
	for(int i=0; i<5;i++)
	{
		printf("%d",dizi[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
