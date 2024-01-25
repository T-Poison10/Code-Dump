#include<stdio.h>
int main()
// {
//     int i=1, j=9;
//     if(i>5&&j<5)
//     i=j+2;
//     printf("%d\n",i);
//     return 0;
// }
// {
//     int a=5;
//     begin:
//     if (a)
//     {
//         printf("%d",a);
//         a--;
//         goto begin;
//         return 0;
//     }
// }
// {
//     int a=6,b=4;
//     while(a+b)
//     {
//         printf("a=%d b=%d",a,b);
//         a=a/2;
//         b%=3;
//     }

// }
// {
//   int i=10;
//   do
//   {
//     printf("i=%d\n",i);
//     i=i-3;
//   } 
//   while (i);
//   return 0;
    
// }
// {
//     int i,j=10;
//     for(;i=j;j-=2)
//     printf("%d \t",j);
//     return 0;
// }
   
    // {
    //     int i,index=0;
    //     for ( i = 0; i < 10; i++)
    //     {
    //         int i=0;
    //         while (i<5)
    //         {
    //             index++;
    //             i++;
    //         }
            
    //     }
    //    printf("index=%d\n",index); 
    // }
    // {
    //     int i;
    //     for (i = 1; i < 10; i++)
    //     {
    //         if (i==3)
            
    //             continue;
    //             printf("%d \n",i);
            
            
    //     }



    // }
    // {
    //     int i,sum=0;
    //     for ( i = 0; i < 10; i+=3)
    //     {
    //         sum+=i*i;
    //     }
    //     printf("%d ",sum);
    // }


    // {
    //     int var=2,x=1,y=2; ( putting var throws error)
    //     switch (x)
    //     {
    //     case x:
    //         x++;
        
    //     case y:
    //         y++;
    //     }
    // }


    {
        int i,sum1=0,sum2=0;
        for(i=1;i<5;i++)
        {
            sum1+=i;
        }
        i=1;
        while (i<5)
        {
            i++;
            sum2+=i;
        }
        printf("%d %d \n",i,sum1,sum2);
        return 0;
        


    }
