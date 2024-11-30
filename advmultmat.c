// WAP   multipy jast like addition.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int rowsize,colsize;
    
     
      printf("Enter the row and column size of 2D Array");
      scanf("%d%d" ,&rowsize,&colsize);
     
      int arr1[rowsize][colsize]; 
      printf("Enter 2D Array Elements for array 1");
      for(int i=0;i<rowsize;i++) //here i represents row index 
    { 
        for(int j=0;j<colsize;j++){  //j maintain the index of column 
           scanf("%d",&arr1[i][j]) ;
        }
     }  
            
           int rowsize2,colsize2;
    
     
      printf("Enter the row and column size of 2D Array");
      scanf("%d%d" ,&rowsize2,&colsize2);
     
      int arr2[rowsize2][colsize2]; 
           printf("Enter 2D Array Elements for array 2");
      for(int i=0;i<rowsize2;i++)
    { 
        for(int j=0;j<colsize2;j++){ 
          scanf("%d",&arr2[i][j]) ;
        }
    }     
       // logic of multiplication   
       
           
          for(int i=0; i<rowsize; i++) {
            for(int j=0; j<colsize2; j++){
               int sum=0;
                for(int k=0; k<colsize2; k++){
                    sum= sum + arr1[i][k] * arr2[k][j];
               }
               printf("%d ",sum) ;
            }
         printf("\n");
          }   
        
     
             
     
      
    return 0;
}