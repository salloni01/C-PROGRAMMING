#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n1,n2,n3,greater;
    printf("Enter n1,n2,n3");
    scanf("%d%d%d",&n1,&n2,&n3);
        if(n1>n2 && n1>n3){
        greater=1;
       }
        else if (n2>n1 && n2>n3){
    greater = 2;
    } else if (n3>n1 && n3>n2) {
      greater=3;
     }
      else{
      greater=0;
 } switch(greater)
    {
        case 1:
       printf(" greater=%d ",n1);
        break;
         case 2:
          printf(" greater is n2 ",n2);
          break;
      case 3: 
       printf(" greater is n3",n3);
      break;
      default:
       printf("all are equal");
    }
    return 0;
}