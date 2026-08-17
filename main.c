#include <stdio.h>

int main()
{
    double matrizMudanca[3][3] = {
        {0.5, 0.2, 0.3},
        {0.1, 0.6, 0.3},
        {0.7, 0.1, 0.2}};

    double estado[3] = {1.0, 0.0, 0.0};
    double newEstado[3];

    for (int i = 1; i <= 7; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            newEstado[j] = 0;

            for (int k = 0; k < 3; k++)
            {
                newEstado[j] += estado[k] * matrizMudanca[k][j];
            }
        }

        for (int l = 0; l < 3; l++)
        {
            estado[l] = newEstado[l];
        }
    }

    printf("Depois de 7 dias:\n");
    printf("Sol: %.2f%%\n", estado[0] * 100);
    printf("Chuva: %.2f%%\n", estado[1] * 100);
    printf("Nublado: %.2f%%\n", estado[2] * 100);

    return 0;
}