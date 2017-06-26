#include <stdio.h>

void squeeze(char str1[], char str2[]);

void main(){
    char s1[1000], s2[1000];
    int i, c;
    while(1){
        printf("Enter the 1st array\n");
        for (i=0; (i<1000)&&((c=getchar())!=EOF)&&(c!='\n'); ++i){
            s1[i]=c;
        }
        if (c=='\n'){
            s1[i]=c;
            ++i;
        }
        printf("Enter the 2nd array\n");
        for (i=0; (i<1000)&&((c=getchar())!=EOF)&&(c!='\n'); ++i){
            s2[i]=c;
        }
        if (c=='\n'){
            s2[i]=c;
            ++i;
        }
        squeeze(s1,s2);
    }
}

void squeeze(char str1[], char str2[]){
    int i,j,a,b,k,x;
    char s[1000];
    for (i=0; str2[i]!='\n' && i<1000; ++i){
        j=0;
        a=0;
        while ((s[j]!='\n') && (j<=i)){
            if (s[j]==str2[i]){
                a=1;
                break;
            }
            ++j;
    }
    if (a==0){
        s[j]=str2[i];
        j=j+1;
        b=j;
        s[j]='\n';
    }
    }
    for(i=k=0;str1[i]!='\n';++i){
        x=0;
        for(j=0;(s[j]!='\n') && j<=b; ++j)
            if (str1[i]==s[j])
                x=1;
            if (x==0)
                str1[k++]=str1[i];
    }
    str1[k]='\n';
    printf("The modified array is\n");
        for(i=0; str1[i]!='\n'; ++i)
            printf("%c ", str1[i]);
        printf("\n");
}
