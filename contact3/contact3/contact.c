#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

static int check_capacity(struct Contact* pc);

void LoadContact(struct Contact* pc)
{
	//���ļ�
	FILE*pfR=fopen("data.txt", "rb");
	if (pfR == NULL)
	{
		perror("LoadContact::fopen");
		return;
	}
	//���ļ�
	struct PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfR))
	{
		//������������������
		check_capacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
	


	//�ر��ļ�
	fclose(pfR);
	pfR = NULL;
}

void InitContact(struct Contact* pc)
{
	assert(pc);
	pc->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (pc->data == NULL)
	{
		perror("InitContact()");
		return;
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	//�����ļ��е���Ϣ��ͨѶ¼��
	LoadContact(pc);

}

void DestroyContact(struct Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}

static int check_capacity(struct Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		//��������
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("���ݳɹ�\n");
			return 1;
		}
		else
		{
			perror("AddContact()");
			return 0;
		}
	}
	else
		return 1;
}

void AddContact(struct Contact* pc)
{
	assert(pc);
	if (check_capacity(pc) == 0)
	{
		return;
	}

	//�����˵�����
	printf("���������֣�>");
	scanf("%s", pc->data[pc->sz].name);
	printf("�������Ա�>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰��>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("���������䣺>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������ַ��>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("�ɹ�������ϵ��\n");
}

void ShowContact(struct Contact* pc)
{
	assert(pc);

	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5s\t%-5d\t%-12s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

int FindByName(struct Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DelContact(struct Contact* pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("������Ҫɾ���˵����֣�>");
	scanf("%s", name);
	//����һ��ָ�����Ƿ����
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ��
		int j = 0;
		for (j = ret; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("�ɹ�ɾ��ָ����ϵ��\n");
	}
}

void SearchContact(struct Contact* pc)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ��˵����֣�>");
	scanf("%s", name);
	//����һ��ָ�������Ƿ����
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%-20s\t%-5s\t%-5d\t%-12s\t%-30s\n", pc->data[ret].name,
			pc->data[ret].sex,
			pc->data[ret].age,
			pc->data[ret].tele,
			pc->data[ret].addr);
	}
}

void ModifyContact(struct Contact* pc)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ��˵����֣�>");
	scanf("%s", name);
	//����һ��ָ�������Ƿ����
	int ret = FindByName(pc, name);
	if (ret == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[ret].name);
		printf("�������Ա�:>");
		scanf("%s", pc->data[ret].sex);
		printf("����������:>");
		scanf("%d", &(pc->data[ret].age));
		printf("������绰:>");
		scanf("%s", pc->data[ret].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[ret].addr);

		printf("�޸ĳɹ�\n");
	}
}

int CmpByAge(const void* e1, const void* e2)
{
	return(((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age);
}

void SortContact(struct Contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpByAge);
}

void SaveContact(struct Contact* pc)
{
	//���ļ�
	FILE*pfw = fopen("data.txt", "wb");
	if (pfw == NULL)
	{
		perror("SaveContact::fopen");
		return;
	}
	//д�ļ�
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(struct PeoInfo), 1, pfw);
	}

	//�ر��ļ�
	fclose(pfw);
	pfw = NULL;
}