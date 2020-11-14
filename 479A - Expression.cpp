#include<stdio.h>
int main(){
int  a,b,c,s1,s5,s2,s3,s4,finalans;
scanf("%d%d%d",&a,&b,&c);
s1=a+b*c;
s2=a*(b+c);
s3=(a+b)*c;
s4=a*b*c;
s5=a+b+c;
finalans=0;
if(finalans<s1)finalans=s1;
if(finalans<s2)finalans=s2;
if(finalans<s3)finalans=s3;
if(finalans<s4)finalans=s4;
if(finalans<s5)finalans=s5;

printf("%d\n",finalans);
return 0;
}
