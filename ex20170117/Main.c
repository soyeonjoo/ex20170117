#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h> //ui


//#include<stdio.h>
//#include<stdlib.h>//입출력 표준 라이브러리
//
//void main() {
//	int* p = (int*)malloc(sizeof(int));
//	*p = 100;
//	printf("data : %d\n", *p);
//	free(p);
//}
//
//#include<stdio.h>
//#include<stdlib.h>//입출력 표준 라이브러리
//void main() {
//	int* p = (int*)malloc(sizeof(int)*4);
//	*p = 100;
//	printf("data : %d\n", *p);
//	free(p);
//}                               
//
//#include<stdio.h>
//#include<stdlib.h>//입출력 표준 라이브러리
//void main() {
//	int* p = (int*)malloc(sizeof(int) * 4); //16바이트 할당 
//	p[0] = 100; //각각 4바이트에 넣음
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
//	/*직접 하나하나 입력방법*/
//	//s[0] = 'H';
//	//s[1] = 'e';
//	//s[2] = 'l';
//	//s[3] = 'l';
//	//s[4] = 'o';
//	//s[5] = '!';
//	//s[6] = '\0';
//
//	/*문자열 복사 방법*/
//	strcpy_s(s, strlen("Hello!") + 1, "Hello!"); 
//	printf("string: %s\n", s);
//	free(s);
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	char s [100];
//	s = "Hello!"; //s가 주소이기 때문에 s자체는 상수 변경할수없음 !
//	/*문자열 복사 방법*/
//	//strcpy_s(s, strlen("Hello!") + 1, "Hello!");
//	printf("string: %s\n", s);
//}
//
///* 문자열 다루기 ! */
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	int n = 10;
//	float a = 10;
//	double b = 10;
//
//
//	printf("정수 입력 : ");
//	scanf_s("%d", &n);
//	printf("data = %d \n", n);
//
//
//	printf("실수 입력(4b) : ");
//	scanf_s("%f", &a);
//	printf("data = %g \n", a); //출력할때는 g로 가능
//
//	printf("실수 입력(8byte) : ");
//	scanf_s("%lf", &b);
//	printf("data = %g \n", b); //출력할때는 g로 가능
//
//	getchar(); //new line..?ㅎ 
//	char buf[1000]; //사용자가 얼마나 문자열을 입력할지 모르기때문에 넉넉하게 할당
//	printf("문자열  : ");
//	gets_s(buf, 1000);
//	printf("data = %s \n", buf); //출력할때는 g로 가능
//
//	//scanf_s("%s", buf,1000); //문자열은 buf 첫주소와   //&buf를 넣으면안됨 .. 주소가같긴하지만..안됨!
//}
//
//void main() {
//	while (1) {
//		char buf[1000];
//		printf("문자열 : ");
//		gets_s(buf, 1000); 
//		if (buf == "exit")// 문자열의 시작주소와 exit와같을수 없기떄무넹  안되는 코드
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
//		printf("문자열 : ");
//		gets_s(buf, 1000);
//		if (buf[0] == 'e' && buf[1] == 'x' && buf[2] == 'i'&& buf[3] == 't'&& buf[4] == '\0')// 문자열의 시작주소와 exit와같을수 없기떄무넹  안되는 코드
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
//		printf("문자열 : ");
//		gets_s(buf, 1000);
//		if (strcmp(buf,"exit")==0)// 문자열의 시작주소와 exit와같을수 없기떄무넹  안되는 코드
//			break;
//		else
//			printf("data: %s \n", buf);
//	}
//}
//
//
///* 문자열 계속해서 배열에 저장 */
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	char strArray[100][1000];
//	int sCount = 0;
//	while (1) {
//		char buf[1000];
//		printf("문자열 : ");
//		gets_s(buf, 1000);
//		if (strcmp(buf, "exit") == 0)
//			break;
//		else{
//			strcpy_s(strArray[sCount], strlen(buf) + 1, buf); // 널문자때문에 +1 사이즈임  
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
///* 문자열 계속해서 배열에 저장 */
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
//		printf("문자열 : ");
//		gets_s(buf, 1000);
//		if (strcmp(buf, "exit") == 0)
//			break;
//		else {
//			strcpy_s(strArray[sCount], strlen(buf) + 1, buf); // 널문자때문에 +1 사이즈임  
//			++sCount;
//			printf("data: %s \n", buf);
//		}
//	}
//	PrintStringArray(strArray, sCount);
//}

