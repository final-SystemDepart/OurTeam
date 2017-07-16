#pragma once
#include"student.h"
class node
{
public:
	node *next;
	student st;
	node()
	{}
	node(student d,node *n=NULL)
	{
		next=n;st=d;
	}

};


