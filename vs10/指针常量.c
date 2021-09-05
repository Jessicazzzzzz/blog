#include<stdio.h>
#include<string.h>
int main(){
//字符串 本身一个一维数组
//字符串数组  二维数组    * const


//    常量指针  不能修改指向的内容  但是能够重新赋值(重新换一个指向)   const int *ptr;

//    指针常量     能修改指向的内容   不能够重新赋值(不能重新换一个指向)  int *const  p2
    int * const p9;
    char arr[4][6] = {"abc", "efg", "hij", "klm"};  //指针常量

//  指针常量 int *const  arr
//    arr[0] = "frg";// 不能够重新赋值(不能重新换一个指向)
    strcpy(arr[0], "aaaaa");// 能修改指向的内容
//arr[4][6]   指针常量

    printf("value %s\n",  arr[0]);
//数组指针     1    arr1  指针常量 1  常量指针  2

//--------------------常量指针--------------
//    常量指针  不能修改指向的内容  但是能够重新赋值(重新换一个指向)   const int *ptr;

//    指针常量     能修改指向的内容   不能够重新赋值(不能重新换一个指向)  int *const  p2
    int const *p6;
    char *arr1[4]={"abc", "efg", "hij", "klm"};  //常量指针
//    换一个指向
    char *arr5 = "ABC";
    arr1[0] = "ABC";//重定向  地址
//
    printf("value %s\n",  arr1[0]);
//不能修改指向内容
//  strcpy(arr1[0], "BBBBB");
    printf("value %s\n",  arr1[0]);
}