//
///* 문자열  */
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	char buf[1000];
//	printf("문자열 입력:");
//	gets_s(buf, 1000);
//	printf("string:%s\n", buf);
//}
// 
//
///* 문자열 동적 할당 메모리   */
//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//
//	/* buf는 1000, s는 4 */
//
//	char* s = NULL; //값이 할당되지않을때 초기화해야할때 NULL씀 ! (null 포인터)
//	char buf[1000];
//	printf("문자열 입력:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//	printf("buf_string:%s\n", buf);
//	printf("s_string:%s\n", s);
//	free(s);
//}

//
///* 문자열 동적 할당 메모리  InputString  */
//#include<stdio.h>
//#include<stdlib.h>
//char* InputString() { //자주쓰는 코드 !
//	char* s = NULL;
//	char buf[1000];
//	printf("문자열 입력:");
//	gets_s(buf, 1000);
//	s = (char*)malloc(strlen(buf) + 1);
//	strcpy_s(s, strlen(buf) + 1, buf);
//	return s;
//}
//void main() {
//
//	char* s = NULL;
//	s = InputString();// 위에 만든 버퍼를 만들고 복사해서 가져오는것 
//	printf("s_string:%s\n", s);
//	free(s);
//}

//
///* 문자열 동적 할당 메모리 PrintString   */
//#include<stdio.h>
//#include<stdlib.h>
//char* InputString() { //자주쓰는 코드 !
//	char* s = NULL;
//	char buf[1000];
//	printf("문자열 입력:");
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
///* 문자열 동적 할당 메모리 InputString out 파라미터   */
//#include<stdio.h>
//#include<stdlib.h>
//void InputString(char** ps) { //@@@!!!!! 
//	char* s = NULL;
//	char buf[1000];
//	printf("문자열 입력:");
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
//	InputString(&s); //왜 주소를 보내는지 아직 모르겠...
//	PrintString(s);
//	FreeString(s);
//}
//
///* 문자열  swap   */
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


///* 문자열 swap   */
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//void Swap(char** ps1, char** ps2) {//주소의 주소들이라 ** 필요  
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
///* 문자열 배열로 연습 swap   */
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//void Swap(char* s1, char* s2)//주소를 받음
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
//	Swap(s1, s2);//주소를 보냄
//
//	printf("%s %s \n", s1, s2);
//}

