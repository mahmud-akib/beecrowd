#include<stdio.h>

int main()
{
    
    int t;
    double v, menor;
    
    while (scanf("%d", &t) != EOF)
    {
        menor = 11;
        
        while (t--) {
            scanf("%lf", &v);
            if (v < menor)
                menor = v;
        }
        
        printf("%.2lf\n", menor);
    }

    return 0;
}
