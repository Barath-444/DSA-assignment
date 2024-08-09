#include <stdio.h>
#include<stdlib.h>
typedef struct{
    char name[10];
    int id;
    float price;
}product;

int main() {
    int n;
    printf("Enter the no.of products:");
    scanf("%d",&n);
    product p[n];
    product*most_expensive =&p[0];
    product*least_expensive =&p[0];
    float total_price = 0.0;
    for(int i=0;i<n;i++){
        printf("the product name:");
        scanf("%s",p[i].name);
        printf("product ID:");
        scanf("%d",&p[i].id);
        printf("product price:");
        scanf("%f",&p[i].price);
        total_price +=p[i].price;
        if(p[i].price > most_expensive->price){
            most_expensive = &p[i];
            
        }
        if(p[i].price < least_expensive->price){
            least_expensive = &p[i];
            
        }
        printf("product details:\n");
    
         printf("product_name:%s\nproduct_id:%d\nproduct_price:%f\ntotal_price:%f\n",p[i].name,p[i].id,p[i].price,total_price);
         printf("\n");
        
    }
    printf("\n");
    printf("the most expensive product:\n");
    printf("product name:%sproduct id:%dproduct price:%f",most_expensive->name,most_expensive->id,most_expensive->price);
    printf("\n");
     printf("the least expensive product:\n");
    printf("product name:%sproduct id:%dproduct price:%f",least_expensive->name,least_expensive->id,least_expensive->price);
    

    return 0;
}