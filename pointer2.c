/*
1) �ּҿ� �������� ����

char ch;
int in;
double db;

100
/   / ch
200 203
/   / in
300 307
/   / db

char *pc = &ch;
/100/ pc

int *pi = &in;
/200/ pi

double *pd = &db;
/300/ pd
==> ���� �ּҰ��� ��� ������ ���� �ּҰ��� ����Ű�� ���� �ƴ϶�
db ��ü�� ����Ű�� ����

printf("%d +\n", sizeof(pc); /4
printf("%d +\n", sizeof(pi); /4
printf("%d +\n", sizeof(pd); /4
=> �ּҰ��� ��� ������ ������ ������ 4byte��

printf("%d +\n", sizeof(*pc); /1
printf("%d +\n", sizeof(*pi); /4
printf("%d +\n", sizeof(*pd); /8
=> �����Ͱ� ����Ű�� ������ ũ�⸦ ����



2) �������� ���� ��Ģ
int a;
100 103
/   /
int *pa, *pb;
pa = &a; 100
pb = pa; 100
pb = pa = &a; 100

int a;
int *pa = &a;
double *pb;

pb = pa; �����Ѱ�?
*pb = 3.5;
=> 100������ ���ٵ� ����Ǿ��� ������ int���̶� 4byte�̱� ������ ���޼����� ����

-----

*pb = 3.5;
==> ������ �ʱ�ȭ���� �ʾƼ� 3.5�� ���� ������ �� �� ����

pa = (int *)100; integer pointer ������ ����ȯ

*/