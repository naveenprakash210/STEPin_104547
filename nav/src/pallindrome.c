#include<stdio.h>  
int pallindrome(int n)
{
int r,sum=0;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
return sum;
}

int main()    
{    
int n,temp;    
printf("enter the number=");    
scanf("%d",&n); 
temp=n;
int x=pallindrome(n);  
if(temp==x)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
} 
