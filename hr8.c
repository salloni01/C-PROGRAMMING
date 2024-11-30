#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char (a);
    scanf("%c",&a);
   
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    
    switch(a)
    {
            case '+':
          printf("%d", n1+n2);
              break;
            
        case '-':
            printf("%d",n1-n2);
            break;
            
        case '*':
            printf("%d",n1*n2);
            break;
           
        case '/':
            printf("%d",n1/n2);
            break;
       
        default:
            printf("Invalid Operator");
    }
    return 0;
}
