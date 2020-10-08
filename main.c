#include <stdio.h>
int number;
int main(void){
  while(1){
    printf("Enter Number : ");
    scanf("%d",&number);
    if(number >= 0){
      if((number==1 || number%2 == 0 || number%3 == 0 || number%5==0 || number%7==0) && (number!=2 && number!=3 && number!=5 && number!=7)){
        printf("Not prime number !!!\n");

        if(number%2==0){
          for(int i=1;i<=12;i++){
          printf("%d x %d = %d\n",number,i,number*i);
        }
        }
      }else{
        for(int i=1;i<=12;i++){
          printf("%d x %d = %d\n",number,i,number*i);
        }
      }
    }else{
      break;
    }
  }
}