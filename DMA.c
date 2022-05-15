#define  _CRT_SECURE_NO_WARNINGS 1
#include "DMA.h";
extern struct  freeMemory memory[N];
extern struct  Job job[N];
extern int n1;
extern int n2;
extern int initMemory;
extern int osMemory;

//������غ����ľ���ʵ��
void start() {
	n1 = 1;//��ʼ���з�������Ϊ1
	n2 = 0;//��ʼ��ҵ����Ϊ0
	initMemory = 640;
	osMemory = 64;
	memory[0].start = osMemory;
	memory[0].end = initMemory;
	memory[0].len = memory[0].end - memory[0].start;
	memory[0].status = 0;
}

void requireMemo(char  name, int  require) {
	//��ʼ����ռ�
	job[n2].name = name;
	if (n2 == 0) {
		job[n2].start = memory[0].start;
	}
	else {
		job[n2].start = job[n2-1].end;
	}
	job[n2].len = require;
	job[n2].end = job[n2].start + require;
	n2++;
	//��ҵװ��󣬸���һ�¿��з���
	if (n2 == 1) {
		memory[n1].start = memory[0].start + require;
	}
	else {
		memory[n1].start = job[n2 - 1].end;
	}
	
	memory[n1].end = initMemory;
	memory[n1].len = memory[n1].end - memory[n1].start;
	memory[n1].status = 0;
}

void freeMemo(char name) {
	for (int i = 0;i <= n2;i++) {
		if (job[i].name == name) {
			tmp = i;
			break;
		}
	}
	n1++;
	memory[n1].start = job[tmp].start;
	memory[n1].end = job[tmp].end;
	memory[n1].len = job[tmp].len;
	memory[n1].status = 0;



}

void past(int  time) {
	Sleep(time * 1000);//ģ�⾭���೤ʱ��
}

void printfreemem() {
	for (int i = 1;i <= n1;i++) {
		printf("���з�����ʼ��ַ:%d k ������ַ:%d k ��������:%d k ״̬:%d \n", memory[i].start, memory[i].end, memory[i].len, memory[i].status);
	}
	
	
}
