#define _CRT_SECURE_NO_WARNINGS 1

//猜名次
//#include <stdio.h>
//
//int main()
//{
//    int A = 0;
//    int B = 0;
//    int C = 0;
//    int D = 0;
//    int E = 0;
//    for (A = 1; A <= 5; A++)
//    {
//        for (B = 1; B <= 5; B++)
//        {
//            for (C = 1; C <= 5; C++)
//            {
//                for (D = 1; D <= 5; D++)
//                {
//                    for (E = 1; E <= 5; E++)
//                    {
//                        if (((A == 3) + (B == 2) == 1) &&
//                            ((B == 2) + (E == 4) == 1) &&
//                            ((C == 1) + (D == 2) == 1) &&
//                            ((C == 5) + (D == 3) == 1) &&
//                            ((E == 4) + (A == 1) == 1))
//                        {
//                            if (A * B * C * D * E == 120)
//                            {
//                                printf("A=%d,B=%d,C=%d,D=%d,E=%d", A, B, C, D, E);
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    
//    return 0;
//}

//猜凶手

//#include <stdio.h>
//
//int main()
//{
//    char K = 0;
//    for(K='A';K<='D';K++)
//    {
//        if ((K != 'A') + (K == 'C') + (K == 'D') + (K != 'D') == 3)
//            printf("%c是凶手",K);
//    }
//    return 0;
//}

//在屏幕上打印杨辉三角

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int arr[10][10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
	}
	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}