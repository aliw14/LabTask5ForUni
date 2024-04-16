#include <iostream>
using namespace std;
#include <math.h>

int main() {
    int size = 80;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    arr[i] = pow(i,3);
    for (int i = 0; i < size; i++)
    printf("%d ",arr[i]);
    

    return 0;
}