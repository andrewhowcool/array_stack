//
//  main.c
//  array_stack
//
//  Created by 楊博名 on 2016/11/15.
//  Copyright © 2016年 楊博名. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int create(int[]);         // ´ÿ•ﬂ∞Ô≈|
int isEmpty(int);           // ∞Ô≈|§w™≈
int add(int[], int, int);   // ¥°§J§∏Ø¿
int del(int[], int);     // ßR∞£§∏Ø¿
void list(int[], int);      // ≈„•‹©“¶≥§∫Æe

int main(void) {
    int stack[MAX];
    int top;
    int input, select;
    
    top = create(stack);
    
    while(1) {
        printf("\n\nEnter option (-1 to quit)°G");
        printf("\n(1)push into the stack");
        printf("\n(2)pop out of the stack");
        printf("\n(3)print the stack\n\n");
        scanf("%d", &select);
        
        if(select == -1){
            printf("\nEND");
            break;
        }
        
        switch(select) {
            case 1:
                printf("\nenter the data°G");
                scanf("%d", &input);
                printf("push %d into the stack\n",input);
                top = add(stack, top, input);
                break;
            case 2:
                printf("pop %d out of the stack\n",input);
                top = del(stack, top);
                break;
            case 3:
                list(stack, top);
                break;
            default:
                printf("\nWRONG option°I");
        }
    }
    
    printf("\n");
    
    return 0;
}

// fuction
int create(int stack[]) {
    int i;
    
    for(i = 0; i < MAX; i++)
        stack[i] = 0; //™Ï©ldata ¨∞ 0
    
    return -1; // top:™Ï©l≠»¨∞-1, ™Ω®Ï≤ƒ§@≠”pop in §~ßÔ¨∞ 0
}

int isEmpty(int top) {
    return (top == -1); //top:-1 ¨∞™Ï©l≠»(µL™F¶Ë)
}


int add(int stack[], int top, int item) {
    int t = top;
    
    if(t == MAX-1) {
        printf("\nstack is full°I");
        return t; //∂«¶^≠Ï•ª™∫top
    }
    
    stack[++t] = item; //±N∑sºW™∫≠»©Ò§J§U§@≠”∞}¶C
    
    return t; //∂«¶^∑s™∫top
}

int del(int stack[], int top) {
    int t = top;
    
    if(isEmpty(t)==-1) {
        printf("\nstack empty°I");
        return t; //∂«¶^≠Ï•ª™∫top
    }
    
    return --t; //∂«¶^´e§@≠”top
}

void list(int stack[], int top) {
    int t = top;
    
    printf("\nstack°G");
    while(t>=0) {
        printf("%d ", stack[t]); //•—§W¶L®Ï§U 
        t--; 
    } 
}
