#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h> //ui


//#include<stdio.h>
//#include<stdlib.h>//����� ǥ�� ���̺귯��
//
//void main() {
//	int* p = (int*)malloc(sizeof(int));
//	*p = 100;
//	printf("data : %d\n", *p);
//	free(p);
//}
//
//#include<stdio.h>
//#include<stdlib.h>//����� ǥ�� ���̺귯��
//void main() {
//	int* p = (int*)malloc(sizeof(int)*4);
//	*p = 100;
//	printf("data : %d\n", *p);
//	free(p);
//}                               
//
//#include<stdio.h>
//#include<stdlib.h>//����� ǥ�� ���̺귯��
//void main() {
//	int* p = (int*)malloc(sizeof(int) * 4); //16����Ʈ �Ҵ� 
//	p[0] = 100; //���� 4����Ʈ�� ����
//	p[1] = 200;
//	p[2] = 300;
//	p[3] = 400;
//	printf("data : %d\n", p[0]);
//	printf("data : %d\n", p[1]);
//	printf("data : %d\n", p[2]);
//	printf("data : %d\n", p[3]);
//
//	free(p);
//}

//
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	char* s = (char*)malloc(sizeof(char) * 100);
//	s = "Hello!";
//	printf("string: %s\n", s);
//	free(s);
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	char* s = (char*)malloc(sizeof(char) * 100);
//	
//	/*���� �ϳ��ϳ� �Է¹��*/
//	//s[0] = 'H';
//	//s[1] = 'e';
//	//s[2] = 'l';
//	//s[3] = 'l';
//	//s[4] = 'o';
//	//s[5] = '!';
//	//s[6] = '\0';
//
//	/*���ڿ� ���� ���*/
//	strcpy_s(s, strlen("Hello!") + 1, "Hello!"); 
//	printf("string: %s\n", s);
//	free(s);
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	char s [100];
//	s = "Hello!"; //s�� �ּ��̱� ������ s��ü�� ��� �����Ҽ����� !
//	/*���ڿ� ���� ���*/
//	//strcpy_s(s, strlen("Hello!") + 1, "Hello!");
//	printf("string: %s\n", s);
//}
//
///* ���ڿ� �ٷ�� ! */
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	int n = 10;
//	float a = 10;
//	double b = 10;
//
//
//	printf("���� �Է� : ");
//	scanf_s("%d", &n);
//	printf("data = %d \n", n);
//
//
//	printf("�Ǽ� �Է�(4b) : ");
//	scanf_s("%f", &a);
//	printf("data = %g \n", a); //����Ҷ��� g�� ����
//
//	printf("�Ǽ� �Է�(8byte) : ");
//	scanf_s("%lf", &b);
//	printf("data = %g \n", b); //����Ҷ��� g�� ����
//
//	getchar(); //new line..?�� 
//	char buf[1000]; //����ڰ� �󸶳� ���ڿ��� �Է����� �𸣱⶧���� �˳��ϰ� �Ҵ�
//	printf("���ڿ�  : ");
//	gets_s(buf, 1000);
//	printf("data = %s \n", buf); //����Ҷ��� g�� ����
//
//	//scanf_s("%s", buf,1000); //���ڿ��� buf ù�ּҿ�   //&buf�� ������ȵ� .. �ּҰ�����������..�ȵ�!
//}
//
//void main() {
//	while (1) {
//		char buf[1000];
//		printf("���ڿ� : ");
//		gets_s(buf, 1000); 
//		if (buf == "exit")// ���ڿ��� �����ּҿ� exit�Ͱ����� ���⋚����  �ȵǴ� �ڵ�
//			break;
//		else
//			printf("data: %s \n", buf);
//	}
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	while (1) {
//		char buf[1000];
//		printf("���ڿ� : ");
//		gets_s(buf, 1000);
//		if (buf[0] == 'e' && buf[1] == 'x' && buf[2] == 'i'&& buf[3] == 't'&& buf[4] == '\0')// ���ڿ��� �����ּҿ� exit�Ͱ����� ���⋚����  �ȵǴ� �ڵ�
//			break;
//		else
//			printf("data: %s \n", buf);
//	}
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	while (1) {
//		char buf[1000];
//		printf("���ڿ� : ");
//		gets_s(buf, 1000);
//		if (strcmp(buf,"exit")==0)// ���ڿ��� �����ּҿ� exit�Ͱ����� ���⋚����  �ȵǴ� �ڵ�
//			break;
//		else
//			printf("data: %s \n", buf);
//	}
//}
//
//
///* ���ڿ� ����ؼ� �迭�� ���� */
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	char strArray[100][1000];
//	int sCount = 0;
//	while (1) {
//		char buf[1000];
//		printf("���ڿ� : ");
//		gets_s(buf, 1000);
//		if (strcmp(buf, "exit") == 0)
//			break;
//		else{
//			strcpy_s(strArray[sCount], strlen(buf) + 1, buf); // �ι��ڶ����� +1 ��������  
//			++sCount;
//			printf("data: %s \n", buf);
//		}
//	}
//	int i;
//	for (i = 0; i < sCount; ++i) {
//		printf("String[%d]:%s\n",i,strArray[i]);
//	}
//}

//
///* ���ڿ� ����ؼ� �迭�� ���� */
//#include<stdio.h>
//#include<stdlib.h>
//void PrintStringArray(char(*strArray)[1000],int sCount) {
//	int i;
//	for (i = 0; i < sCount; ++i) {
//		printf("String[%d]:%s\n", i, strArray[i]);
//	}
//}
//void main() {
//	char strArray[100][1000];
//	int sCount = 0;
//	while (1) {
//		char buf[1000];
//		printf("���ڿ� : ");
//		gets_s(buf, 1000);
//		if (strcmp(buf, "exit") == 0)
//			break;
//		else {
//			strcpy_s(strArray[sCount], strlen(buf) + 1, buf); // �ι��ڶ����� +1 ��������  
//			++sCount;
//			printf("data: %s \n", buf);
//		}
//	}
//	PrintStringArray(strArray, sCount);
//}

//
///* ���ڿ�  */
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	printf("string:%s\n", buf);
//}
// 
//
///* ���ڿ� ���� �Ҵ� �޸�   */
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//
//	/* buf�� 1000, s�� 4 */
//
//	char* s = NULL; //���� �Ҵ���������� �ʱ�ȭ�ؾ��Ҷ� NULL�� ! (null ������)
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//	printf("buf_string:%s\n", buf);
//	printf("s_string:%s\n", s);
//	free(s);
//}

//
///* ���ڿ� ���� �Ҵ� �޸�  InputString  */
//#include<stdio.h>
//#include<stdlib.h>
//char* InputString() { //���־��� �ڵ� !
//	char* s = NULL;
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//	return s;
//}
//void main() {
//
//	char* s = NULL;
//	s = InputString();// ���� ���� ���۸� ����� �����ؼ� �������°� 
//	printf("s_string:%s\n", s);
//	free(s);
//}

//
///* ���ڿ� ���� �Ҵ� �޸� PrintString   */
//#include<stdio.h>
//#include<stdlib.h>
//char* InputString() { //���־��� �ڵ� !
//	char* s = NULL;
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//	return s;
//}
//void PrintString(char* s) {
//	printf("data: %s\n", s);
//}
//void FreeString(char* s) {
//	free(s);
//}
//void main() {
//
//	char* s = NULL;
//	s = InputString(); 
//	PrintString(s);
//	FreeString(s);
//}

//
///* ���ڿ� ���� �Ҵ� �޸� InputString out �Ķ����   */
//#include<stdio.h>
//#include<stdlib.h>
//void InputString(char** ps) { //@@@!!!!! 
//	char* s = NULL;
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//	*ps = s;
//}
//void PrintString(char* s) {
//	printf("data: %s\n", s);
//}
//void FreeString(char* s) {
//	free(s);
//}
//void main() {
//
//	char* s = NULL;
//	InputString(&s); //�� �ּҸ� �������� ���� �𸣰�...
//	PrintString(s);
//	FreeString(s);
//}
//
///* ���ڿ�  swap   */
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//void main() {
//	char* s1 = "ABC";
//	char* s2 = "abcdef";
//	printf("%s %s \n", s1, s2);
//
//	char* temp;
//	temp = s1;
//	s1 = s2;
//	s2 = temp;
//
//	printf("%s %s \n", s1, s2);
//}


///* ���ڿ� swap   */
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//void Swap(char** ps1, char** ps2) {//�ּ��� �ּҵ��̶� ** �ʿ�  
//
//	char* temp;
//	temp = *ps1;
//	*ps1 = *ps2;
//	*ps2 = temp;
//}
//void main() {
//	char* s1 = "ABC";
//	char* s2 = "abcdef";
//	printf("%s %s \n", s1, s2);
//	Swap(&s1, &s2);
//	printf("%s %s \n", s1, s2);
//}

//
///* ���ڿ� �迭�� ���� swap   */
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//void Swap(char* s1, char* s2)//�ּҸ� ����
//{
//	char temp[10];
//	strcpy_s(temp, strlen(s1) + 1, s1);
//	strcpy_s(s1, strlen(s2) + 1, s2);
//	strcpy_s(s2, strlen(temp) + 1, temp);
//}
//void main() {
//	char s1[10] = "ABC";
//	char s2[10] = "abcdef";
//
//	printf("%s %s \n", s1, s2);
//	Swap(s1, s2);//�ּҸ� ����
//
//	printf("%s %s \n", s1, s2);
//}

//
///* ���ڿ� char* s[2]   */
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void InputString(char** ps) { //@@@!!!!! 
//	char* s = NULL;
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//	*ps = s;
//}
//void PrintString(char* s) {
//	printf("data: %s\n", s);
//}
//void FreeString(char* s) {
//	free(s);
//}
//void main() {
//
//	char* s[2] = { NULL }; //�迭�� �ʱ�ȭ�� ������ {} �ؾ��� ! (�����͹迭)
//	InputString(&s[0]); //�� �ּҸ� �������� ���� �𸣰�...
//	InputString(&s[1]); //�� �ּҸ� �������� ���� �𸣰�...
//	PrintString(s[0]);
//	PrintString(s[1]);
//	FreeString(s[0]);
//	FreeString(s[1]);
//
//}

//
///* ���ڿ� ����ؼ� �迭�� ���� */
//#include<stdio.h>
//#include<stdlib.h>
//void PrintStringArray(char(*strArray)[1000],int sCount) {
//	int i;
//	for (i = 0; i < sCount; ++i) {
//		printf("String[%d]:%s\n", i, strArray[i]);
//	}
//}
//void InputString(char** ps) { 
//	char* s = NULL;
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//	*ps = s;
//}
//void PrintString(char* s) {
//	printf("data: %s\n", s);
//}
//void FreeString(char* s) {
//	free(s);
//}
//
//void main() {
//	char* strArray[100];
//	int sCount = 0;
//	while (1) {
//		char* buf; //buf�� ���ڿ� �ּ�����
//		InputString(&buf);
//		if (strcmp(buf, "exit") == 0)
//			break;
//		else {
//			strArray[sCount] = buf; 
//			++sCount;
//		}
//	}
////	PrintStringArray(strArray, sCount);
//	{
//		int i;
//		for (i = 0; i < sCount; ++i) {
//			printf("string[%d]: %s\n", i, strArray[i]);
//		}
//	}
//}

//
///* ���ڿ� ����ؼ� �迭�� ���� */
//#include<stdio.h>
//#include<stdlib.h>
//void PrintStringArray(char** strArray, int sCount) {
//	int i;
//	for (i = 0; i < sCount; ++i) {
//		printf("String[%d]:%s\n", i, strArray[i]);
//	}
//}
//void InputString(char** ps) {
//	char* s = NULL;
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//	*ps = s;
//}
//void PrintString(char* s) {
//	printf("data: %s\n", s);
//}
//void FreeString(char* s) {
//	free(s);
//}
//
//void main() {
//	char* strArray[100];
//	int sCount = 0;
//	while (1) {
//		char* buf; //buf�� ���ڿ� �ּ�����
//		InputString(&buf);
//		if (strcmp(buf, "exit") == 0) {
//			FreeString(buf);
//			break;
//		}
//		else {
//			strArray[sCount] = buf;
//			++sCount;
//		} 
//	}
//	PrintStringArray(&strArray, sCount); //? �̰Ÿ𸣰ڴ� ? 
//
//	{
//		int i;
//		for (i = 0; i < sCount; ++i) {
//			FreeString(strArray[i]);
//		}
//	}
//}
//
//
///* ���ڿ� ����ؼ� �迭�� ���� ��ģ �ڵ� ġ��  */
//#include<stdio.h>
//#include<stdlib.h>
//void PrintStringArray(char** strArray, int sCount) {
//	int i;
//	for (i = 0; i < sCount; ++i) {
//		printf("String[%d]:%s\n", i, strArray[i]);
//	}
//
//
//
//}
//void InitStringArray(char** strArray, int* psCount) {
//	*psCount = 0;
//}
//void UninitStringArray(char** strArray, int sCount) {
//	
//		int i;
//		for (i = 0; i < sCount; ++i) {
//			FreeString(strArray[i]);
//		}
//	}
//void InputString(char** ps) {
//	char* s = NULL;
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//	*ps = s;
//}
//void PrintString(char* s) {
//	printf("data: %s\n", s);
//}
//void FreeString(char* s) {
//	free(s);
//}
///////////////////////////////////?
//void main() {
//	char* strArray[100];
//	int sCount = 0;
//	InitStringArray(strArray,&sCount);
//	while (1) {
//		char* buf; //buf�� ���ڿ� �ּ�����
//		InputString(&buf);
//		if (strcmp(buf, "exit") == 0) {
//			FreeString(buf);
//			break;
//		}
//		else {
//			strArray[sCount] = buf;
//			++sCount;
//		}
//	}
//	PrintStringArray(&strArray, sCount); //? �̰Ÿ𸣰ڴ� ? 
//
//	UninitStringArray(strArray, sCount);
//}

//
//
///* ���ڿ� ����ؼ� �迭��  ����  ����ü init   */
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct _stringarray_tag
//{
//	char* strArray[100];
//	int sCount;
//
//}StringArray;
//void PrintStringArray(char** strArray, int sCount) {
//	int i;
//	for (i = 0; i < sCount; ++i) {
//		printf("String[%d]:%s\n", i, strArray[i]);
//	}
//}
//void InitStringArray(StringArray* psarr) {
//	psarr->sCount = 0;
//}
//void UninitStringArray(StringArray* psarr) {
//
//	int i;
//	for (i = 0; i < psarr->sCount; ++i) {
//		FreeString(psarr->strArray[i]);
//	}
//}
//void InputString(char** ps) {
//	char* s = NULL;
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//	*ps = s;
//}
//void PrintString(char* s) {
//	printf("data: %s\n", s);
//}
//void FreeString(char* s) {
//	free(s);
//}
///////////////////////////////////?
//void main() {
//	StringArray sarr;
//	InitStringArray(&sarr);
//	while (1) {
//		char* buf; //buf�� ���ڿ� �ּ�����
//		InputString(&buf);
//		if (strcmp(buf, "exit") == 0) {
//			FreeString(buf);
//			break;
//		}
//		else {
//			sarr.strArray[sarr.sCount] = buf;
//			++sarr.sCount;
//		}
//	}
//	PrintStringArray(&sarr.strArray, sarr.sCount); //? �̰Ÿ𸣰ڴ� ? 
//
//	UninitStringArray(&sarr);
//}


//
///* ���ڿ� ����ؼ� �迭��  ����  ����ü init   */
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct _stringarray_tag
//{
//	char* strArray[100];
//	int sCount;
//
//}StringArray;
//void FreeString(char* s) {
//	free(s);
//}
//void PrintStringArray(StringArray* psarr) {
//	int i;
//	for (i = 0; i < psarr->sCount; ++i) {
//		printf("String[%d]:%s\n", i, psarr->strArray[i]);
//	}
//}
//void InitStringArray(StringArray* psarr) {
//	psarr->sCount = 0;
//}
//void UninitStringArray(StringArray* psarr) {
//
//	int i;
//	for (i = 0; i < psarr->sCount; ++i) {
//		FreeString(psarr->strArray[i]);
//	}
//}
//void InputString(char** ps) {
//	char* s = NULL;
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//	*ps = s;
//}
//void PrintString(char* s) {
//	printf("data: %s\n", s);
//}
//
///////////////////////////////////?
//void main() {
//	StringArray sarr;
//	InitStringArray(&sarr);
//	while (1) {
//		char* buf; //buf�� ���ڿ� �ּ�����
//		InputString(&buf);
//		if (strcmp(buf, "exit") == 0) {
//			FreeString(buf);
//			break;
//		}
//		else {
//			sarr.strArray[sarr.sCount] = buf;
//			++sarr.sCount;
//		}
//	}
//	PrintStringArray(&sarr); //? �̰Ÿ𸣰ڴ� ? 
//
//	UninitStringArray(&sarr);
//}
//
///* ���ڿ� ����ؼ� �迭��  ����  -�⺻�ڵ�   */
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct _stringarray_tag
//{
//	char* strArray[100];
//	int sCount;
//
//}StringArray;
//void FreeString(char* s) {
//	free(s);
//}
//void PrintStringArray(StringArray* psarr) {
//	int i;
//	for (i = 0; i < psarr->sCount; ++i) {
//		printf("String[%d]:%s\n", i, psarr->strArray[i]);
//	}
//}
//void AddStringArray(StringArray* psarr,char* data) {
//	psarr->strArray[psarr->sCount] = data;
//	++psarr->sCount;
//}
//void InitStringArray(StringArray* psarr) {
//	psarr->sCount = 0;
//}
//void UninitStringArray(StringArray* psarr) {
//
//	int i;
//	for (i = 0; i < psarr->sCount; ++i) {
//		FreeString(psarr->strArray[i]);
//	}
//}
//void InputString(char** ps) {
//	char* s = NULL;
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//	*ps = s;
//}
//void PrintString(char* s) {
//	printf("data: %s\n", s);
//}
//
///////////////////////////////////?
//void main() {
//	StringArray sarr;
//	InitStringArray(&sarr);
//	while (1) {
//		char* buf; //buf�� ���ڿ� �ּ�����
//		InputString(&buf);
//		if (strcmp(buf, "exit") == 0) {
//			FreeString(buf);
//			break;
//		}
//		else {
//			AddStringArray(&sarr, buf); //�߰��ϴ°� 
//		}
//	}
//	PrintStringArray(&sarr); 
//
//	UninitStringArray(&sarr);
//}

//
//
///* ���ڿ� - InputString return ����  */
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct _stringarray_tag
//{
//	char* strArray[100];
//	int sCount;
//
//}StringArray;
//void FreeString(char* s) {
//	free(s);
//}
//void PrintStringArray(StringArray* psarr) {
//	int i;
//	for (i = 0; i < psarr->sCount; ++i) {
//		printf("String[%d]:%s\n", i, psarr->strArray[i]);
//	}
//}
//void AddStringArray(StringArray* psarr, char* data) {
//	psarr->strArray[psarr->sCount] = data;
//	++psarr->sCount;
//}
//void InitStringArray(StringArray* psarr) {
//	psarr->sCount = 0;
//}
//void UninitStringArray(StringArray* psarr) {
//
//	int i;
//	for (i = 0; i < psarr->sCount; ++i) {
//		FreeString(psarr->strArray[i]);
//	}
//}
//char* InputString() {
//	char* s = NULL;
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//	
//	return s;
//}
//void PrintString(char* s) {
//	printf("data: %s\n", s);
//}
//void main() {
//	StringArray sarr;
//	InitStringArray(&sarr);
//	AddStringArray(&sarr, InputString());
//	AddStringArray(&sarr, InputString());
//	AddStringArray(&sarr, InputString());
//
//	PrintStringArray(&sarr);
//
//	UninitStringArray(&sarr);
//}
/////////////////////////////////////////////////////////////////////////////////////



//
//void main() {
//	char c = _getch();
//	printf("char : %c \n", c);
//}
//
//
//void main() {
//		char c = _getche();
//		printf("char : %c \n", c);
//}
//
//void main() {
//	switch (_getch())
//	{
//	case '1':
//		printf("111\n");
//		break;
//	case '2':
//		printf("222\n");
//		break;
//	case '3':
//		printf("333\n");
//		break;
//	case '0':
//		printf("000\n");
//		break;
//	}
//}

//
//void main() {
//	int bRun = 1;
//	while (bRun) {
//		switch (_getch())
//		{
//		case '1':
//			printf("111\n");
//			break;
//		case '2':
//			printf("222\n");
//			break;
//		case '3':
//			printf("333\n");
//			break;
//		case '0':
//			printf("000\n");
//			bRun = 0;
//			break;
//		}
//	}
//}

///************************************/
//typedef struct _stringarray_tag
//{
//	char* strArray[100];
//	int sCount;
//
//}StringArray;
//void FreeString(char* s) {
//	free(s);
//}
//void PrintStringArray(StringArray* psarr) {
//	int i;
//	for (i = 0; i < psarr->sCount; ++i) {
//		printf("String[%d]:%s\n", i, psarr->strArray[i]);
//	}
//}
//void SearchStringArray(StringArray* psarr)
//{
//	char str[1000];
//	int i;
//
//	printf("�˻��� ���ڿ� �Է� : ");
//	gets_s(str, 1000);
//	for (i = 0; i < psarr->sCount; ++i)
//		if (strcmp(str, psarr->strArray[i]) == 0)
//		{
//			printf("%s�� ���ڿ��� %d index�� ��ġ�Ѵ�\n", str, i);
//			break;
//		}
//}
//void RemoveStringArray(StringArray* psarr) {
//	int i;
//	int delIndex;
//	printf("������ ���ڿ��� index�� �Է� :");
//	scanf_s("%d", &delIndex);
//	FreeString(psarr->strArray[delIndex]);
//	for (i = delIndex; i < psarr->sCount - 1; ++i)
//		psarr->strArray[i] = psarr->strArray[i + 1];
//	
//	--psarr->sCount;
//   
//}
//void AddStringArray(StringArray* psarr, char* data) {
//	psarr->strArray[psarr->sCount] = data;
//	++psarr->sCount;
//}
//void InitStringArray(StringArray* psarr) {
//	psarr->sCount = 0;
//}
//void UninitStringArray(StringArray* psarr) {
//
//	int i;
//	for (i = 0; i < psarr->sCount; ++i) {
//		FreeString(psarr->strArray[i]);
//	}
//}
//
//char* InputString() {
//	char* s = NULL;
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//	
//	return s;
//}
//void PrintString(char* s) {
//	printf("data: %s\n", s);
//}
///************************************/
//void Menu() {
//	puts("1. ���ڿ� �Է�");
//	puts("2. ���ڿ� ���");
//	puts("3. ���ڿ� �˻�");
//	puts("4. ���ڿ� ����");
//	puts("5. CUI ȭ�� �����");
//	puts("0. ���α׷� ����");
//	puts("");
//
//}
//void main() {
//	StringArray sarr;
//	InitStringArray(&sarr);
//	
//	int bRun = 1;
//	while (bRun) {
//		Menu();
//		switch (_getch())
//		{
//		case '1':
//			printf("111\n");
//			AddStringArray(&sarr, InputString());
//			break;
//		case '2':
//			printf("222\n");
//			PrintStringArray(&sarr);
//			break;
//		case '3':
//			printf("333\n");
//			SearchStringArray(&sarr);
//			break;
//		case '4':
//			printf("444\n");
//			RemoveStringArray(&sarr);
//			break;
//		case '5':
//			system("cls"); // clear screen;
//		//	system("notepad");
//			break;
//		case '0':
//			printf("000\n");
//			bRun = 0;
//			break;
//		}
//	}
//	UninitStringArray(&sarr);
//}
//
//
//// ������ ���� �����ؼ� ��밡�� 
//typedef struct _stringarray_tag
//{
//	char** strArray;
//	int sCount;
//
//}StringArray;
//void FreeString(char* s) {
//	free(s);
//}
//void PrintStringArray(StringArray* psarr) {
//	int i;
//	for (i = 0; i < psarr->sCount; ++i) {
//		printf("String[%d]:%s\n", i, psarr->strArray[i]);
//	}
//}
//void SearchStringArray(StringArray* psarr)
//{
//	char str[1000];
//	int i;
//
//	printf("�˻��� ���ڿ� �Է� : ");
//	gets_s(str, 1000);
//	for (i = 0; i < psarr->sCount; ++i)
//		if (strcmp(str, psarr->strArray[i]) == 0)
//		{
//			printf("%s�� ���ڿ��� %d index�� ��ġ�Ѵ�\n", str, i);
//			break;
//		}
//}
//void RemoveStringArray(StringArray* psarr) {
//	int i;
//	int delIndex;
//	printf("������ ���ڿ��� index�� �Է� :");
//	scanf_s("%d", &delIndex);
//	FreeString(psarr->strArray[delIndex]);
//	for (i = delIndex; i < psarr->sCount - 1; ++i)
//		psarr->strArray[i] = psarr->strArray[i + 1];
//
//	--psarr->sCount;
//
//}
//void AddStringArray(StringArray* psarr, char* data) {
//	psarr->strArray[psarr->sCount] = data;
//	++psarr->sCount;
//}
//void InitStringArray(StringArray* psarr,int cap) {
//	psarr->strArray = (char**)malloc(sizeof(char*) * cap);
//	psarr->sCount = 0;
//}
//void UninitStringArray(StringArray* psarr) {
//
//	int i;
//	for (i = 0; i < psarr->sCount; ++i) {
//		FreeString(psarr->strArray[i]);
//	}
//	free(psarr->strArray);
//
//}
//
//char* InputString() {
//	char* s = NULL;
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//
//	return s;
//}
//void PrintString(char* s) {
//	printf("data: %s\n", s);
//}
///************************************/
//void Menu() {
//	puts("1. ���ڿ� �Է�");
//	puts("2. ���ڿ� ���");
//	puts("3. ���ڿ� �˻�");
//	puts("4. ���ڿ� ����");
//	puts("5. CUI ȭ�� �����");
//	puts("0. ���α׷� ����");
//	puts("");
//
//}
//void main() {
//	StringArray sarr;
//	InitStringArray(&sarr,10000);
//
//	int bRun = 1;
//	while (bRun) {
//		Menu();
//		switch (_getch())
//		{
//		case '1':
//			printf("111\n");
//			AddStringArray(&sarr, InputString());
//			break;
//		case '2':
//			printf("222\n");
//			PrintStringArray(&sarr);
//			break;
//		case '3':
//			printf("333\n");
//			SearchStringArray(&sarr);
//			break;
//		case '4':
//			printf("444\n");
//			RemoveStringArray(&sarr);
//			break;
//		case '5':
//			system("cls"); // clear screen;
//						   //	system("notepad");
//			break;
//		case '0':
//			printf("000\n");
//			bRun = 0;
//			break;
//		}
//	}
//	UninitStringArray(&sarr);
//}
//
//

//
//// ������ ���� �����ؼ� ��밡�� //�����޸� ��� 
//typedef struct _stringarray_tag  //�߻�ȭ�Ѱ� 
//{
//	char** strArray;
//	int sCount;
//	int capacity; // �ִ�ũ�� 
//
//}StringArray;
//void FreeString(char* s) {
//	free(s);
//}
//void PrintStringArray(StringArray* psarr) {
//	int i;
//	for (i = 0; i < psarr->sCount; ++i) {
//		printf("String[%d]:%s\n", i, psarr->strArray[i]);
//	}
//}
//void SearchStringArray(StringArray* psarr)
//{
//	char str[1000];
//	int i;
//
//	printf("�˻��� ���ڿ� �Է� : ");
//	gets_s(str, 1000);
//	for (i = 0; i < psarr->sCount; ++i)
//		if (strcmp(str, psarr->strArray[i]) == 0)
//		{
//			printf("%s�� ���ڿ��� %d index�� ��ġ�Ѵ�\n", str, i);
//			break;
//		}
//}
//void RemoveStringArray(StringArray* psarr) {
//	int i;
//	int delIndex;
//	printf("������ ���ڿ��� index�� �Է� :");
//	scanf_s("%d", &delIndex);
//	FreeString(psarr->strArray[delIndex]);
//	for (i = delIndex; i < psarr->sCount - 1; ++i)
//		psarr->strArray[i] = psarr->strArray[i + 1];
//
//	--psarr->sCount;
//
//}
//void AddStringArray(StringArray* psarr, char* data) {
//	if (psarr->capacity <= psarr->sCount)
//		return;
//	psarr->strArray[psarr->sCount] = data;
//	++psarr->sCount;
//}
//void InitStringArray(StringArray* psarr, int cap) {
//	psarr->strArray = (char**)malloc(sizeof(char*) * cap);
//	psarr->capacity = cap;
//	psarr->sCount = 0;
//}
//void UninitStringArray(StringArray* psarr) {
//
//	int i;
//	for (i = 0; i < psarr->sCount; ++i) {
//		FreeString(psarr->strArray[i]);
//	}
//	free(psarr->strArray); //?? ���� �ٸ���?+
//
//
//}
//
//char* InputString() {
//	char* s = NULL;
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//
//	return s;
//}
//void PrintString(char* s) {
//	printf("data: %s\n", s);
//}
///************************************/
//void Menu() {
//	puts("1. ���ڿ� �Է�");
//	puts("2. ���ڿ� ���");
//	puts("3. ���ڿ� �˻�");
//	puts("4. ���ڿ� ����");
//	puts("5. CUI ȭ�� �����");
//	puts("0. ���α׷� ����");
//	puts("");
//
//}
//void main() {
//	StringArray sarr;
//	InitStringArray(&sarr, 2);
//
//	int bRun = 1;
//	while (bRun) {
//		Menu();
//		switch (_getch())
//		{
//		case '1':
//			printf("111\n");
//			AddStringArray(&sarr, InputString());
//			break;
//		case '2':
//			printf("222\n");
//			PrintStringArray(&sarr);
//			break;
//		case '3':
//			printf("333\n");
//			SearchStringArray(&sarr);
//			break;
//		case '4':
//			printf("444\n");
//			RemoveStringArray(&sarr);
//			break;
//		case '5':
//			system("cls"); // clear screen;
//						   //	system("notepad");
//			break;
//		case '0':
//			printf("000\n");
//			bRun = 0;
//			break;
//		}
//	}
//	UninitStringArray(&sarr);
//}
//
//

//
//// ������ ���� �����ؼ� ��밡�� //�����޸� ��� 
//typedef struct _stringarray_tag  //�߻�ȭ�Ѱ� 
//{
//	char** strArray;
//	int sCount;
//	int capacity; // �ִ�ũ�� 
//
//}StringArray;
//void FreeString(char* s) {
//	free(s);
//}
//void PrintStringArray(StringArray* psarr) {
//	int i;
//	for (i = 0; i < psarr->sCount; ++i) {
//		printf("String[%d]:%s\n", i, psarr->strArray[i]);
//	}
//}
//void SearchStringArray(StringArray* psarr)
//{
//	char str[1000];
//	int i;
//
//	printf("�˻��� ���ڿ� �Է� : ");
//	gets_s(str, 1000);
//	for (i = 0; i < psarr->sCount; ++i)
//		if (strcmp(str, psarr->strArray[i]) == 0)
//		{
//			printf("%s�� ���ڿ��� %d index�� ��ġ�Ѵ�\n", str, i);
//			break;
//		}
//}
//void RemoveStringArray(StringArray* psarr) {
//	int i;
//	int delIndex;
//	printf("������ ���ڿ��� index�� �Է� :");
//	scanf_s("%d", &delIndex);
//	FreeString(psarr->strArray[delIndex]);
//	for (i = delIndex; i < psarr->sCount - 1; ++i)
//		psarr->strArray[i] = psarr->strArray[i + 1];
//
//	--psarr->sCount;
//
//}
//void AddStringArray(StringArray* psarr, char* data) {
//	if (psarr->capacity <= psarr->sCount)
//		return;
//	psarr->strArray[psarr->sCount] = data;
//	++psarr->sCount;
//}
//void InitStringArray(StringArray* psarr, int cap) {
//	psarr->strArray = (char**)malloc(sizeof(char*) * cap);
//	psarr->capacity = cap;
//	psarr->sCount = 0;
//}
//void UninitStringArray(StringArray* psarr) {
//	// �����Ҷ��� �ݴ��
//	int i;
//	for (i = 0; i < psarr->sCount; ++i) {
//		FreeString(psarr->strArray[i]); //������ �� ���� �޸𸮰� 
//	}
//	free(psarr->strArray); // ū �����޸� 
//	 
//
//}
//
//char* InputString() {
//	char* s = NULL;
//	char buf[1000];
//	printf("���ڿ� �Է�:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//
//	return s;
//}
//void PrintString(char* s) {
//	printf("data: %s\n", s);
//}
///************************************/
//void Menu() {
//	puts("1. ���ڿ� �Է�");
//	puts("2. ���ڿ� ���");
//	puts("3. ���ڿ� �˻�");
//	puts("4. ���ڿ� ����");
//	puts("5. CUI ȭ�� �����");
//	puts("0. ���α׷� ����");
//	puts("");
//
//}
//void main() {
//	StringArray sarr;
//	InitStringArray(&sarr, 2);
//
//	int bRun = 1;
//	while (bRun) {
//		Menu();
//		switch (_getch())
//		{
//		case '1':
//			printf("111\n");
//			AddStringArray(&sarr, InputString());
//			break;
//		case '2':
//			printf("222\n");
//			PrintStringArray(&sarr);
//			break;
//		case '3':
//			printf("333\n");
//			SearchStringArray(&sarr);
//			break;
//		case '4':
//			printf("444\n");
//			RemoveStringArray(&sarr);
//			break;
//		case '5':
//			system("cls"); // clear screen;
//						   //	system("notepad");
//			break;
//		case '0':
//			printf("000\n");
//			bRun = 0;
//			break;
//		}
//	}
//	UninitStringArray(&sarr);
//}
//
//
//
///*  ���� ��ȯ */
//void main() {
//	int a = 10;
//	int b = 3;
//	int result = a / b;
//
//	printf("%d\n", result);
//}
//
//
//
///*  ����� ��ȯ */
//void main() {
//	int a = 10;
//	int b = 3;
//	double result = (double) (a / b);
//
//	printf("%g\n", result);
//}
//
//

//
///* ����� ��ȯ */
//void main() {
//	int a = 10;
//	int b = 3;
//	double result = (double)a / (double) b;
//
//	printf("%g\n", result);
//}

//
///* �Ϲ��� ��ȯ */
//void main() {
//	int a = 10;
//	double b = 3;
//
//	b = a; 
//	printf("%g\n", b);
//}

//
///* */
//void main() {
//	int a = 10;
//	double b = 3;
//	a = b;
//	printf("%d\n", a);
//}

//
///*  */
//void main() {
//	int a = 10;
//	double b = 3;
//	a = (int) b;
//	printf("%d\n", a);
//}

//
///* �ּ� ���� ��ȭ -..big and   */
//void main() {
//	int n = 0x4241;
//	printf("%d %x\n", n, n);
//	printf("%p %p\n", (int*)&n, &n); //������
//	printf("%p %p\n", (char*)&n, &n); //�ּҴ� ����
//	printf("%p %p\n", (char*)&n+1, &n+1); // but 1����Ʈ����, 4����Ʈ ����
//	printf("%x %x\n", *(char*)&n, *&n ); 
//
//}

//
///* �ּ� ���� ��ȭ -..big and   */
//void main() {
//	int n = 0x44434241;
//	
//	printf("%d %d\n", ((char*)&n)[0], ((char*)&n)[0]);
//	printf("%d %d\n", ((char*)&n)[1], ((char*)&n)[1]);
//	printf("%d %d\n", ((char*)&n)[2], ((char*)&n)[2]);
//	printf("%d %d\n", ((char*)&n)[3], ((char*)&n)[3]);
//
//	printf("%d %x\n", n, n);
//	printf("%p %p\n", (int*)&n, &n); //������
//	printf("%p %p\n", (char*)&n, &n); //�ּҴ� ����
//	printf("%p %p\n", (char*)&n + 1, &n + 1); // but 1����Ʈ����, 4����Ʈ ����
//	printf("%x %x\n", *(char*)&n, *&n);
//	
//}


/* �ּ� ���� ��ȭ -..big and   */
void main() {
	int n = 0x44434241;
	char* p = (char*)&n; //1����Ʈ �� �̵��Ϸ��� char
	printf("%c %d\n", p[0], p[0]);
	printf("%c %d\n", p[1], p[1]);
	printf("%c %d\n", p[2], p[2]);
	printf("%c %d\n", p[3], p[3]);

	
}
