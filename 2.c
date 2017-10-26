//
//  main.c
//  binary2
//
//  Created by Kozak, Luca on 2017. 10. 17..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>

int main() {
    
        int n[10];
        int i;
    
    printf("Adj meg 10 szamot a sorozatban\n");
    
    
    for (i=0; i<10; i++) {
        
        printf("A sorozat %d. tagja = ",i + 1);
        scanf("%d", &n[i]);
    }
    
    printf("\n A sorozat tagjai: ");
    
    for(i=0; i<10; i++) {
        printf("%d ", n[i]);
    }
    
    
    return 0;
}
