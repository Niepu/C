#include<stdio.h> 
#include<stdlib.h> 
int math();

//�Q�λ��j�M�D���j��ƨD��ƪ� gcd(�̤j���]��)

int ex1()
{
	int a, b, c, d, e, ans;
	printf("please input two positive\n");    //��J��ӼƦr
	scanf("%d %d", &a, &b);

	d = a;   //����J���Ʀr�̫���ܦb���G�W
	e = b;

	ans = math(d, e);  //�^�ǰƵ{���A�����ɻ��j

	while (b != 0)     //�D���j��������While�j��
	{
		c = a%b;       //�ܼ�a���H�ܼ�b���l�Ƭ��ܼ�c
		a = b;         //�ܼ�b�����ܼ�a
		b = c;		   //�ܼ�c�����ܼ�b
	}

	//����A���@��a���H�ܼ�b���l�Ƭ��ܼ�c�A�����ܼ�b���H�ۤv���l���ܬ�0�ɡA�����j��


	printf("�D���j�D�X�� => %d �M %d ���̤j���]�Ƭ�%d\n", d, e, a);

	printf("���^�D�X��   => %d �M %d ���̤j���]�Ƭ�%d\n", d, e, ans);

}

int math(a, b)  //�^�ǰƵ{���A�����ɻ��j
{
	int c;
	while (b != 0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	return a;
}