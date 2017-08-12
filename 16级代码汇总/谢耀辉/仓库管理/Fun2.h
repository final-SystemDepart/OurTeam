#pragma once
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <conio.h>

#ifdef _WIN32
	#include <windows.h>
#endif


/*  ����Linux�ն�������ɫ  */
void setcolor(const char *color)
{
#ifdef _LINUX_
    if (strcmp(color, "green") == 0)
        printf("\033[32m");
    else if (strcmp(color, "yellow") == 0)
        printf("\033[33m");
#endif
}

/*  ����  */
void clear()
{
#ifdef _WIN32
    system("cls");
#else
    clrscr();
#endif
}

/* ͳһssleep()���� */
void ssleep(int t)
{
#ifdef _WIN32
	Sleep(t);
#else
	usleep(t * 10000);
#endif
}

/*  ��������  */
struct Store
{
	double space;		/*�ֿ�����*/
    double available;	/*���ÿռ�*/
    int total;					/*��������*/
} set;

struct Storage
{
    char num[16];		/*������*/ 
    char name[32];		/*��������*/ 
    char type[32];			/*��������*/
    double size;			/*�����С*/
    int sum;					/*��������*/
    struct Storage *next;
} *head = NULL, *sp1, *sp2, *result[512] = {NULL};		/*����������*/


/*  ���Ʊ��  */
void table(struct Storage *p, int state)
{
    setcolor("green");
    int i;
    if (state == 0)		/* ��ͷ */
    {
        printf("+");
        for (i = 0; i < 13; i++)
            printf("---");
        printf("TABLE-");
        for (i = 0; i < 13; i++)
            printf("---");
        printf("+\n");
        printf("|     ���\t|           ����    \t|      ����  \t|   �ߴ�/m3\t|    ����    |\n|");
        for (i = 0; i < 28; i++)
            printf("---");
        printf("|\n");
    }
    else if (state == 1)		/* ���� */
    {
        printf("|  %6s\t|  %-18s \t|  %8s\t|  %6.3g\t|  %6d    |\n|", p->num, p->name, p->type, p->size, p->sum);
        for (i = 0; i < 28; i++)
            printf("---");
        printf("|\n");
    }
    else		/* ��β */
    {
        for (i = 0; i < 10; i++)
            printf("   ");
        printf("------���޸�������------\n");
    }
    setcolor("yellow");
}

/*  �޸�����  */
bool change(char mod_type, struct Storage *src, struct Storage *mod)
{
	switch (mod_type)
	{
	case '1':		//�޸�����
		strcpy(src->name, mod->name);
		break;
	case '2':		//�޸�����
		strcpy(src->type, mod->type);
		break;
	case '3':		//�޸Ĵ�С
		if ((mod->size - src->size) * src->sum > set.available)
		{
			printf("-> �������ÿռ䣡�����ã�%gm3�����������룺", set.available);
			return false;
		}
		src->size = mod->size;
		set.available -= (mod->size - src->size) * src->sum;
		break;
	case '4':		//�޸�����
		if ((mod->sum - src->sum) * src->size > set.available)
		{
			printf("-> �������ÿռ䣡�����ã�%gm3�����������룺", set.available);
			return false;
		}
		set.available -= (mod->sum - src->sum) * src->size;
		set.total += mod->sum - src->sum;
		break;
	case '5':	//���
		strcpy(src->num, mod->num);
		break;
	default:
		return false;
	}
    return true;
}

/* ���� */
void Bubblesort(struct Storage *head, int slt)
{
	struct Storage *temp1, *temp2, *q, *p;
	for (q = head; q->next != NULL; q = q->next)
		for (p = q->next; p->next != NULL; p = p->next)
		{
			char *data1 = NULL, *data2 = NULL;
			switch (slt)
			{
			case 1:	//���
				data1 = p->next->num;
				data2 = q->next->num;
				break;
			case 2:
				data2 = p->next->num;
				data1 = q->next->num;
				break;
			case 3:	//����
				data1 = p->next->name;
				data2 = q->next->name;
				break;
			case 4:
				data2 = p->next->name;
				data1 = q->next->name;
				break;
			case 5:	//����
				data1 = p->next->type;
				data2 = q->next->type;
				break;
			case 6:
				data2 = p->next->type;
				data1 = q->next->type;
				break;
			}
			if (strcmp(data1, data2) < 0)
				if (q->next == p)
				{
					temp1 = p->next;
					p->next = p->next->next;
					temp1->next = q->next;
					q->next = temp1;
					p = temp1;
				}
				else
				{
					temp1 = p->next;
					temp2 = q->next;
					p->next = p->next->next;
					q->next = q->next->next;
					temp1->next = q->next;
					q->next = temp1;
					temp2->next = p->next;
					p->next = temp2;
				}
		}
}

/*  ɾ���ڵ�  */
struct Storage *delt(struct Storage *hd, struct Storage *del)
{
    struct Storage *pre = hd, *p;
    if (hd == del)
    {
        p = hd;
        hd = hd->next;
        free(p);
        return hd;
    }
    else
    {
        while (pre->next != NULL)
        {
            if (pre->next == del)
            {
                p = pre->next;
                pre->next = p->next;
                free(p);
                return hd;
            }
            pre = pre->next;
        }
    }
	return NULL;
}

/*  ����  */
bool filter(char *object, char *key)
{
    if (strstr(object, key) != NULL)
    {
        return false;
    }
    return true;
}

/*  ������Ϣ  */
struct Storage *find(char *key, char slt)
{
    struct Storage *ss;
    int i = 0, check;

    switch (slt)
    {
    case '0':	//ȫ��
    case '1':	//���
        {
            ss = head;
            while (ss != NULL)
            {
                if (!filter(ss->num, key))
                {
                    result[i++] = ss;
                }
                ss = ss->next;
            }
            if (slt == '1')
				break;
        }
    case '2':	//����
        {
            ss = head;
            while (ss != NULL)
            {
                if (!filter(ss->name, key))
                {
                    check = 0;
                    while (check != i)
                    {
                        if (result[check] == ss)
                        {
                            int k;
                            for (k = check; k < i; k++)
                            {
                                result[k] = result[k+1];
                            }
                            i--;
                            break;
                        }
                        check++;
                    }
                    result[i++] = ss;
                }
                ss = ss->next;
            }
            if (slt == '2')
				break;
        }
    case '3':	//����
        {
            ss = head;
            while (ss != NULL)
            {
                if (!filter(ss->type, key))
                {
                    check = 0;
                    while (check != i)
                    {
                        if (result[check] == ss)
                        {
                            int k;
                            for (k = check; k < i; k++)
                            {
                                result[k] = result[k+1];
                            }
                            i--;
                            break;
                        }
                        check++;
                    }
                    result[i++] = ss;
                }
                ss = ss->next;
            }
        }
    }
    result[i] = NULL;
    return result[0];
}
