#include "function.h"
void addProduct(Product *s){//제품 추가 함수
  printf("제품이름: ");
  scanf("%s",s->name);
  printf("종류 : ");
  scanf("%s",s->kind);
  printf("가격: ");
  scanf("%d",&s->price);
}
void readProduct(Product s){//하나의 제품 정보 읽는 함수
  printf("%s %s %d %d\n",s.kind,s.name,s.price,s.step);
}
void updateProduct(Product *s){//제품 수정 함수
  printf("제품이름: ");
  scanf("%s",s->name);
  printf("종류 : ");
  scanf("%s",s->kind);
  printf("가격: ");
  scanf("%d",&s->price);

}
void listProduct(Product *s[], int count){//전체 제품 정보를 읽는 함수
printf("NO 종류 음식이름  가격 맵기단계\n");
  printf("===============================\n");
    for (int i = 0; i < count; i++) {
    if (s[i] == NULL)
      continue;
    printf("%2d ", i + 1);
    readProduct(*s[i]);
  }
  printf("\n");
}
int selectMenu(){//메뉴 호출 함수
int menu;
    printf("\n ┌───▣─▣─CUBE_KIOSK─▣─▣───┐\n");
    printf("\n");
    printf("┌▣    1. 메뉴조회        ▣┐\n");
    printf("┌▣    2. 메뉴추가        ▣┐\n");
    printf("┌▣    3. 메뉴수정        ▣┐\n");
    printf("┌▣    4. 메뉴삭제        ▣┐\n");
    printf("┌▣    5. 파일저장        ▣┐\n");
    printf("┌▣    6. 메뉴이름검색    ▣┐\n");
    printf("┌▣7. 일정가격이하메뉴검색▣┐\n");
    printf("┌▣8. 일정가격이상메뉴검색▣┐\n");
    printf("┌▣    9. 맵기단계 조정   ▣┐\n");
    printf("┌▣    0. 종료            ▣┐\n");
    printf("\n └───▣─▣─CUBE_KIOSK─▣─▣───┘\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}
int selectDateNo(Product *s[],int count){//제품번호 선택 함수
int no;
  listProduct(s, count);
  printf("번호는 (취소 :0)? ");
  scanf("%d", &no);
  return no;
}
void saveData(Product *s[],int count){//파일 저장 함수

}
int loadData(Product *s[]){//파일 로드 함수

}
void searchName(Product *s[],int count){//제품 이름 찾는 함수

}
void searchLowPrice(Product *s[],int count){//일정 가격 이하의 제품 찾는 함수

}
void searchHighPrice(Product *s[],int count){//일정 가격 이상의 제품 찾는 함수

}
void setstep(Product *s[],int count){//맵기 단계를 설정하는 함수

}
