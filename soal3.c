#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a < 2){
        printf("BUKAN");
    }else if(a == 2){
        printf("PRIMA");
    }else if(a % 2 == 0){
        printf("BUKAN");
    }else {
        int prima = 1;  
        for (int i = 3; i <= sqrt(a); i += 2) {
            if (a % i == 0) {
                prima = 0;  
                break;
            }
        }
        
        if (prima){
            printf("PRIMA");
        } else{
            printf("BUKAN");
        }
    }
   


    return 0;
}