//
///* 문자열 char* s[2]   */
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void InputString(char** ps) { //@@@!!!!! 
//	char* s = NULL;
//	char buf[1000];
//	printf("문자열 입력:");
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
//	char* s[2] = { NULL }; //배열의 초기화는 무조건 {} 해야함 ! (포인터배열)
//	InputString(&s[0]); //왜 주소를 보내는지 아직 모르겠...
//	InputString(&s[1]); //왜 주소를 보내는지 아직 모르겠...
//	PrintString(s[0]);
//	PrintString(s[1]);
//	FreeString(s[0]);
//	FreeString(s[1]);
//
//}

//
///* 문자열 계속해서 배열에 저장 */
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
//	printf("문자열 입력:");
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
//		char* buf; //buf에 문자열 주소저장
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
///* 문자열 계속해서 배열에 저장 */
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
//	printf("문자열 입력:");
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
//		char* buf; //buf에 문자열 주소저장
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
//	PrintStringArray(&strArray, sCount); //? 이거모르겠다 ? 
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
///* 문자열 계속해서 배열에 저장 놓친 코드 치기  */
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
//	printf("문자열 입력:");
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
//		char* buf; //buf에 문자열 주소저장
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
//	PrintStringArray(&strArray, sCount); //? 이거모르겠다 ? 
//
//	UninitStringArray(strArray, sCount);
//}

//
//
///* 문자열 계속해서 배열에  저장  구조체 init   */
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
//	printf("문자열 입력:");
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
//		char* buf; //buf에 문자열 주소저장
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
//	PrintStringArray(&sarr.strArray, sarr.sCount); //? 이거모르겠다 ? 
//
//	UninitStringArray(&sarr);
//}


//
///* 문자열 계속해서 배열에  저장  구조체 init   */
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
//	printf("문자열 입력:");
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
//		char* buf; //buf에 문자열 주소저장
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
//	PrintStringArray(&sarr); //? 이거모르겠다 ? 
//
//	UninitStringArray(&sarr);
//}
//
///* 문자열 계속해서 배열에  저장  -기본코드   */
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
//	printf("문자열 입력:");
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
//		char* buf; //buf에 문자열 주소저장
//		InputString(&buf);
//		if (strcmp(buf, "exit") == 0) {
//			FreeString(buf);
//			break;
//		}
//		else {
//			AddStringArray(&sarr, buf); //추가하는것 
//		}
//	}
//	PrintStringArray(&sarr); 
//
//	UninitStringArray(&sarr);
//}

//
//
///* 문자열 - InputString return 으로  */
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
//	printf("문자열 입력:");
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
//	printf("검색할 문자열 입력 : ");
//	gets_s(str, 1000);
//	for (i = 0; i < psarr->sCount; ++i)
//		if (strcmp(str, psarr->strArray[i]) == 0)
//		{
//			printf("%s의 문자열은 %d index에 위치한다\n", str, i);
//			break;
//		}
//}
//void RemoveStringArray(StringArray* psarr) {
//	int i;
//	int delIndex;
//	printf("삭제할 문자열의 index를 입력 :");
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
//	printf("문자열 입력:");
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
//	puts("1. 문자열 입력");
//	puts("2. 문자열 출력");
//	puts("3. 문자열 검색");
//	puts("4. 문자열 삭제");
//	puts("5. CUI 화면 지우기");
//	puts("0. 프로그램 종료");
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
//// 원소의 갯수 설정해서 사용가능 
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
//	printf("검색할 문자열 입력 : ");
//	gets_s(str, 1000);
//	for (i = 0; i < psarr->sCount; ++i)
//		if (strcmp(str, psarr->strArray[i]) == 0)
//		{
//			printf("%s의 문자열은 %d index에 위치한다\n", str, i);
//			break;
//		}
//}
//void RemoveStringArray(StringArray* psarr) {
//	int i;
//	int delIndex;
//	printf("삭제할 문자열의 index를 입력 :");
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
//	printf("문자열 입력:");
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
//	puts("1. 문자열 입력");
//	puts("2. 문자열 출력");
//	puts("3. 문자열 검색");
//	puts("4. 문자열 삭제");
//	puts("5. CUI 화면 지우기");
//	puts("0. 프로그램 종료");
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
//// 원소의 갯수 설정해서 사용가능 //동적메모리 사용 
//typedef struct _stringarray_tag  //추상화한것 
//{
//	char** strArray;
//	int sCount;
//	int capacity; // 최대크기 
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
//	printf("검색할 문자열 입력 : ");
//	gets_s(str, 1000);
//	for (i = 0; i < psarr->sCount; ++i)
//		if (strcmp(str, psarr->strArray[i]) == 0)
//		{
//			printf("%s의 문자열은 %d index에 위치한다\n", str, i);
//			break;
//		}
//}
//void RemoveStringArray(StringArray* psarr) {
//	int i;
//	int delIndex;
//	printf("삭제할 문자열의 index를 입력 :");
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
//	free(psarr->strArray); //?? 뭐가 다르지?+
//
//
//}
//
//char* InputString() {
//	char* s = NULL;
//	char buf[1000];
//	printf("문자열 입력:");
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
//	puts("1. 문자열 입력");
//	puts("2. 문자열 출력");
//	puts("3. 문자열 검색");
//	puts("4. 문자열 삭제");
//	puts("5. CUI 화면 지우기");
//	puts("0. 프로그램 종료");
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
//// 원소의 갯수 설정해서 사용가능 //동적메모리 사용 
//typedef struct _stringarray_tag  //추상화한것 
//{
//	char** strArray;
//	int sCount;
//	int capacity; // 최대크기 
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
//	printf("검색할 문자열 입력 : ");
//	gets_s(str, 1000);
//	for (i = 0; i < psarr->sCount; ++i)
//		if (strcmp(str, psarr->strArray[i]) == 0)
//		{
//			printf("%s의 문자열은 %d index에 위치한다\n", str, i);
//			break;
//		}
//}
//void RemoveStringArray(StringArray* psarr) {
//	int i;
//	int delIndex;
//	printf("삭제할 문자열의 index를 입력 :");
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
//	// 제거할때는 반대로
//	int i;
//	for (i = 0; i < psarr->sCount; ++i) {
//		FreeString(psarr->strArray[i]); //각각의 값 동적 메모리값 
//	}
//	free(psarr->strArray); // 큰 동적메모리 
//	 
//
//}
//
//char* InputString() {
//	char* s = NULL;
//	char buf[1000];
//	printf("문자열 입력:");
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
//	puts("1. 문자열 입력");
//	puts("2. 문자열 출력");
//	puts("3. 문자열 검색");
//	puts("4. 문자열 삭제");
//	puts("5. CUI 화면 지우기");
//	puts("0. 프로그램 종료");
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
///*  형식 변환 */
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
///*  명시적 변환 */
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
///* 명시적 변환 */
//void main() {
//	int a = 10;
//	int b = 3;
//	double result = (double)a / (double) b;
//
//	printf("%g\n", result);
//}

//
///* 암묵적 변환 */
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
///* 주소 형식 변화 -..big and   */
//void main() {
//	int n = 0x4241;
//	printf("%d %x\n", n, n);
//	printf("%p %p\n", (int*)&n, &n); //같은것
//	printf("%p %p\n", (char*)&n, &n); //주소는 같음
//	printf("%p %p\n", (char*)&n+1, &n+1); // but 1바이트증가, 4바이트 증가
//	printf("%x %x\n", *(char*)&n, *&n ); 
//
//}

//
///* 주소 형식 변화 -..big and   */
//void main() {
//	int n = 0x44434241;
//	
//	printf("%d %d\n", ((char*)&n)[0], ((char*)&n)[0]);
//	printf("%d %d\n", ((char*)&n)[1], ((char*)&n)[1]);
//	printf("%d %d\n", ((char*)&n)[2], ((char*)&n)[2]);
//	printf("%d %d\n", ((char*)&n)[3], ((char*)&n)[3]);
//
//	printf("%d %x\n", n, n);
//	printf("%p %p\n", (int*)&n, &n); //같은것
//	printf("%p %p\n", (char*)&n, &n); //주소는 같음
//	printf("%p %p\n", (char*)&n + 1, &n + 1); // but 1바이트증가, 4바이트 증가
//	printf("%x %x\n", *(char*)&n, *&n);
//	
//}


/* 주소 형식 변화 -..big and   */
void main() {
	int n = 0x44434241;
	char* p = (char*)&n; //1바이트 씩 이동하려고 char
	printf("%c %d\n", p[0], p[0]);
	printf("%c %d\n", p[1], p[1]);
	printf("%c %d\n", p[2], p[2]);
	printf("%c %d\n", p[3], p[3]);

	
}
