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


//����FCFS����
void FCFS(ret) {
	struct JOB job1[20] = { 0 };
	memmove(job1, job, sizeof(job));
	for (int i = 0;i < ret;i++) {
		printf("�������ڵ��� %c ��ҵ\n", job1[i].homname);
		if (i < ret - 1) {
			printf("��ʱ�󱻶���Ϊ:");
		}
		else {
			printf("�󱸶���Ϊ��!\n");
		}
		
		for (int j = i + 1;j < ret;j++) {
			printf("%c ", job1[j].homname);
		}
		printf("\n");
	}
	printf("������ɣ�������ȸ����׶�ʱ����ϸ��������:\n");
	for (int i = 0;i < ret;i++) {
		//�������ʱ��
		if (i == 0) {
			job1[i].fintime = job1[i].arrtime + job1[i].sertime;
		}
		else {
			job1[i].fintime = job1[i - 1].fintime + 1 + job1[i].sertime;
		}
		//���㿪ʼʱ��
		if (i == 0) {
			job1[0].strtime = 0;
		}
		else {
			job1[i].strtime = job1[i - 1].fintime + 1;
		}
		//������תʱ��
		job1[i].wattime = job1[i].fintime - job1[i].arrtime;
		//�����Ȩ��תʱ��
		job1[i].tatime = (float)job1[i].wattime / job1[i].sertime;
	
	}
	
	//���չʾ
	printf("��ҵ��    ����ʱ��     ����ʱ��    ��ʼʱ��    ���ʱ��    ��תʱ��    ��Ȩ��תʱ��\n");
	for (int i = 0;i < ret;i++) {
		printf("%3c%12d%12d%12d%12d%12d%12.2f\n", job1[i].homname, job1[i].arrtime, job1[i].sertime, job1[i].strtime, job1[i].fintime, job1[i].wattime, job1[i].tatime);
	}
	int allwattime = 0;//��תʱ��֮��
	float alltatime = 0;//��Ȩ��תʱ��֮��
	for (int i = 0; i < ret; i++) {
		allwattime += job1[i].wattime;
		alltatime += job1[i].tatime;
	}

	printf("\nƽ����ҵ��תʱ�䣺%0.2f ms", (float)allwattime / ret);
	printf("\nƽ����ҵ��Ȩ��תʱ�䣺%0.2f ms\n", alltatime / ret);
	printf("\n");

}

//����SJF����
void SJF(ret) {
	struct JOB job2[20] = {0};
	memmove(job2, job, sizeof(job));
	for (int i = 0;i < ret;i++) {
		//�����ȼ������������ҵ�ĵ���ʱ���ǲ���һ���ģ������һ���ģ�����Ҫ���з���ʱ��ıȽ���
		if (job2[i].arrtime == job2[i + 1].arrtime) {
			if (job2[i].sertime > job2[i + 1].sertime) {
				struct JOB tmp = job2[i];
				job2[i] = job2[i + 1];
				job2[i + 1] = tmp;
			}
		}
		//�������ʱ��
		if (i == 0) {
			job2[i].fintime = job2[i].arrtime + job2[i].sertime;
		}
		else {
			job2[i].fintime = job2[i - 1].fintime + 1 + job2[i].sertime;
		}
		//���㿪ʼʱ��
		if (i == 0) {
			job2[0].strtime = 0;
		}
		else {
			job2[i].strtime = job2[i - 1].fintime + 1;
		}
		//������תʱ��
		job2[i].wattime = job2[i].fintime - job2[i].arrtime;
		//�����Ȩ��תʱ��
		job2[i].tatime = (float)job2[i].wattime / job2[i].sertime;
	}

	for (int i = 0;i < ret;i++) {
		printf("�������ڵ��� %c ��ҵ\n", job2[i].homname);
		if (i < ret - 1) {
			printf("��ʱ�󱻶���Ϊ:");
		}
		else {
			printf("�󱸶���Ϊ��!\n");
		}

		for (int j = i + 1;j < ret;j++) {
			printf("%c ", job2[j].homname);
		}
		printf("\n");
	}
	printf("������ɣ�������ȸ����׶�ʱ����ϸ��������:\n");
	//���չʾ
	printf("��ҵ��    ����ʱ��     ����ʱ��    ��ʼʱ��    ���ʱ��    ��תʱ��    ��Ȩ��תʱ��\n");
	for (int i = 0;i < ret;i++) {
		printf("%3c%12d%12d%12d%12d%12d%12.2f\n", job2[i].homname, job2[i].arrtime, job2[i].sertime, job2[i].strtime, job2[i].fintime, job2[i].wattime, job2[i].tatime);
	}
	int allwattime = 0;//��תʱ��֮��
	float alltatime = 0;//��Ȩ��תʱ��֮��
	for (int i = 0; i < ret; i++) {
		allwattime += job2[i].wattime;
		alltatime += job2[i].tatime;
	}

	printf("\nƽ����ҵ��תʱ�䣺%0.2f ms", (float)allwattime / ret);
	printf("\nƽ����ҵ��Ȩ��תʱ�䣺%0.2f ms\n", alltatime / ret);
	printf("\n");

}

