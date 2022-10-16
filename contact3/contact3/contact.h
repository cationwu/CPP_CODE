#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#define DEFAULT_SZ 3
#define INC_SZ 2

//表示人信息
struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char addr[MAX_ADDR];
};

//通讯录
struct Contact
{
	struct PeoInfo* data;//指向了存放数据的空间
	int sz;//已经放进去的信息
	int capacity;//容量
};

//初始化通讯录
void InitContact(struct Contact* pc);

//增加人的信息到通讯录
void AddContact(struct Contact* pc);

//显示通讯录中的信息
void ShowContact(struct Contact* pc);

//删除指定联系人
void DelContact(struct Contact* pc);

//查找指定联系人
void SearchContact(struct Contact* pc);

//修改指定联系人信息
void ModifyContact(struct Contact* pc);

//排序通讯录中的信息-按年龄
void SortContact(struct Contact* pc);

//销毁通讯录
void DestroyContact(struct Contact* pc);

//保存通讯录
void SaveContact(struct Contact* pc);

//加载文件的信息到通讯录
void LoadContact(struct Contact* pc);