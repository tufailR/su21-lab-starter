#include<stdio.h>

static inline int add(int a,int b){
return a+b;
}
int main(){
int result = add(5,3);
printf("Result: %d\n",result);
return 0;
}
