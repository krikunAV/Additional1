/*#include <iostream> 
#include "Header.h"
using namespace kk;
using namespace std;
void Input(int *arr[])
{   
    cout << "¬ведите 'Q1', 'P1', 'Q2', 'P2','A'";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
}

int Function(int *arr[])
{
    int maxWeight = 0;
    int weight = arr[4];
    int prise = 0;
    int a = arr[2];
    int b = arr[3];
    int point = 0;

    if (arr[0] > arr[2]){
        a = arr[0];
        b = arr[1];
        arr[0] = arr[2];
        arr[1] = arr[3];
        arr[2] = a;
        arr[3] = b;
    }
    
    while (a > 0){
        a = a - arr[0];
        point++;
    }
    if (point * arr[1] > arr[3]) {
        while (weight > 0) {
            if (weight - arr[2] > 0) {
                prise += arr[3];
                weight -= arr[2];
            }
            if (weight - arr[2] < 0) {
                prise += arr[1];
                weight -= arr[0];
            }
        }
    }
    else {
        while (weight > 0) {
            prise += arr[1];
            weight -= arr[0];
        }
    }

    return prise;
}
*/