#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int rowsize,colsize;
    
     
      printf("Enter the row and column size of 2D Array");
      scanf("%d%d" ,&rowsize,&colsize);
     
      int arr1[rowsize][colsize], arr2[rowsize][colsize], subt[rowsize][colsize]; 
      printf("Enter 2D Array Elements for array 1");
      for(int i=0;i<rowsize;i++) //here i represents row index 
    { 
        for(int j=0;j<colsize;j++){  //j maintain the index of column 
           scanf("%d",&arr1[i][j]) ;
        }
     }  
            
        printf("Enter 2D Array Elements for array 2");
      for(int i=0;i<rowsize;i++)
    { 
        for(int j=0;j<colsize;j++){ 
          scanf("%d",&arr2[i][j]) ;
        }
    }     
          
        for(int i=0;i<rowsize;i++)
    { 
        for(int j=0;j<colsize;j++){ 
           
         subt[i][j]= arr1[i][j] - arr2[i][j];
         printf("%d ",subt[i][j]) ;
         }
    }     
        
     
             
     
      
    return 0;
}