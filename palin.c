//program to check if a number is a palindrome or not
#include<stdio.h>
int main()
{
  int num,temp,rev,rem;
  printf("\nEnter the number:");
  scanf("%d",&num);

  if (num<0)
  {
    printf("\nError!number is negative!");
    return 0;

  }
  temp=num;
  rev=0;
  while(num!=0)
  {
    rem=num%10;
    num=num/10;
    rev=rev*10+rem;
  }
  if (temp==rev)
   printf("\nNumber is a palindrome!");
  else
   printf("\nNumber is not a palindrome");
  
}