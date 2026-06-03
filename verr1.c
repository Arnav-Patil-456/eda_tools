#include <stdio.h>

struct gate{
    int a;
    int b;
    int output;

};

void and(struct gate *g){
    g->output = g->a && g->b;
    
}

void or(struct gate *g){
    g->output = g->a || g->b;


}

void not(struct gate *g){
    g->output = g->a && g->b;

}

void nand(struct gate *g){
    g->output = !(g->a && g->b);

}

void nor(struct gate *g){
    g->output = !(g->a || g->b);

}

void xor(struct gate *g){
    g->output = g->a ^ g->b;

}

void xnor(struct gate *g){
    g->output = !(g->a ^ g->b);

}

int main(){
    struct gate g;
    struct gate *ptr = &g;

    //accepting a and b
    while(1){
        printf("enter value of a ");
        scanf("%d",&ptr->a);

        printf("enter value of b ");
        scanf("%d",&ptr->b);

        if((ptr->a == 0 || ptr->a == 1) && (ptr->b == 0 ||ptr->b ==1)){

            break;

            
        }

        printf("invalid input, enter 0 or 1 \n \n");

    }

    //menu
    int choice;
    while(choice != 8){
        printf("\n 1.AND GATE");
        printf("\n 2.OR GATE");
        printf("\n 3.NOT GATE");
        printf("\n 4.NAND GATE");
        printf("\n 5.NOR GATE");
        printf("\n 6.XOR GATE");
        printf("\n 7.XNOR GATE");
        printf("\n 8.EXIT");

        
        printf("enter choice:\n");
        scanf("%d",&choice);


        //switch case
        switch(choice){
            case 1:
                  and(ptr);
                  printf(" output = %d",ptr->output);
                 break;
            case 2:
                  or(ptr);
                  printf(" output = %d",ptr->output);
                 break;
            case 3:
                 not(ptr);
                 printf(" output = %d",ptr->output);
                 break;
            case 4:
                 nand(ptr);
                 printf(" output = %d",ptr->output);
                 break;
            case 5:
                 nor(ptr);
                 printf(" output = %d",ptr->output);
                 break;                   
            case 6:
                 xor(ptr);
                 printf(" output = %d",ptr->output);
                 break;        
            case 7:
                 xnor(ptr);
                 printf(" output = %d",ptr->output);
                 break;
            case 8 :
                 printf("exiting...\n");
                 
                 break ;  
            default:
                printf("invalid choice");              
        }
        


    }
    printf("\nProgram finished.\n");
return 0;


    

}
