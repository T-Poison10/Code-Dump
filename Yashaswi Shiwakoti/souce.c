#include<stdio.h>
#include<string.h>
int main (){
    char source[]="Yashaswiiii";
    char source1[]="shiwakoti";
    char destination[20];
    char destination1[20];//make sure the destination array has enough spaces 
    strcpy (destination,source);
    strcpy (destination1,source1);
    printf("source :%s %s\n",source,source1);
    
    printf("destination :%s %s\n",destination,destination1);
    
}
//logic bulid up without the use of function 
/*#include<stdio.h>
#include<string.h>
int main (){
    char source[]="yashaswi";
    char destination [20];
    int i=0;

    //strcpy(destination,soruce);
    while (source[i]!='\0'){
        destination [i]=source[i];
        i++;
    }

    printf("source :%s\n",source);
    printf("the destination :" );
    for (int j=0;j<i;j++){
        printf("%c",destination[j]);
    }
    return 0;
}*/
