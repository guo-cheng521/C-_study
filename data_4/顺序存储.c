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
	if (L->length == MAXSIZE)  /* 顺序线性表已经满 */
		return 0;
	if (i<1 || i>L->length + 1)/* 当i比第一位置小或者比最后一位置后一位置还要大时 */
		return 0;

	if (i <= L->length)        /* 若插入数据位置不在表尾 */
	{
		for (k = L->length - 1; k >= i - 1; k--)  /* 将要插入位置之后的数据元素向后移动一位 */
			L->data[k + 1] = L->data[k];
	}
	L->data[i - 1] = e;          /* 将新元素插入 */
	L->length++;

	return 1;
}

status ListDelete(Sqlist* L, int i, ElemType* e)
{
	int k;
	if (L->length == 0)               /* 线性表为空 */
		return 0;
	if (i<1 || i>L->length)         /* 删除位置不正确 */
		return 0;
	*e = L->data[i - 1];
	if (i < L->length)                /* 如果删除不是最后位置 */
	{
		for (k = i; k < L->length; k++)/* 将删除位置后继元素前移 */
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
	ElemType e;                        /*声明与La和Lb相同的数据元素e*/
	La_len = ListLength(*La);            /*求线性表的长度 */
	Lb_len = ListLength(Lb);
	for (i = 1; i <= Lb_len; i++)
	{
		GetElem(Lb, i, &e);              /*取Lb中第i个数据元素赋给e*/
		if (!LocateElem(*La, e))        /*La中不存在和e相同数据元素*/
			ListInsert(La, ++La_len, e); /*插入*/
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
	printf("初始化成功L后：L.length=%d\n", L.length);
	for (j = 1; j <= 5; j++)
		i = ListInsert(&L, 1, j);
	printf("在L的表头依次插入1～5后：L.data=");
	ListTraverse(L);

	printf("L.length=%d \n", L.length);
	i = ListEmpty(L);
	printf("L是否空：i=%d(1:是 0:否)\n", i);

	i = ClearList(&L);
	printf("清空L后：L.length=%d\n", L.length);
	i = ListEmpty(L);
	printf("L是否空：i=%d(1:是 0:否)\n", i);

	for (j = 1; j <= 10; j++)
		ListInsert(&L, j, j);
	printf("在L的表尾依次插入1～10后：L.data=");
	ListTraverse(L);

	printf("L.length=%d \n", L.length);

	ListInsert(&L, 1, 0);
	printf("在L的表头插入0后：L.data=");
	ListTraverse(L);
	printf("L.length=%d \n", L.length);

	GetElem(L, 5, &e);
	printf("第5个元素的值为：%d\n", e);
	for (j = 3; j <= 4; j++)
	{
		k = LocateElem(L, j);
		if (k)
			printf("第%d个元素的值为%d\n", k, j);
		else
			printf("没有值为%d的元素\n", j);
	}


	k = ListLength(L); /* k为表长 */
	for (j = k + 1; j >= k; j--)
	{
		i = ListDelete(&L, j, &e); /* 删除第j个数据 */
		if (i == 0)
			printf("删除第%d个数据失败\n", j);
		else
			printf("删除第%d个的元素值为：%d\n", j, e);
	}
	printf("依次输出L的元素：");
	ListTraverse(L);

	j = 5;
	ListDelete(&L, j, &e); /* 删除第5个数据 */
	printf("删除第%d个的元素值为：%d\n", j, e);

	printf("依次输出L的元素：");
	ListTraverse(L);

	//构造一个有10个数的Lb
	i = InitList(&Lb);
	for (j = 6; j <= 15; j++)
		i = ListInsert(&Lb, 1, j);

	unionL(&L, Lb);

	printf("依次输出合并了Lb的L的元素：");
	ListTraverse(L);
	return 0;
}