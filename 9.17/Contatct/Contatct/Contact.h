#pragma once
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#define NAME 20
#define GENDER 5
#define TEL 12
#define MAX 10
typedef struct member
{
	char name[NAME];
	char gender[GENDER];
	int age;
	char tel[TEL];
}member;
typedef struct Contact
{
	member* data;
	int size;
	int capacity;
}Contact, *p;
void InitContact(p pc);
void AddContact(p pc);
int CheckCapacity(p pc);
void DelContact(p pc);
void SearchContact(p pc);
int FindContact(p pc, char* name);
void ModifyContact(p pc);
void SortContact(p pc);
void ShowContact(p pc);
//void LoadData(p pc);
//void SaveData(p pc);