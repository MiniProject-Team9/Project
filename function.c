#include "function.h"
void addProduct(Product *s){//제품 추가 함수
  printf("제품이름: ");
  scanf("%[^\n]s",s->name);
  printf("종류 : ");
  scanf("%s",s->kind);
  printf("가격: ");
  scanf("%d",&s->price);
  s->step=0;
}
void readProduct(Product s){//하나의 제품 정보 읽는 함수
  printf("%s %s %d %d\n",s.kind,s.name,s.price,s.step);
}
void updateProduct(Product *s){//제품 수정 함수
  printf("제품이름: ");
  scanf("%[^\n]s",s->name);
  printf("종류 : ");
  scanf("%s",s->kind);
  printf("가격: ");
  scanf("%d",&s->price);

}
//delete 함수는 따로 만들지 않고 main에서 사용하게 했다.
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
    printf("\n ┌───▣─▣─GRAIN_KIOSK─▣─▣───┐\n");
    printf("\n");
    printf("┌▣    1. 메뉴조회        ▣┐\n");
    printf("┌▣    2. 메뉴추가        ▣┐\n");
    printf("┌▣    3. 메뉴수정        ▣┐\n");
    printf("┌▣    4. 메뉴삭제        ▣┐\n");
    printf("┌▣    5. 파일저장        ▣┐\n");
    printf("┌▣    6. 메뉴 이름 검색    ▣┐\n");
    printf("┌▣    7. 음식 종류 검색   ▣┐\n");
    printf("┌▣    8. 맵기단계 조정   ▣┐\n");
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
FILE *fp;
    int i=0;
    fp=fopen("Product.txt","wt");
    for(;i<count;i++){
        if(s[i]== NULL) continue;
        fprintf(fp,"%s %d %d %s\n",s[i]->kind,s[i]->price,s[i]->step,s[i]->name);
    }
    fclose(fp);
    printf("저장됨!\n");

}
int loadData(Product *s[]){//파일 로드 함수
FILE *fp;
int i=0;
fp=fopen("Product.txt","rt");
    if(fp==NULL){
        printf("\n=> 파일 없음\n");
        return 0;
     }
    for(;i<20;i++){
        s[i]=(Product *)malloc(sizeof(Product));
        fscanf(fp," %s",s[i]->kind);
        if(feof(fp)) break;
        fscanf(fp," %d",&s[i]->price);
        fscanf(fp," %d",&s[i]->step);
        fscanf(fp,"%[^\n]s",s[i]->name);
    }
    fclose(fp);
    printf("=> 로딩 성공!\n");
    return i;
}
void searchName(Product *s[],int count){//제품 이름 찾는 함수
  char tname[50];
  int check=0;
  printf("\n 검색할 음식은? ");
  scanf("%[^\n]s",tname);
  printf("NO 종류 음식이름  가격 맵기단계\n");
  printf("===============================\n");
  
  for(int i=0; i<count; i++){
    if(s[i]==NULL) continue;
    if(strstr(s[i]->name,tname)){
      printf("%2d ",i+1);
      readProduct(*s[i]);
      check++;
    }
    else if(strstr(s[i]->name,tname)){
      printf("%2d ",i+1);
      readProduct(*s[i]);
      check++;
    }
  }
    if(check==0)printf("=> 검색 결과 없음\n");

}
void searchType(Product *s[],int count){//일정 가격 이하의 제품 찾는 함수
  char tname[50];
  int check=0;
  printf("\n 검색할 음식 종류는? ");
  scanf("%s",tname);
  printf("NO 종류 음식이름  가격 맵기단계\n");
  printf("===============================\n");
  
  for(int i=0; i<count; i++){
    if(s[i]==NULL) continue;
    if(strstr(s[i]->kind,tname)){
      printf("%2d ",i+1);
      readProduct(*s[i]);
      check++;
    }
    else if(strstr(s[i]->kind,tname)){
      printf("%2d ",i+1);
      readProduct(*s[i]);
      check++;
    }
  }
    if(check==0)printf("=> 검색 결과 없음\n");

}
void searchLowPrice(Product *s[],int count){//일정 가격 이하의 제품 찾는 함수
 char tname[50];
  int check=0;
  printf("\n 검색 원하는 가격은? ");
  scanf("%s",tname);
  printf("NO 종류 음식이름  가격 맵기단계\n");
  printf("===============================\n");
  
  for(int i=0; i<count; i++){
    if(s[i]==NULL) continue;
    if(strstr(s[i]->kind,tname)){
      printf("%2d ",i+1);
      readProduct(*s[i]);
      check++;
    }
    else if(strstr(s[i]->kind,tname)){
      printf("%2d ",i+1);
      readProduct(*s[i]);
      check++;
    }
  }
    if(check==0)printf("=> 검색 결과 없음\n");
}
void setstep(Product *s[],int count){//맵기 단계를 설정하는 함수

}
