#include<stdlib.h>
#include<stdlib.h>
int main (){
    system("cls");
    int x=10;
    int const*ptr=&x;
    printf("%d\n",x);
    ptr=ptr+1;
    printf("Vaue of ptr=%d\n",ptr);
    ptr=ptr+1;
    printf("Vaue of ptr=%d\n",ptr);
    return 0;
}