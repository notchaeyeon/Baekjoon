//gcc 7.4.0

#include  <stdio.h>
int main(void)
{
    int n = 0;
    scanf("%d", &n);
    
    float a[10001] = {0};
    float b[10001] = {0};
    float sum = 0;
    float res = 0;
    
    for (int i = 0; i<n; i++){
        scanf("%f", &a[i]);
        sum += a[i];
    }
    
    int M = a[0];
    
    for (int i = 0; i<n; i++){
        if (M < a[i]) M = a[i];
    }
     

    for (int i = 0; i<n; i++){
        
        b[i] = a[i]*100/M;
        res += b[i];
    }
    
    res = res/n;
    
    printf("%f", res);
    
    return 0;
    
}