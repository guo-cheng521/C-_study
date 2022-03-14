Status InsertAVL(BiTree* T, int e, Status* taller)
{
	if (!*T)
	{ /*  插入新结点，树“长高”，置taller为TRUE */
		*T = (BiTree)malloc(sizeof(BiTNode));
		(*T)->data = e; (*T)->lchild = (*T)->rchild = NULL; (*T)->bf = EH;
		*taller = TRUE;
	}
	else
	{
		if (e == (*T)->data)
		{ /*  树中已存在和e有相同关键字的结点则不再插入 */
			*taller = FALSE; return FALSE;
		}
		if (e < (*T)->data)
		{ /*  应继续在T的左子树中进行搜索 */
			if (!InsertAVL(&(*T)->lchild, e, taller)) /*  未插入 */
				return FALSE;
			if (*taller) /*   已插入到T的左子树中且左子树“长高” */
				switch ((*T)->bf) /*  检查T的平衡度 */
				{
				case LH: /*  原本左子树比右子树高，需要作左平衡处理 */
					LeftBalance(T);	*taller = FALSE; break;
				case EH: /*  原本左、右子树等高，现因左子树增高而使树增高 */
					(*T)->bf = LH; *taller = TRUE; break;
				case RH: /*  原本右子树比左子树高，现左、右子树等高 */
					(*T)->bf = EH; *taller = FALSE; break;
				}
		}
		else
		{ /*  应继续在T的右子树中进行搜索 */
			if (!InsertAVL(&(*T)->rchild, e, taller)) /*  未插入 */
				return FALSE;
			if (*taller) /*  已插入到T的右子树且右子树“长高” */
				switch ((*T)->bf) /*  检查T的平衡度 */
				{
				case LH: /*  原本左子树比右子树高，现左、右子树等高 */
					(*T)->bf = EH; *taller = FALSE;	break;
				case EH: /*  原本左、右子树等高，现因右子树增高而使树增高  */
					(*T)->bf = RH; *taller = TRUE; break;
				case RH: /*  原本右子树比左子树高，需要作右平衡处理 */
					RightBalance(T); *taller = FALSE; break;
				}
		}
	}
	return TRUE;
}