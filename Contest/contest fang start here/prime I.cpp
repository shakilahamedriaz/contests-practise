

#include<stdio.h>
int main()
{


   int t;
   scanf("%d",&t);
   while(t--){
    long int n,i,count;

    scanf("%d",&n);

    count = 0;

    if(n == 1 || n == 0){
        count = 1;
    }

        for(i=2; i<=n/2; i++)
        {

            if(n%i==0)
            {

                count++;
                break;
            }
        }
        if(count==0)
        {

            printf("YES\n",n);
        }
        else
        {
            printf("NO\n",n);
        }
   }



    return 0;
}
