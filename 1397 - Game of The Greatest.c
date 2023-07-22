#include<stdio.h>
int main()
{
    int n;

   while(scanf("%d",&n)&& n!=0)
   {
        int x,y,c=0,c1=0;
        while(n--){
         scanf("%d %d",&x,&y);
       if(x>y){
            c++;
        }else if(x<y){
           c1++ ;
        }

        }
         printf("%d %d\n",c,c1);
    }
    return 0;
}
