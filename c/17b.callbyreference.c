#include<stdio.h>
void swapcallbyreference(int *k, int *y){
    int temp=*k;
    *k=*y;
    *y=temp;
}
void swapcallbyvalue(int k, int y){
    int temp=k;
    k=y;
    y=temp;
}
int main(){
    int k=3,y=7;
    printf("%d %d\n",k,y);
    swapcallbyvalue(k,y);   // it will not swap 
    printf("%d %d\n",k,y);
    swapcallbyreference(&k,&y);
    printf("%d %d",k,y);

}