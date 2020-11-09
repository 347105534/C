//正斜线图案
//#include<stdio.h>
//int main(){
//	int a;
//	while (scanf("%d\n", &a) != EOF){
//		for (int i = 0; i<a; i++){
//			for (int m = 0; m<a - i - 1; m++){
//				printf(" ");
//			}
//			printf("*");
//			for (int n = 0; n<i; n++){
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//X形图案
//#include<stdio.h>
//int main(){
//	int i, j, n;
//	while (scanf("%d\n", &n) != EOF){
//		for (i = 0; i<n; i++){
//			for (j = 0; j<n; j++)
//			if (j == i || j + i == n - 1)
//				printf("*");
//			else
//				printf(" ");
//			printf("\n");
//		}
//	}
//	return 0;
//}

//空心正方形图案
//#include<stdio.h>
//int main(){
//	int a;
//	while (scanf("%d\n", &a) != EOF){
//		for (int i = 1; i <= a; i++){
//			if (i == 1 || i == a){
//				for (int m = 1; m <= a; m++){
//					printf("* ");
//				}
//				printf("\n");
//			}
//			else{
//				printf("* ");
//				for (int n = 1; n <= a - 2; n++){
//					printf("  ");
//				}
//				printf("* ");
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}

//空心三角形图案
//#include<stdio.h>
//int main(){
//	int a;
//	while (scanf("%d\n", &a) != EOF){
//		for (int i = 1; i <= a; i++){
//			for (int j = 1; j <= a; j++){
//				if (i == j || j == 1 || i == a){
//					printf("* ");
//				}
//				else{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//平均身高
//#include<stdio.h>
//int main(){
//	double a, b, c, d, e;
//	while (scanf("%lf %lf %lf %lf %lf\n", &a, &b, &c, &d, &e) != EOF){
//		double res = (a + b + c + d + e) / 5;
//		printf("%.2lf\n", res);
//	}
//	return 0;
//}