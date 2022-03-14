Status InsertAVL(BiTree* T, int e, Status* taller)
{
	if (!*T)
	{ /*  �����½�㣬�������ߡ�����tallerΪTRUE */
		*T = (BiTree)malloc(sizeof(BiTNode));
		(*T)->data = e; (*T)->lchild = (*T)->rchild = NULL; (*T)->bf = EH;
		*taller = TRUE;
	}
	else
	{
		if (e == (*T)->data)
		{ /*  �����Ѵ��ں�e����ͬ�ؼ��ֵĽ�����ٲ��� */
			*taller = FALSE; return FALSE;
		}
		if (e < (*T)->data)
		{ /*  Ӧ������T���������н������� */
			if (!InsertAVL(&(*T)->lchild, e, taller)) /*  δ���� */
				return FALSE;
			if (*taller) /*   �Ѳ��뵽T�����������������������ߡ� */
				switch ((*T)->bf) /*  ���T��ƽ��� */
				{
				case LH: /*  ԭ�����������������ߣ���Ҫ����ƽ�⴦�� */
					LeftBalance(T);	*taller = FALSE; break;
				case EH: /*  ԭ�����������ȸߣ��������������߶�ʹ������ */
					(*T)->bf = LH; *taller = TRUE; break;
				case RH: /*  ԭ�����������������ߣ������������ȸ� */
					(*T)->bf = EH; *taller = FALSE; break;
				}
		}
		else
		{ /*  Ӧ������T���������н������� */
			if (!InsertAVL(&(*T)->rchild, e, taller)) /*  δ���� */
				return FALSE;
			if (*taller) /*  �Ѳ��뵽T���������������������ߡ� */
				switch ((*T)->bf) /*  ���T��ƽ��� */
				{
				case LH: /*  ԭ�����������������ߣ������������ȸ� */
					(*T)->bf = EH; *taller = FALSE;	break;
				case EH: /*  ԭ�����������ȸߣ��������������߶�ʹ������  */
					(*T)->bf = RH; *taller = TRUE; break;
				case RH: /*  ԭ�����������������ߣ���Ҫ����ƽ�⴦�� */
					RightBalance(T); *taller = FALSE; break;
				}
		}
	}
	return TRUE;
}