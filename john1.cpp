#include<stdio.h>
#include<limits.h>
int main()
{ 
// for short int
printf(" short int:\nsigned: %d to %hd",SHRT_MIN,SHRT_MIN);
printf(" unsigned:%d to %hu",SHRT_MAX);
// for int
printf(" int :\n signed : %d to d%",INT_MIN, INT_MAX);
printf(" unsigned : %d to %u",0,INT_MAX);
// for long int
printf(" long int :\n signed: %d to l%d",LONG_MIN,LONG_MAX);
printf(" unsigned :%d to lu%",0,LONG_MAX);
//for long long int
printf(" long long int:\n signed: %d to %lld", LONG_LONG_MIN,LONG_LONG_MAX);
printf(" unsigned :%d to llu%",0,LONG_LONG_MAX);
}
