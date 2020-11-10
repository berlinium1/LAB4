#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main(){
    float x;
    int n;
    cout<<"Введіть значення аргумента X: "; cin>>x;
    cout<<"\nВведіть ціле значення N, до якого плануєте розраховувати суму: "; cin>>n;
    float Sum=0;
    float factorial=1;
    float expression=1;
    for (int i=0; i<=n; i++){
        for (int j=1; j<=2*i; j++){
            factorial=factorial*j;
        }
        expression=pow(-1,i)*(pow(x,2*i)/factorial);
        factorial=1;
        Sum=Sum+expression;
        printf("\nПри N = %-d значення виразу дорівнює:\n%-10.18f\n", i, expression);
    }
    printf("\nСума дорівнює %10.18f\n", Sum);
}
