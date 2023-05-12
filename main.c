#include "function.h"

int main(){
	Product *p[20];
	int index =0,count=0;
	int menu;
	index=loadData(p);
	count=index;
	 while (1) {
    menu = selectMenu();
    if (menu == 0)
      break;
    if( menu==1 || menu==3||menu==4 ||menu==5||menu==6||menu==7)
      if(count==0){
        printf("대출자가 없습니다.\n");
        continue;
      }
    if (menu == 1) {
      listBook(sp, index);
    }  else if (menu == 2) {
      sp[index] = (Book *)malloc(sizeof(Book));
      addBook(sp[index++]);
      count++;
    } else if (menu == 3) {
      int no = selectDateNo(sp, index);
      if (no == 0) {
        printf("=> 취소됨!\n");
        continue;
      }
      updateBook(sp[no - 1]);
    } else if (menu == 4) {
      int no = selectDateNo(sp, index);
      if (no == 0) {
        printf("=> 취소됨!\n");
        continue;
      }
      int deleteok;
      printf("정말로 삭제하시겠습니까?(삭제 :1)");
      scanf("%d", &deleteok);
      if (deleteok == 1) {
        free(sp[no - 1]);
        sp[no - 1] = NULL;
        printf("=> 삭제됨!\n");
        count--;
      }
    }else if(menu==5){
        saveData(sp,index);
    }else if(menu==6){
      
    }else if(menu==7){

    } 
  }
  printf("종료됨!\n");
	return 0; 
}