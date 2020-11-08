//菱形图案
//#include<stdio.h>
//int main(){
//	int a;
//	while (scanf("%d\n", &a) != EOF){
//		for (int i = 0; i <= a; i++){
//			for (int m = 0; m<a - i; m++){
//				printf(" ");
//			}for (int n = 0; n <= i; n++){
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (int j = 0; j<a; j++){
//			for (int p = 0; p <= j; p++){
//				printf(" ");
//			}for (int q = a; q>j; q--){
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//K型图案
//#include<stdio.h>
//int main(){
//	int a;
//	while (scanf_s("%d\n", &a) != EOF){
//		for (int i = 0; i <= a; i++){
//			for (int m = a; m >= i; m--){
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (int j = 0; j<a; j++){
//			for (int n = 0; n <= j + 1; n++){
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//箭形图案
//#include<stdio.h>
//int main(){
//	int a;
//	while (scanf("%d\n", &a) != EOF){
//		for (int i = 0; i <= a; i++){
//			for (int m = 0; m<2 * a - 2 * i; m++){
//				printf(" ");
//			}for (int n = 0; n <= i; n++){
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (int j = 0; j<a; j++){
//			for (int p = 0; p<2 * (j + 1); p++){
//				printf(" ");
//			}for (int q = 0; q<a - j; q++){
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//反斜线图案
//#include<stdio.h>
//int main(){
//	int a;
//	while (scanf("%d\n", &a) != EOF){
//		for (int i = 0; i<a; i++){
//			for (int m = 0; m<i; m++){
//				printf(" ");
//			}
//			printf("*");
//			for (int n = 0; n<a - i - 1; n++){
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}