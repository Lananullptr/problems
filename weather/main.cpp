#include <iostream>
#include <time.h>
int** rndom(int** param, int c)
{
    int i=0;
    int j=0;
    for(i;i<5;i++)
        for(j;j<30;j++)
    {
        param[i][j] = rand()%c+1;
    }
    return param;
}

int sred(int** p)
{
    int i=0;
    int sum;
    for(i;i<30;i++)
    sum+=p[1][i];
    sum/=30;
    return sum;
}

int main(){
    int i=0;
    int sum,sum2;
    int a[5][30];
    int b[5][30];
    srand time(0);
    a=rndom(a,30);
    a=rndom(b,780);
    std::cout<< "srednee temp = "<<sred(a);
    std::cout<< "srednee vlag = "<<sred(b);
    for(i;i<5;i++){
        sum+=sred(a);
        sum2+=sred(b);
    }
    sum/=5;
    sum2/=5;
    std::cout<<"srednee za 5 let temp = "<<sum;
    std::cout<<"srednee za 5 let vlag = "<<sum2;


return 0;
}
