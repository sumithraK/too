#include <stdio.h>


int main(void) 
{

 char a[5][5]={{'w','e','l','c','o'},{'m','e','t','o','o'},{'i','t','o','a','t'},{'h','y','o','m','a'},{'n','g','a','l','a'}};
  
int i,j;
   
 for(i=0;i<5;i++)
  
  {
 
        for(j=0;j<5;j++)

         {
          
   if((a[i][j]=='t')&&(a[i][j+1]=='o')&&(a[i][j+2]=='o'))

             {
                 printf("Start Index:<%d %d>End Index<%d %d>",i,j,i,j+2)
             }
   
      }
    }
     
for(i=0;i<5;i++)
 
   {
      
   for(j=0;j<5;j++)
 
        {
    
         if((a[i][j]=='t')&&(a[i+1][j]=='o')&&(a[i+2][j]=='o'))
    
         {
               printf("Start Index:<%d %d>End Index<%d %d>",i,j,i,j+2)

             }
         }
    }

    
	// your code goes here
	return 0;

}

