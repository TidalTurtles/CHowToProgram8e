//
//  chp4ex13.c
//  CS2060ClassWork
//
//  Created by noah holt on 9/5/21.
//

#include <stdio.h>

int main(void) {
    
    int x = 15;
    int total = 0;
    
    for (int i = 1; i <= x; i = i +2) {
        
        total += i;
        
    }
    
    printf("%s%d\n", "Total of Odd integers is: ", total);
    
}
