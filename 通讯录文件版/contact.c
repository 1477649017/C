#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//����ʵ��
//��ʼ������ʵ��
//void init(contact* pc) {
//	assert(pc);
//	pc->lim_size = size_max;//size_max�����ͨ��¼�ܴ洢���������
//	pc->sz = 0;
//	pc->date = (perinfo*)malloc(pc->lim_size * sizeof(perinfo));//malloc����ռ䣬���ռ��ַ������ϵ�˵Ľṹ��ָ��
//	if (pc->date == NULL) {
//		perror("init::malloc");//���malloc���ؿ�ָ�����ǿ���ʧ��
//		return;
//	}
//	memset(pc->date, 0, pc->lim_size * sizeof(perinfo));//�����ٵĿռ��ʼ��Ϊ0
//}

//������麯��
void check_capacity(contact* pc) {
	if (pc->sz == pc->lim_size) {
		perinfo* tmp = (perinfo*)realloc(pc->date, (pc->lim_size + 2) * sizeof(perinfo));
		if (tmp != NULL) {
			printf("���ݳɹ�!\n");
			pc->date = tmp;
			pc->lim_size += 2;
		}
		else {
			perror("check_capacity::realloc");
		}
	}
}
void LOADcontact(contact* pc) {
	assert(pc);
	//���ļ�
	FILE* pf = fopen("contact.txt", "rb");
	if (pf == NULL) {
		perror("LOADcontact::fopen");
		return;
	}
	//���ļ�
	perinfo tmp = { 0 };//����һ���м�ṹ������ʱ�������
	while (fread(&tmp, sizeof(perinfo), 1, pf)) {//ÿ��������������һ�����ݣ����������û�����ݶ�ʱ���ͻ᷵��ʵ�ʶ��ĸ���0
		check_capacity(pc);
		pc->date[pc->sz] = tmp;
		pc->sz++;
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}

//��ʼ������ʵ��(�ļ���ȡ��)
void init(contact* pc) {
	assert(pc);
	pc->lim_size = size_max;//size_max�����ͨ��¼�ܴ洢���������
	pc->sz = 0;
	pc->date = (perinfo*)malloc(pc->lim_size * sizeof(perinfo));//malloc����ռ䣬���ռ��ַ������ϵ�˵Ľṹ��ָ��
	if (pc->date == NULL) {
		perror("init::malloc");//���malloc���ؿ�ָ�����ǿ���ʧ��
		return;
	}
	memset(pc->date, 0, pc->lim_size * sizeof(perinfo));//�����ٵĿռ��ʼ��Ϊ0

	//�����ļ���Ϣ
	LOADcontact(pc);
}


//����ͨ��¼
void DELcontact(contact* pc) {
	free(pc->date);
	pc->date = NULL;
	pc->lim_size = 0;
	pc->sz = 0;
	printf("������!\n");
}



//ע�⣬��Ϊ��̬���õ������飬���Ա����˺ܶ�[]�ķ��ʷ�ʽ�����Ƕ��ڶ�̬�����Ҳ�����õģ���Ϊ��̬��ʹ�õ���ָ�룬�±���൱�ڵ�ַƫ����
//����[]�ķ�ʽ���ʾ��Ǽ���ƫ������������
//��Ӻ���
void ADDinfo(contact* pc) {
	assert(pc);
	check_capacity(pc);//������麯�������˾�����
	printf("��������ϵ������>>\n");
	scanf("%s", pc->date[pc->sz].name);
	printf("��������ϵ������>>\n");
	scanf("%d", &(pc->date[pc->sz].age));//����Ҫע�⣬��Ϊ�������Զ���������洢�ģ��������������ǵ�ַ����age����Ҫȡ��ַ���е�
	printf("��������ϵ���Ա�>>\n");
	scanf("%s", pc->date[pc->sz].sex);
	printf("��������ϵ�˵绰>>\n");
	scanf("%s", pc->date[pc->sz].phone);
	printf("��������ϵ�˵�ַ>>\n");
	scanf("%s", pc->date[pc->sz].address);

	pc->sz++;
	printf("��ӳɹ�!\n");
	return;
}

//���Һ���
int ser_byname(const contact* pc, char* sername) {
	assert(pc);
	for (int i = 0;i < pc->sz;i++) {
		if (0 == strcmp(pc->date[i].name, sername)) {
			return i;//�ҵ��˾ͷ����±�
		}
	}
	return -1;//�����Ҳ����ͷ���-1
}

//ɾ������
void DELinfo(contact* pc) {
	assert(pc);
	if (pc->sz == 0) {
		printf("ͨ��¼�Ѿ�Ϊ�գ��޷�ɾ��!");
		return;
	}
	//1,���ҵ�
	char delname[name_max] = { 0 };
	printf("��������Ҫɾ������ϵ�˵�����>>\n");
	scanf("%s", &delname);
	int ret = ser_byname(pc, delname);
	if (ret == -1) {
		printf("���޴��ˣ��޷�����ɾ��!\n");
		return;
	}
	//2��ɾ��
	for (int j = ret;j < (pc->sz - 1);j++) {
		pc->date[j] = pc->date[j + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�!\n");
}

//��ӡ����
void PRINTinfo(const contact* pc) {
	assert(pc);
	printf("%-10s %-10s %-10s %-12s %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (int i = 0;i < pc->sz;i++) {
		printf("%-10s %-10d %-10s %-12s %-20s\n", pc->date[i].name, pc->date[i].age, pc->date[i].sex, pc->date[i].phone, pc->date[i].address);
	}

}

//���Һ���
void SERinfo(const contact* pc) {
	assert(pc);
	//1,���ҵ�
	char sername[name_max] = { 0 };
	printf("��������Ҫ���ҵ���ϵ�˵�����>>\n");
	scanf("%s", &sername);
	int ret = ser_byname(pc, sername);//����֮ǰ�Ĳ��Һ����õ��±�
	//2�����
	if (-1 == ret) {
		printf("�Բ��𣬲��޴���!\n");
		return;
	}
	else {
		printf("���ҵ����������Ϣ>>\n");
		printf("%-10s %-10s %-10s %-12s %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-10s %-10d %-10s %-12s %-20s\n", pc->date[ret].name, pc->date[ret].age, pc->date[ret].sex, pc->date[ret].phone, pc->date[ret].address);
	}
	return;
}

//�޸ĺ���
void MODinfo(contact* pc) {
	assert(pc);
	//1,���ҵ�
	char modname[name_max] = { 0 };
	printf("��������Ҫ�޸ĵ���ϵ�˵��˵�����>>\n");
	scanf("%s", &modname);
	int ret = ser_byname(pc, modname);//����֮ǰ�Ĳ��Һ����õ��±�
	//2���޸�
	if (-1 == ret) {
		printf("�Բ����޷��޸ģ���ͨ��¼���޴���!\n");
		return;
	}
	else {
		printf("�������޸ĺ����ϵ������>>\n");
		scanf("%s", pc->date[ret].name);
		printf("�������޸ĺ����ϵ������>>\n");
		scanf("%d", &(pc->date[ret].age));
		printf("�������޸ĺ����ϵ���Ա�>>\n");
		scanf("%s", pc->date[ret].sex);
		printf("�������޸ĺ����ϵ�˵绰>>\n");
		scanf("%s", pc->date[ret].phone);
		printf("�������޸ĺ����ϵ�˵�ַ>>\n");
		scanf("%s", pc->date[ret].address);
		printf("�޸ĳɹ�!\n");
	}
	return;
}

//�Զ���ȽϺ���
int comparestu(const void* e1, const void* e2) {
	return ((struct perinfo*)e1)->age - ((struct perinfo*)e2)->age;//��������Ϊ�Ƚ϶���
}

//������
void SORTinfo(contact* pc) {
	//������������ǿ�����qsort��ʵ��
	qsort(pc->date, pc->sz, sizeof(pc->date[0]), comparestu);
	printf("������ϣ���ʹ�ô�ӡ�鿴!\n");
}

//���溯��
void SAVEcontact(const contact* pc) {
	assert(pc);
	//�����Ʒ�ʽ���ļ�
	FILE* pf = fopen("contact.txt", "wb");
	if (pf == NULL) {
		perror("SAVEcontact::fopen");
		return;
	}
	//д�ļ�
	for (int i = 0;i < pc->sz;i++) {
		fwrite(pc->date+i, sizeof(perinfo), 1, pf);
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}