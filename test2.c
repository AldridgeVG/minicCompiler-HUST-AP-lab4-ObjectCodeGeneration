int m,n,i;
int func(int a,int b)
{
	if(a<1)
		return a+b;
	return func(a-1,b+1);
}
int main()
{
	int a,b;
	a=10;
	b=20;
	i=func(a,b);
	return i;
}