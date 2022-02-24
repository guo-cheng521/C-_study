#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAXSIZE 20
typedef int ElemType;
typedef struct
{
	ElemType data[MAXSIZE];
	int length;
}Sqlist;
typedef int status;

status visit(ElemType c)
{
	printf("%d ", c);
	return 1;
}

status InitList(Sqlist* L)
{
	L->length = 0;
	return 1;
}

status ListEmpty(Sqlist L)
{
	if (L.length == 0)
		return 1;
	else
		return 0;
}

status ClearList(Sqlist* L)
{
	L->length = 0;
	return 1;
}

int ListLength(Sqlist L)
{
	return L.length;
}

status GetElem(Sqlist L, int i, ElemType* e)
{
	if (L.length == 0 || i<1 || i>L.length)
		return 0;
	*e = L.data[i - 1];
	return 1;
}

int LocateElem(Sqlist L, ElemType e)
{
	int i;
	if (L.length == 0)
		return 0;
	for (i = 0; i < L.length; i++)
	{
		if (L.data[i] == e)
			break;
	}
	if (i > L.length)
		return 0;
	return i + 1;
}

status ListInsert(Sqlist* L, int i, ElemType e)
{
	int k;
	if (L->length == MAXSIZE)  /* ˳�����Ա��Ѿ��� */
		return 0;
	if (i<1 || i>L->length + 1)/* ��i�ȵ�һλ��С���߱����һλ�ú�һλ�û�Ҫ��ʱ */
		return 0;

	if (i <= L->length)        /* ����������λ�ò��ڱ�β */
	{
		for (k = L->length - 1; k >= i - 1; k--)  /* ��Ҫ����λ��֮�������Ԫ������ƶ�һλ */
			L->data[k + 1] = L->data[k];
	}
	L->data[i - 1] = e;          /* ����Ԫ�ز��� */
	L->length++;

	return 1;
}

status ListDelete(Sqlist* L, int i, ElemType* e)
{
	int k;
	if (L->length == 0)               /* ���Ա�Ϊ�� */
		return 0;
	if (i<1 || i>L->length)         /* ɾ��λ�ò���ȷ */
		return 0;
	*e = L->data[i - 1];
	if (i < L->length)                /* ���ɾ���������λ�� */
	{
		for (k = i; k < L->length; k++)/* ��ɾ��λ�ú��Ԫ��ǰ�� */
			L->data[k - 1] = L->data[k];
	}
	L->length--;
	return 1;
}

status ListTraverse(Sqlist L)
{
	int i;
	for (i = 0; i < L.length; i++)
		visit(L.data[i]);
	printf("\n");
	return 1;
}

void unionL(Sqlist* La, Sqlist Lb)
{
	int La_len, Lb_len, i;
	ElemType e;                        /*������La��Lb��ͬ������Ԫ��e*/
	La_len = ListLength(*La);            /*�����Ա�ĳ��� */
	Lb_len = ListLength(Lb);
	for (i = 1; i <= Lb_len; i++)
	{
		GetElem(Lb, i, &e);              /*ȡLb�е�i������Ԫ�ظ���e*/
		if (!LocateElem(*La, e))        /*La�в����ں�e��ͬ����Ԫ��*/
			ListInsert(La, ++La_len, e); /*����*/
	}
}

int main()
{
	Sqlist L;
	Sqlist Lb;

	ElemType e;
	status i;
	int j, k;
	i = InitList(&L);
	printf("��ʼ���ɹ�L��L.length=%d\n", L.length);
	for (j = 1; j <= 5; j++)
		i = ListInsert(&L, 1, j);
	printf("��L�ı�ͷ���β���1��5��L.data=");
	ListTraverse(L);

	printf("L.length=%d \n", L.length);
	i = ListEmpty(L);
	printf("L�Ƿ�գ�i=%d(1:�� 0:��)\n", i);

	i = ClearList(&L);
	printf("���L��L.length=%d\n", L.length);
	i = ListEmpty(L);
	printf("L�Ƿ�գ�i=%d(1:�� 0:��)\n", i);

	for (j = 1; j <= 10; j++)
		ListInsert(&L, j, j);
	printf("��L�ı�β���β���1��10��L.data=");
	ListTraverse(L);

	printf("L.length=%d \n", L.length);

	ListInsert(&L, 1, 0);
	printf("��L�ı�ͷ����0��L.data=");
	ListTraverse(L);
	printf("L.length=%d \n", L.length);

	GetElem(L, 5, &e);
	printf("��5��Ԫ�ص�ֵΪ��%d\n", e);
	for (j = 3; j <= 4; j++)
	{
		k = LocateElem(L, j);
		if (k)
			printf("��%d��Ԫ�ص�ֵΪ%d\n", k, j);
		else
			printf("û��ֵΪ%d��Ԫ��\n", j);
	}


	k = ListLength(L); /* kΪ�� */
	for (j = k + 1; j >= k; j--)
	{
		i = ListDelete(&L, j, &e); /* ɾ����j������ */
		if (i == 0)
			printf("ɾ����%d������ʧ��\n", j);
		else
			printf("ɾ����%d����Ԫ��ֵΪ��%d\n", j, e);
	}
	printf("�������L��Ԫ�أ�");
	ListTraverse(L);

	j = 5;
	ListDelete(&L, j, &e); /* ɾ����5������ */
	printf("ɾ����%d����Ԫ��ֵΪ��%d\n", j, e);

	printf("�������L��Ԫ�أ�");
	ListTraverse(L);

	//����һ����10������Lb
	i = InitList(&Lb);
	for (j = 6; j <= 15; j++)
		i = ListInsert(&Lb, 1, j);

	unionL(&L, Lb);

	printf("��������ϲ���Lb��L��Ԫ�أ�");
	ListTraverse(L);
	return 0;
}