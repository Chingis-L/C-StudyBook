#include <stdio.h>

int tens (int i);
int setbits(int x, int p, int n, int y);

void main(){
    int x=0, y=0, i, j, c;
    int p,n;
    char x1[1000],y1[1000];
    printf("Enter the number x\n");
    for (i=0; ((c=getchar())!=EOF) && (i<=999) && (c!=' ') && (c!='\n'); ++i){
        x1[i]=c;
        j=i;
    }
    if (c=='\n'){
        x1[i]=c;
        ++i;
    }
    if (c==' '){
        x1[i]='\n';
        ++i;
    }
    for (i=0; (i<=j)&&(x1[i]!='\n'); ++i){
        x=x+((x1[i]-'0')*tens(j-i));
    }
    printf("        %d\n",x);
    printf("Enter the number y\n");
    for (i=0; ((c=getchar())!=EOF) && (i<=999) && (c!=' ') && (c!='\n'); ++i){
        y1[i]=c;
        j=i;
    }
    if (c=='\n'){
        y1[i]=c;
        ++i;
    }
    if (c==' '){
        y1[i]='\n';
        ++i;
    }
    for (i=0; i<=j; ++i){
        y=y+((y1[i]-'0')*tens(j-i));
    }
    printf("        %d\n",y);
    printf("Enter the position p\n");
    p=getchar();
    p=p-'0';
    printf("        %d\n",p);
    printf("Enter the n number\n");
    n=getchar();
    n=3;
    printf("        %d\n",n);
    printf("The final number is:%d\n", setbits(x,p,n,y));
}

int tens(int a){
    int b=1;
    while(a>0){
        b=b*10;
        --a;
    }
    return b;
}

int setbits(int x, int p, int n, int y){
    int x1,y1;
    x1=x&((~(~0<<(p-n)))|((~0<<p)));
    y1=(y<<(p-n))&(~(~0<<p));
    return(x1|y1);
}
