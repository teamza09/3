#include <stdio.h>
int main(void)
 {
  int i,c,d,sum1;
  float a,b,sum;
  printf("Menu\n");
  printf("1. Add (+)\n");
  printf("2. Subtract (-)\n");
  printf("3. Multiply (*)\n");
  printf("4. Divide (/)\n");
  printf("5. Modulo (%)\n");
  printf("Enter Number 1 : ");
  scanf("%f",&a);
  printf("Enter Number 2 : ");
  scanf("%f",&b);
  printf("Select Choice  : ");
  scanf("%d",&i);
switch(i)
{
    case 1 : sum = a + b ;
              printf("Answer is %.3f + %.3f = %.3f",a,b,sum);
              break ;  

    case 2 : sum = a - b ;
              printf("Answer is %.3f - %.3f = %.3f",a,b,sum);
              break ;  

    case 3 : sum = a * b ;
              printf("Answer is %.3f * %.3f = %.3f",a,b,sum);
              break ;

    case 4 : if(b==0)
             { 
              printf("Divide by Zero!!!");
             }
             else 
             {
              sum = a / b ;
              printf("Answer is %.3f / %.3f = %.3f",a,b,sum);
             }
              break; 

    case 5 :  c=a;
              d=b;
              sum1 = c % d ;
              printf("Answer is %d %% %d = %d",c,d,sum1);
              break ;
    default :  printf("No Choice !!!");     
  }
  return 0;
}         

 