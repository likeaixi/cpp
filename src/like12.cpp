 #include<stdio.h>
void main()
{	int a,b,c,t;
	printf("�����������������Իس�����:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
{	t=a;
	a=b;
	b=t;
}
if(a>c)
	printf("%d %d %d\n",c,a,b);
else
	if(b>c)
		printf("%d %d %d\n",a,c,b);
	else
		printf("%d %d %d\n",a,b,c);
}

