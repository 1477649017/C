#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int is_leapyear(int year) {
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//        return 29;
//    }
//    else {
//        return 28;
//    }
//}
//int main() {
//    int year = 0;
//    int month = 0;
//    while (scanf("%d%d", &year, &month) != EOF) {
//        switch (month) {
//        case 1:
//            printf("31\n");
//            break;
//        case 2:
//            printf("%d\n", is_leapyear(year));
//            break;
//        case 3:
//            printf("31\n");
//            break;
//        case 4:
//            printf("30\n");
//            break;
//        case 5:
//            printf("31\n");
//            break;
//        case 6:
//            printf("30\n");
//            break;
//        case 7:
//            printf("31\n");
//            break;
//        case 8:
//            printf("31\n");
//            break;
//        case 9:
//            printf("30\n");
//            break;
//        case 10:
//            printf("31\n");
//            break;
//        case 11:
//            printf("30\n");
//            break;
//        case 12:
//            printf("31\n");
//            break;
//        }
//
//    }
//
//
//}


//#include<math.h>
//int main() {
//    for (int i = 10000;i < 100000;i++) {
//        int sum = 0;
//        int tmp = i;
//        for (int j = 1; j < 5;j++) {
//            int part1 = tmp % (int)pow(10, j);
//            int part2 = tmp / (int)pow(10, j);
//            sum += part1 * part2;
//        }
//        if (sum == tmp) {
//            printf("%d ", tmp);
//        }
//
//    }
//    return 0;
//}

//#include<stdio.h>
//int main() {
//    int level = 0;
//    while (scanf("%d", &level) != EOF) {
//        for (int i = 0;i < level;i++) {
//            for (int j = 0;j < level;j++) {
//                if (i == j || j == level -1 - i) {
//                    printf("*");
//                }
//                else {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int compare(const char* e1, const char* e2) {
//    return (*(int*)e1) - (*(int*)e2);
//}
//
//
//int main() {
//    int  n = 0;
//    int  m = 0;
//    scanf("%d%d", &n, &m);
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    int arr3[1000] = { 0 };
//    for (int i = 0;i < n;i++) {
//        scanf("%d", arr1 + i);
//    }
//    for (int i = 0;i < m;i++) {
//        scanf("%d", arr2 + i);
//    }
//
//    for (int i = 0;i < n;i++) {
//        arr3[i] = arr1[i];
//    }
//    for (int i = n;i < n + m;i++) {
//        arr3[i] = arr2[i - n];
//    }
//    qsort(arr3, n + m, 4, compare);
//    for (int i = 0;i < n + m;i++) {
//        printf("%d ", arr3[i]);
//    }
//    return 0;
//}

//�������
//1
//1 1
//1 2 1
//1 3 3 1
//����
//int main() {
//	int arr[10][10] = { 0 };
//	for (int i = 0;i < 10;i++) {
//		for (int j = 0;j <= i;j++) {
//			if (j == 0 || j == i) {
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1) {
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//int main() {
//	for (char killer = 'a';killer < 'd';killer++) {
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3) {
//			printf("ɱ���� %c\n", killer);
//			break;
//		}
//	}
//
//	return 0;
//}

//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//int main() {
//	for (int a = 1;a <= 5;a++) {
//		for (int b = 1;b <= 5;b++) {
//			for (int c = 1;c <= 5;c++) {
//				for (int d = 1;d <= 5;d++) {
//					for (int e = 1;e <= 5;e++) {
//						if ((b == 2) + (a == 3) == 1 && (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1 && (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1) {
//							if (a * b * c * d * e == 120) {
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//}
