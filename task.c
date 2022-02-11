#include<stdio.h>
fetch(f){          //creating a function for fetching the data
    ;
    ;        


}
void main(){
    int K,C,S,E,N,T,f,f1,f2;
    char str1[100];//created a new string str
    printf("Enter the no.of test to be performed: \nA:");
    scanf("%d",&T);
    
    
    if(1<T & T<=10){     
        printf("Nice!");          //if for ensuring T condition 1<T<=10
        for(f=1;f<=10;f++){
            printf("\nHow many cakes are there?\nA:");  //took input of how many cakes they have in gross over the condition 1<C<10^9
            scanf("%d",&C);
            if( 1<C & C<= 1000000000){
                printf("\nSo,There are %d cakes?",C); //telling no.of cakes they have
                printf("\nHow many children are there>\nA:");
                scanf("%d",&N);
                if( 1<=N & N<= 100000){
                    for(f1=1;f1<=N;f1++){
                        ;
                        printf("\nSo, kid-0%d Wants to eat cakes from?\nA:",f); //asking from where the kid wants to eat cakes
                        scanf("%d",&S);    //i.e, 'S'tart
                        printf("\nSo the kid no.%d Wants to eat Cakes till?\nA:",f); //Asking till where the kid wants to eat cakes
                        scanf("%d",&E);    //'E'nd
                    
                         if( 1<S & E<C){
                             ;
                         }

                    }
                }
                else{
                    printf("Dude, Run the code again!");
                }
                break;
            }
            else{
                printf("No, Luck Run the code again!");
            }
            break;
            
        }                  



    }
    else{
        printf("Try Again");
        
    }
    

}