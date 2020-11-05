//判断元音还是辅音
//#include<stdio.h>
//int main(){
//	char ch;
//	while (scanf("%c\n", &ch) != EOF){
//		if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u'){
//			printf("Vowel\n");
//		}
//		else{
//			printf("Consonant\n");
//		}
//	}
//	return 0;
//}

//判断是不是字母
//#include<stdio.h>
//int main(){
//	char ch;
//	while (scanf("%c\n", &ch) != EOF){
//		if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z')){
//			printf("%c is an alphabet.\n", ch);
//		}
//		else{
//			printf("%c is not an alphabet.\n", ch);
//		}
//	}
//	return 0;
//}

//字母大小写转换
//#include<stdio.h>
//int main(){
//	char ch;
//	while (scanf("%c\n", &ch) != EOF){
//		if (ch >= 'a'&&ch <= 'z'){
//			ch -= 32;
//			printf("%c\n", ch);
//			continue;
//		}if (ch >= 'A'&&ch <= 'Z'){
//			ch += 32;
//			printf("%c\n", ch);
//			continue;
//		}
//	}
//	return 0;
//}

//判断两个数的大小关系
//#include<stdio.h>
//int main(){
//	int a, b;
//	while (scanf("%d %d\n", &a, &b) != EOF){
//		if (a>b){
//			printf("%d>%d\n", a, b);
//		}if (a<b){
//			printf("%d<%d\n", a, b);
//		}if (a == b){
//			printf("%d=%d\n", a, b);
//		}
//	}
//	return 0;
//}

//计算单位阶跃函数
//#include<stdio.h>
//int main(){
//	int t;
//	while (scanf("%d\n", &t) != EOF){
//		if (t>0){
//			printf("1\n");
//		}if (t<0){
//			printf("0\n");
//		}if (t == 0){
//			printf("0.5\n");
//		}
//	}
//	return 0;
//}

//三角形判断
//#include<stdio.h>
//int main(){
//	int a, b, c;
//	while (scanf("%d %d %d\n", &a, &b, &c) != EOF){
//		if (a == b&&b == c){
//			printf("Equilateral triangle!\n");
//			continue;
//		}if ((a == b && (a + b)>c) || (a == c && (a + c)>b) || (b == c && (b + c>a))){
//			printf("Isosceles triangle!\n");
//			continue;
//		}if ((a + b)>c && (a + c)>b && (b + c)>a){
//			printf("Ordinary triangle!\n");
//		}
//		else{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}

//衡量人体肥胖程度
//#include<stdio.h>
//int main(){
//	double a, b, bmi;
//	while (scanf("%lf %lf\n", &a, &b) != EOF){
//		bmi = a / ((b / 100)*(b / 100));
//		if (bmi<18.5){
//			printf("Underweight\n");
//		}if (bmi >= 18.5&&bmi <= 23.9){
//			printf("Normal\n");
//		}if (bmi>23.9&&bmi <= 27.9){
//			printf("Overweight\n");
//		}if (bmi>27.9){
//			printf("Obese\n");
//		}
//	}
//	return 0;
//}

//计算一元二次方程
//#include<stdio.h>
//#include<math.h>
//int main(){
//	double a, b, c, x1, x2, d, s, x;
//	while (scanf("%lf %lf %lf\n", &a, &b, &c) != EOF){
//		if (a != 0){
//			d = b*b - 4 * a*c;
//			s = -b / (2 * a);
//			x = (sqrt(-d)) / (2 * a);
//			if (d == 0){
//				printf("x1=x2=%.2f\n", s);
//			}if (d>0){
//				printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(d)) / (2 * a), (-b + sqrt(d)) / (2 * a));
//			}if (d<0){
//				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", s, x, s, x);
//			}
//		}
//		else
//		{
//			printf("Not quadratic equation\n");
//		}
//
//	}
//	return 0;
//}

//获得月份天数
//#include<stdio.h>
//int main(){
//	int y, m;
//	while (scanf("%d %d\n", &y, &m) != EOF){
//		int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//		if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)){
//			days[2] = 29;
//			printf("%d\n", days[m]);
//		}
//		else{
//			printf("%d\n", days[m]);
//		}
//	}
//	return 0;
//}

//简单计算机
//#include<stdio.h>
//int main(){
//	double a, b, c;
//	char ch;
//	while (scanf("%lf%c%lf", &a, &ch, &b) != EOF){
//		getchar();
//		switch (ch){
//		case('+') :
//			c = a + b;
//			printf("%.4f+%.4f=%.4f\n", a, b, c);
//			break;
//		case('-') :
//			c = a - b;
//			printf("%.4f-%.4f=%.4f\n", a, b, c);
//			break;
//		case('*') :
//			c = a*b;
//			printf("%.4f*%.4f=%.4f\n", a, b, c);
//			break;
//		case('/') :
//			if (b == 0){
//				printf("Wrong!Division by zero!");
//				break;
//			}
//			else{
//				c = a / b;
//				printf("%.4f/%.4f=%.4f\n", a, b, c);
//				break;
//			}
//		default:
//			printf("Invalid operation!");
//			break;
//		}
//	}
//	return 0;
//}

//正方形图案
//#include<stdio.h>
//int main(){
//	int a;
//	while (scanf("%d\n", &a) != EOF){
//		for (int i = 1; i <= a; ++i){
//			for (int m = 1; m <= a; ++m){
//				printf("* ");
//			}
//			printf("\n");
//		}
//
//	}
//
//}

//直角三角形图案
//#include<stdio.h>
//int main(){
//	int a;
//	while (scanf("%d\n", &a) != EOF){
//		for (int m = 1; m <= a; ++m){
//			for (int n = 1; n <= m; ++n){
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//反转直角三角形图案
//#include<stdio.h>
//int main(){
//	int a;
//	while (scanf("%d\n", &a) != EOF){
//		for (int m = 1; m <= a; ++m){
//			for (int n = 0; n <= a - m; ++n){
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//带空格直角三角形图案
//#include<stdio.h>
//int main(){
//	int a;
//	while (scanf("%d\n", &a) != EOF){
//		for (int i = 1; i <= a; i++){
//			for (int m = 1; m <= a - i; m++){
//				printf("  ");
//			}for (int n = 1; n <= i; n++){
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

