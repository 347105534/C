//被5整除问题
//#include<stdio.h>
//int main(){
//	int M;
//	scanf("%d\n", &M);
//	if (M % 5 == 0){
//		printf("YES\n");
//	}if (M % 5 != 0){
//		printf("NO\n");
//	}
//	return 0;
//}

//计算y的值
//#include<stdio.h>
//int main(){
//	int x, y;
//	scanf("%d\n", &x);
//	if (x<0){
//		y = 1;
//		printf("%d\n", y);
//	}if (x == 0){
//		y = 0;
//		printf("%d\n", y);
//	}if (x>0){
//		y = -1;
//		printf("%d\n", y);
//	}
//	return 0;
//}

//包含数字9的数
//#include<stdio.h>
//int main(){
//	int mark = 0;
//	int a, b, c, d;
//	for (int i = 1; i <= 2019; i++){
//		a = i / 1000;
//		b = (i / 100) % 10;
//		c = (i % 100) / 10;
//		d = i % 10;
//		if (a == 9 || b == 9 || c == 9 || d == 9){
//			mark++;
//		}
//	}
//	printf("%d\n", mark);
//}

//奇偶统计
//#include<stdio.h>
//int main(){
//	int i = 0, j = 0, N;
//	scanf("%d\n", &N);
//	for (int n = 1; n <= N; n++){
//		if (n % 2 == 0){
//			i++;
//		}if (n % 2 != 0){
//			j++;
//		}
//	}
//	printf("%d %d\n", j, i);
//}

//统计成绩
//#include<stdio.h>
//#include<stdlib.h>
//float Max(float *p, int q){
//	float max;
//	for (int m = 0; m<q; m++){
//		max = p[m];
//		for (int n = 0; n<q - 1; n++){
//			if (max<p[n + 1]){
//				max = p[n + 1];
//			}
//		}
//	}
//	return max;
//}
//float Min(float *p, int q){
//	float min;
//	for (int m = 0; m<q; m++)
//	{
//		min = p[m];
//		for (int n = 0; n<q - 1; n++)
//		{
//			if (min>p[n])
//				min = p[n];
//		}
//	}
//	return  min;
//}
//float Ave(float *p, int q){
//	float sum = 0;
//	for (int i = 0; i<q; i++)
//	{
//		sum += p[i];
//	}
//	return sum / q;
//}
//int main(){
//	int n;
//	scanf("%d", &n);
//	float *a = (float *)malloc(n*sizeof(float));
//	for (int i = 0; i<n; i++){
//		scanf("%f ", &a[i]);
//	}
//	float max, min, ave;
//	max = Max(a, n);
//	min = Min(a, n);
//	ave = Ave(a, n);
//
//	printf("%.2f %.2f %.2f", max, min, ave);
//	return 0;
//}
