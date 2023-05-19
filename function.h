#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char name[30];//제품 이름
	char kind[20];//제품 종류
	int step;
	int price;//제품 가격
}Product;

void addProduct(Product *s);//제품 추가 함수
void readProduct(Product s);//하나의 제품 정보 읽는 함수
void updateProduct(Product *s);//제품 수정 함수
void listProduct(Product *s[], int count);//전체 제품 정보를 읽는 함수
int selectMenu();//메뉴 호출 함수
int selectDateNo(Product *s[],int count);//제품번호 선택 함수
void saveData(Product *s[],int count);//파일 저장 함수
int loadData(Product *s[]);//파일 로드 함수
void searchName(Product *s[],int count);//제품 이름 찾는 함수
void searchLowPrice(Product *s[],int count);//일정 가격 이하의 제품 찾는 함수
void searchHighPrice(Product *s[],int count);//일정 가격 이상의 제품 찾는 함수
void setstep(Product *s[],int count);//맵기 단계를 설정하는 함수

