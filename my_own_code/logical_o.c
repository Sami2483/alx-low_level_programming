#include <stdio.h>
int main(){
int a=10;
int b=20;
int c =30;
int d =40;

if((a<b)&&(b<c)){
printf("AND: operatior runs if two statments are true\n");
}
if((a>b)&&(b<c)){
printf("not running");

}else{
printf("this is from else \n");
}
return (0);

}
