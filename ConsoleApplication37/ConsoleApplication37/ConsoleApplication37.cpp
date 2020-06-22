#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

int main() {
   //Первое
    
    setlocale(0, "");
  

    for (int i = 0; i < 10; i++) {
        cout <<"Случайное число "<<rand() << endl;
    }

    return 0;
}


/*
    setlocale(0, "");


    int i, n, ar[10][10], temp[10][10];

    for (i = 0; i < 10; i++)               //наполняем исходную матрицу
        for (n = 0; n < 10; n++)
            ar[i][n] = rand() % 100;

    for (i = 0; i < 10; i++)               //меняем местами столбцы со строками
        for (n = 0; n < 10; n++)
        {
            temp[i][n] = ar[n][i];
        }

    for (i = 0; i < 10; i++) {              //вывод на печать исходной матрицы
        for (n = 0; n < 10; n++)
            printf("%.2d ", ar[i][n]);

        printf("\n");
    }

    printf("\n");
    printf("\n");

    


    return 0;

}*/
