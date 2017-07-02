#include <stdio.h>;

void main(){
    void input(char s[]);
    void expand (char a[], char b[]);
    void output(char s[]);
    char s1[1000], s2[1000];
    input(s1);
    output(s1);
    expand(s1,s2);
    output (s2);
}

void input (char s[]){
    int c, i;
    for (i=0;((c=getchar())!=EOF) && (c!='\n') && (i<1000);)
        s[i++]=c;
    //++i;
    s[i]='\n';
}

void output(char s[]){
    int i;
    for (i=0; s[i]!='\n' && s[i]!=EOF && i<1000;)
        printf("%c",s[i++]);
    printf("%c",s[i]);
}

void expand(char a[], char b[]){
    int i,j,k;
    for (i=j=0;a[i]!='\n' && i<1000 && j<1000 && a[i]!=EOF; ++i){
        if (a[i]=='-'){
            b[j++]=' ';
            b[j++]='m';
            b[j++]='i';
            b[j++]='n';
            b[j++]='u';
            b[j++]='s';
            b[j++]=' ';
        }
        else if (a[i]=='+'){
            b[j++]=' ';
            b[j++]='p';
            b[j++]='l';
            b[j++]='u';
            b[j++]='s';
            b[j++]=' ';
        }
        else if (a[i]=='/'){
            b[j++]=' ';
            b[j++]='d';
            b[j++]='i';
            b[j++]='v';
            b[j++]='i';
            b[j++]='d';
            b[j++]='e';
            b[j++]=' ';
        }
        else if (a[i]=='*'){
            b[j++]=' ';
            b[j++]='m';
            b[j++]='u';
            b[j++]='l';
            b[j++]='t';
            b[j++]='i';
            b[j++]='p';
            b[j++]='l';
            b[j++]='y';
            b[j++]=' ';
        }
        else
            b[j++]=a[i];

    }
    b[j]='\n';
}
