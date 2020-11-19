#include <stdio.h>
#include <math.h>
int Add(int *a,int *b)
{
return ((*a)+(*b));
}
int Sub(int *a,int *b)
{
return ((*a)-(*b));
}
int Mul(int *a,int *b)
{
return ((*a)*(*b));
}
int Div(int *a,int *b)
{
return ((*a)%(*b));
}
int main()
{
int nNumber1;
int nNumber2;
int z,y;
printf("1.Add 2.Sub 3.Mul 4.Div");
	scanf("%d",&z);
	printf("Input frist number:");
	scanf("%d",&nNumber1);
	printf("Input second number:");
	scanf("%d",&nNumber2);
	switch(z)
 {
	case 1: printf("%d",Add(&nNumber1,&nNumber2));break;
	case 2: printf("%d",Sub(&nNumber1,&nNumber2));break;
	case 3: printf("%d",Mul(&nNumber1,&nNumber2));break;
	case 4: printf("%d",Div(&nNumber1,&nNumber2));break;
	
	}
}
