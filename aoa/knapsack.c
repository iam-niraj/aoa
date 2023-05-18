#include <stdio.h>
float w[999], p[999], x[999];
int n; int m;
int capacity;
float profit = 0;

int extract_max(float *arr){
    float max = 0;
    int index;
    for (int i = 0; i < n; i++) {
        if(max < arr[i]){
            max = arr[i];
            index = i;
        }
    }
    return index;
}

void greedy_knapsack(){
    float hero[n];
    for (int i = 0; i < n; i++) {
        hero[i] = p[i]/w[i];
        // printf("%f\n",hero[i]);
    }
    
    for (int i = 0; i < n; i++) {
        int max = extract_max(hero);
        if(w[max] <= capacity){
            capacity = capacity - w[max];
            profit = profit + p[max];
            x[max] = 1;
            hero[max] = -1;
        }else{
            float temp = capacity/w[max];
            profit = profit + (p[max]*temp);
            capacity = 0;
            x[max] = temp;
            hero[max] = -1;
        }
    }
    
    printf("Maximum profit is:\t%f\n",profit);
    for(int i=0;i<n;i++)
        printf("Obj%d  ",i+1);
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f   ",x[i]);
    }
}

int main()
{
    printf("Enter the the number of weights:\t");
    scanf("%d",&n);
    printf("enter weights:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f",&w[i]);
    }
    printf("enter profits:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f",&p[i]);
    }
    printf("enter the capacity:\t");
    scanf("%d",&capacity);
    
    greedy_knapsack();

    return 0;
}


