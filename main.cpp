#include <iostream>

using namespace std;

void p_sort(int* mass,int len);

int main()
{
    int mass[20] = {12,343,23,12,65,43,23,5,34,87,78,534,789,231,78,56,34,12,6,2};
    cout << "Sorting.....";
    p_sort(mass,20);
    for(int a = 0 ; a < 20; a++)
    cout << endl << mass[a];
    return 0;
}
//Пузырьковая сортировка
void p_sort(int *mass, int len)
{
    int temp;
    for(int a = 0; a < len ; a++)
    {
        for(int b = 0; b < len ; b++)
        {
        if(mass[b] < mass[b + 1])
        {
           continue;
        }
        else if(mass[b] > mass[b + 1])
        {
                temp = mass[b];
                 mass[b] = mass[b + 1];
                 mass[b + 1] = temp;
        }
        }
    }
}
