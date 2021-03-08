//program to stimulte using simple calcualtor
#include<stdio.h>
int main()

{
  int a,b;
  char op;

  printf("\nEnter the operator:");
  scanf("%c",&op);

  printf("\nEnter the operands:");
  scanf("%d%d", &a , &b );

  if (op=='+')
    printf("\nSum=%d",a+b);

  else if(op=='-')
    printf("\ndifference=%d",a-b);

  else if (op=='*')
    printf("\nProduct=%d",a*b);

  else if (op=='/')
  {
    if(b==0)
    {
      printf("Error!Denominator is 0");
      return 0;
    }
    else 
      printf("\nQuotient=%.3f",(float)a/b);
  }
  
  else if (op=='%')
  {
    if(b==0)
    {
      printf("Error!Denominator is 0");
      return 0;
    }
    else
      printf("\nremainder=%d",a%b);
  }
  
}