//����HRRN����
void HRRN(ret) {
	struct JOB job3[20] = { 0 };
	memmove(job3, job, sizeof(job));
	
	int a = ret-1;
	int past = 0;
	for (int i = 0;i < ret;i++) {
		//������Ӧ�ȣ������һ����ҵ�����ʱ����Ϊ��׼
		float Responseratio[6] = { 0 };
		float max = 0;
		for (int j = 0;j < ret;j++) {
			if (job3[j].strtime == 0) {
				if (i == 0) {
					Responseratio[j] = (job3[a].arrtime - job3[j].arrtime + job3[j].sertime) / (float)job3[j].sertime;
				}
				else {
					Responseratio[j] = (job3[a].fintime - job3[j].arrtime + job3[j].sertime) / (float)job3[j].sertime;
				}
			}
			if (Responseratio[j] > max) {
				max = Responseratio[j];
			}
		}
		
		for (int j = 0;j < ret;j++) {
			if (max == Responseratio[j]) {
				a = j;
			}
		}
		//��Ӧ����ߵĿ�ʼִ��
		int tmp = a;
		if (i == 0) {
			job3[tmp].strtime = job3[ret - 1].arrtime + 1;
		}
		else {
			job3[tmp].strtime = job3[past].fintime + 1;
		}
		
		job3[tmp].fintime = job3[tmp].strtime + job3[tmp].sertime;
		//������תʱ��
		job3[tmp].wattime = job3[tmp].fintime - job3[tmp].arrtime;
		//�����Ȩ��תʱ��
		job3[tmp].tatime = (float)job3[tmp].wattime / job3[tmp].sertime;
		past = a;
		printf("�������ڵ��� %c ��ҵ\n", job3[a].homname);
		if (i < ret - 1) {
			printf("��ʱ�󱻶���Ϊ:");
		}
		else {
			printf("�󱸶���Ϊ��!\n");
		}
		for (int j = 0;j < ret;j++) {
			if (job3[j].strtime == 0) {
				printf("%c ", job3[j].homname);
			}
		}
		printf("\n");
	}

	printf("������ɣ�������ȸ����׶�ʱ����ϸ��������:\n");
	//���չʾ
	printf("��ҵ��    ����ʱ��     ����ʱ��    ��ʼʱ��    ���ʱ��    ��תʱ��    ��Ȩ��תʱ��\n");
	for (int i = 0;i < ret;i++) {
		printf("%3c%12d%12d%12d%12d%12d%12.2f\n", job3[i].homname, job3[i].arrtime, job3[i].sertime, job3[i].strtime, job3[i].fintime, job3[i].wattime, job3[i].tatime);
	}
	int allwattime = 0;//��תʱ��֮��
	float alltatime = 0;//��Ȩ��תʱ��֮��
	for (int i = 0; i < ret; i++) {
		allwattime += job3[i].wattime;
		alltatime += job3[i].tatime;
	}

	printf("\nƽ����ҵ��תʱ�䣺%0.2f ms", (float)allwattime / ret);
	printf("\nƽ����ҵ��Ȩ��תʱ�䣺%0.2f ms\n", alltatime / ret);
	printf("\n");

}