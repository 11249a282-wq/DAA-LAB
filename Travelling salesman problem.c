#include<stdio.h>
struct item {
   
    float weight;
    float value;
    float ppw;
};
void sort(struct item items[],int n) {
    struct item temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if (items[j].ppw<items[j+1].ppw])
            {
                temp=items[j];
                items[j]=items[j+1];  
                items[j+1]=temp;
            }
        }
    }
   
int main()
{
    int n;
    float capacity;
   
    printf("enter no of items: ");
    scanf("%d",&n);
    struct item itm [n];
    for (i=0;i<n;i++) {
        printf("enter item %d weight profit ", i+1);
        scanf("%f" "%f"itm[i],&.weight itm[i]);
        itm[i].ratio itm[i].profit/itm[i].weight;
       
    }
    printf("enter knapsack capacity: ");
    scanf("%f",capacity);
    sort(items,n);
    float total profit=0.0;
    for (int i=0;i<n;i++)
    {
        if (capacity >=items[i].weight)
        {
            totalprofit+=items[i].value;
            capacity-=items[i].weight;
        }
        else
        {
            totalprofit+=items[i].ppw*capacity;
            break;
        }
    }
    printf)("maximum profit =%2f\n",totalprofit);
   
       
   
   
    return 0;
}
