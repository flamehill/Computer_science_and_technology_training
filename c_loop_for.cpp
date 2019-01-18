#include<stdio.h> 

int main() 
{ 
    int i; 
    for(i=1; i+1; i++) 
    { 
        if(i > 4) 
        { 
            printf("%d\n",i++); 
            break;
        }
    }
    printf("%d\n",i++);
    return 0;
}

