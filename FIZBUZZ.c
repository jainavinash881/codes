#include <stdio.h>


int main()

{

    for(int i =1; i<=100;i++)
	{
   
     
        
        if(i%15==0)
   
	     printf("FIzzBuzz ",i);


	        
        else if(i%3 == 0)
  
		printf("Fizz  ");


	        
        else if(i%5==0)	
                                printf("BUzz ");


        
      		  else
		
        printf("%d  ",i);

      	  
    }


    return 0;

}
