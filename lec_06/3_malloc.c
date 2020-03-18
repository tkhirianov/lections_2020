#include <stdlib.h>
#include <stdio.h>

int main()
{
    for (int i = 0; i < 100; i++) {
        double *pd = (double *)malloc(10 * sizeof(double));
        if (pd != NULL)
        {
            //адресная арифметика обеспечит перебор адресов
            // от pd до pd + 9*sizeof(double) включительно
            for(double *p = pd; p < pd + 10; p++)
                *p = 0.0; //зануляем ячейку памяти типа double
        } else {
            printf("Не удалось выделить память.");
        }
        free(pd);
    }
    return 0;
}
