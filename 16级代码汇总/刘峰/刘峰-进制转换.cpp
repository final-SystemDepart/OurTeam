//十转二：不支持小数位
//二转十：不支持小数位
//注释：有 较多
//命名：B+ 有缩写
#include <stdio.h>
int main()
{
    int Type,a,b[10],i=0,c=0;
    printf("请输入转换类型，1：十进制转二进制；2：二进制转十进制\n");
    scanf("%d",&Type);
    printf("请输入原数据\n");
    scanf("%d",&a);
    switch(Type)
	{
      case 1:
        while(a!=0)
		{
           b[i]=a%2;
		   a/=2;
           i++;
		}
         printf("二进制为：");
			 i--;
         for(;i>=0;i--)
			 printf("%d",b[i]);
             printf("\n");
            break;
	  case 2:
        while(a!=0)
        {
            b[i]=a%10;
            a/=10;
            i++;
        }
        i--;
        for(;i>=0;i--)
            c=c*2+b[i];
        printf("十进制为：%d\n",c);
        break;
    }
	return 0;
}
