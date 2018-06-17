#include <stdio.h>
#include <stdlib.h>
#include<math.h>





int main()
{
    int i , number,length,d;



    scanf("%d",&number);

    length = floor(log10(number)+1);


    int arr[100],b[100],c,n;

  for(i=0;i<length;i++)
    {
       arr[i] = number % 10;

       number /= 10;


    }




    for (i = length - 1, d = 0; i >= 0; i--, d++)
      b[d] = arr[i];

     for(i=0;i<length;i++)
    printf("%d  \t",b[i]);



    while(b[0]!=0)
    {

           n = b[0];

        for(i=1;i<length;i++)
        {

          n = n*10 + b[i] ;



        }

        if(n % i == 0){
            printf("yes");

            break;

        }else{
        printf("no");
        break;
        }




    }




 return 0;
}
