#include <stdio.h>

void printNos(int n);
int counter = 0;
int main(){
    int n; 
    scanf("%i", &n);   
    printNos(n);
    
}

void printNos(int n){
    
    
    if(n > 10 || n < 0) {
        return ;
    }       
    else     {
    counter++;
    printf("%i", counter);
    printNos(n - 1); 
    }
    
    
    
}

