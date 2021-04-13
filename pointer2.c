/*
1) 주소와 포인터의 차이

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
==> 시작 주소값을 담고 있지만 시작 주소값을 가리키는 것이 아니라
db 자체를 가리키고 있음

printf("%d +\n", sizeof(pc); /4
printf("%d +\n", sizeof(pi); /4
printf("%d +\n", sizeof(pd); /4
=> 주소값을 담는 포인터 변수는 무조건 4byte임

printf("%d +\n", sizeof(*pc); /1
printf("%d +\n", sizeof(*pi); /4
printf("%d +\n", sizeof(*pd); /8
=> 포인터가 가리키는 변수의 크기를 구함



2) 포인터의 대입 규칙
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

pb = pa; 가능한가?
*pb = 3.5;
=> 100번지로 갈텐데 선언되어진 공간은 int형이라 4byte이기 때문에 경고메세지가 나옴

-----

*pb = 3.5;
==> 포인터 초기화되지 않아서 3.5가 어디로 가는지 알 수 없음

pa = (int *)100; integer pointer 변수로 형변환

*/