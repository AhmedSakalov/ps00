#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int a){
    char c[12];
    int f = 0;
    //разрядность число
    int r = -1;
    int b = a;
    
    //флаг -
    if(a < 0){
        f++;
        a = -a;
        r = 0;
    }
    do{
        b = b/10;
        r++;
    }while(b != 0);
    
    for(int i = 0; i <= r; i++){
        c[r - i] = (a % 10) + '0';
        a = a/10;
    }
    if(f){
        c[0] = '-';
    }
    write(1,c,r+1);
}

int main(){
    ft_putnbr(-0);
    return 0;
}