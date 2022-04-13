#define  _CRT_SECURE_NO_WARNINGS 1
#include "algorithm.h"
extern struct JOB job[20];//����һ�����ȫ�ֱ���
//������ļ�����
int readfile() {
	//���ļ�
	FILE* pf = fopen("info.txt", "r");
	if (pf == NULL) {
		perror("readfile::fopen");
		return;
	}
	//���ļ�
	
	//ѭ����ȡ�ļ�
	int i = 0;
	printf("��ҵ��    ��ҵ����ʱ��     ��ҵ��������Ҫʱ��\n");
	while (!feof(pf)) {//feof ����ļ��Ѿ�����Ϊ�����ļ�ĩβ�������ˣ��ͻ᷵�ط�0ֵ
		int ch = 0;
		fscanf(pf, "%c%d%d", &job[i].homname, &(job[i].arrtime), &(job[i].sertime));
		printf("%3c%12d%15d\n", job[i].homname, job[i].arrtime, job[i].sertime);
		getc(pf);//�Ե�ÿ�к���Ļ��з�
		i++;
	}
	printf("\n");
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return i;
	
}
//չʾ����
void show(ret) {
	printf("��ҵ��    ����ʱ��     ����ʱ��    ��ʼʱ��    ���ʱ��    ��תʱ��    ��Ȩ��תʱ��\n");
	for (int i = 0;i < ret;i++) {
		printf("%3c%12d%12d%12d%12d%12d%12.2f\n", job[i].homname, job[i].arrtime, job[i].sertime, job[i].strtime, job[i].fintime, job[i].wattime, job[i].tatime);
	}
	int allwattime = 0;//��תʱ��֮��
	float alltatime = 0;//��Ȩ��תʱ��֮��
	for (int i = 0; i < ret; i++){
		allwattime += job[i].wattime;
		alltatime  += job[i].tatime;
	}

	printf("\nƽ����ҵ��תʱ�䣺%0.2f ms", (float)allwattime / ret);
	printf("\nƽ����ҵ��Ȩ��תʱ�䣺%0.2f ms\n", alltatime / ret);
	printf("\n");
}
//�Զ���ȽϺ���
int comparestruct(const void* el1, const void* el2) {
	return ((struct JOB*)el1)->arrtime - ((struct JOB*)el2)->arrtime;
}
//����FCFS����
void FCFS(ret) {
	qsort(job, ret, sizeof(job[0]), comparestruct);//���յ���ʱ��Խṹ�������������
	for (int i = 0;i < ret;i++) {
		printf("�������ڵ��� %c ��ҵ\n", job[i].homname);
		if (i < ret - 1) {
			printf("��ʱ�󱻶���Ϊ:");
		}
		else {
			printf("�󱸶���Ϊ��!\n");
		}
		
		for (int j = i + 1;j < ret;j++) {
			printf("%c ", job[j].homname);
		}
		printf("�������!\n");
	}
	for (int i = 0;i < ret;i++) {
		//�������ʱ��
		if (i == 0) {
			job[i].fintime = job[i].arrtime + job[i].sertime;
		}
		else {
			job[i].fintime = job[i - 1].fintime + 1 + job[i].sertime;
		}
		//���㿪ʼʱ��
		if (i == 0) {
			job[0].strtime = 0;
		}
		else {
			job[i].strtime = job[i - 1].fintime + 1;
		}
		//������תʱ��
		job[i].wattime = job[i].fintime - job[i].arrtime;
		//�����Ȩ��תʱ��
		job[i].tatime = (float)job[i].wattime / job[i].sertime;
	
	}
	show(ret);
}

//����SJF����
void SJF(ret) {


}