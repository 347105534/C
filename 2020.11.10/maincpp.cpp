//挂科危险
//#include<stdio.h>
//int main(){
//	int a;
//	while (scanf("%d\n", &a) != EOF){
//		if (a >= 10){
//			printf("Danger++\n");
//		}if (a >= 4 && a <= 9){
//			printf("Danger\n");
//		}
//		else if (a >= 0 && a <= 3){
//			printf("Good\n");
//		}
//	}
//	return 0;
//}

//HTTP状态码
//#include<stdio.h>
//int main(){
//	int a;
//	while (scanf("%d\n", &a) != EOF){
//		if (a == 200){
//			printf("OK\n");
//		}if (a == 202){
//			printf("Accepted\n");
//		}if (a == 400){
//			printf("Bad Request\n");
//		}if (a == 403){
//			printf("Forbidden\n");
//		}if (a == 404){
//			printf("Not Found\n");
//		}if (a == 500){
//			printf("Internal Server Error\n");
//		}if (a == 502){
//			printf("Bad Gateway\n");
//		}
//	}
//	return 0;
//}

//数字三角形
//#include<stdio.h>
//int main(){
//	int a;
//	while (scanf("%d\n", &a) != EOF){
//		for (int i = 1; i <= a; i++){
//			for (int m = 1; m <= i; m++){
//				printf("%d ", m);
//			}
//			for (int n = 0; n<a - i; n++){
//				printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//公务员面试
//#include <stdio.h>
//int main()
//{
//	int a[7];
//	int max = 0;
//	int min = 100;
//	float ave;
//	float sum = 0;
//	for (int i = 0; i<7; i++)
//	{
//		scanf("%d", &a[i]);
//		if (max<a[i])
//			max = a[i];
//		if (min>a[i])
//			min = a[i];
//	}
//	for (int i = 0; i<7; i++)
//	{
//		sum += a[i];
//	}
//	sum = sum - max - min;
//	ave = sum / 5;
//	printf("%.2f", ave);
//	return 0;
//}

//有序序列插入一个数
//#include<stdio.h>
//int main()
//{
//	int n, i;
//	scanf("%d\n", &n);
//	int a[n];
//	for (i = 0; i<n; ++i) {
//		scanf("%d ", &a[i]);
//	}
//	int c, mark = 1;
//	scanf("%d\n", &c);
//	for (i = 0; i<n; ++i) {
//		if (a[i]>c&&mark == 1) {
//			mark = 0;
//			printf("%d ", c);
//		}
//		printf("%d ", a[i]);
//	}
//	if (mark == 1)
//		printf("%d ", c);
//	return 0;
//}

//筛选法求素数
//#include<stdio.h>
//int main(){
//	int n;
//	int m = 1;
//	int p;
//	while (scanf("%d\n", &n) != EOF){
//		int a[n];
//		for (int i = 0; i<n; i++){
//			a[i] = m;
//			if ((i>2 && (a[i] % 2 == 0 || a[i] % 3 == 0)) || (i>10 && (a[i] % 5 == 0 || a[i] % 7 == 0))){
//				a[i] = NULL;
//			}
//			m++;
//		}
//		for (int i = 1; i<n; i++){
//			if (a[i] != NULL){
//				printf("%d ", a[i]);
//			}if (a[i] == 0){
//				p++;
//			}
//		}
//		printf("\n");
//		printf("%d\n", p);
//
//	}
//	return 0;
//}

//图像相似度
//#include<stdio.h>
//int main(){
//	int m, n, mark;
//	double num;
//
//	scanf("%d%d\n", &m, &n);
//	int a[m][n];
//	int b[m][n];
//	for (int i = 0; i<m; i++){
//		for (int p = 0; p<n; p++){
//			scanf("%d", &a[i][p]);
//		}
//	}
//	for (int i = 0; i<m; i++){
//		for (int p = 0; p<n; p++){
//			scanf("%d", &b[i][p]);
//		}
//	}
//	for (int i = 0; i<m; i++){
//		for (int p = 0; p<n; p++){
//			if (a[i][p] == b[i][p]){
//				mark++;
//			}
//		}
//	}
//	printf("%.2lf\n", (double)mark / (n*m) * 100);
//	return 0;
//}