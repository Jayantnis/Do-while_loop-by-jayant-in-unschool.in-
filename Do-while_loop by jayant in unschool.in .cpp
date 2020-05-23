#include<stdio.h>
#include<conio.h>

//we know that do-while is exit control loop 
//so now we syntax:-  so on 
// do
/*{ 
	//code staements

}while(comditions); //that is it's syntax is statisfyso semicolon is end of after
while loop condition { ; } is very important so complete in do-while loop.
*/

int main()
{	int a,b,k;
	do{
	 	printf("adding number inserted by enter ");
	 	scanf("%d",&a);
	 	scanf("%d",&b);
		k=a+b;
		printf("value of %d \n",k);
	}
	while(k<=0);
}
