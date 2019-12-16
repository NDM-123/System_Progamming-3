#include<stdio.h>
#include <string.h>
#include <stdlib.h>

#define WORD 30
#define LINE 256

int getLine(char s[]) {
    int len = 0;
//char ch;
    int size = strlen(s);
    while (len < size) {
        scanf("%c", &s[len]);
        if (s[len] == '\n')break;
        len++;
    }
    return len;
}

int getword(char w[]) {
    int len = 0;
    int size = strlen(w);
    while (size < len) {
        scanf("%c", &w[len]);
        if (w[len] == '\n')break;
        if (w[len] == '\t')break;
        len++;
    }
    return len;

}

int substring(char *str1, char *str2) {

    int wordlen = 0;
    int j = 0;
    int full = strlen(str2);
    int len = strlen(str1);
    for (int i = 0; i < len; i++) {
        if ((str2 + j) == (str1 + i)) {
            wordlen++;
            if (wordlen == full)return 1;
            j++;
        }
    }
    return 0;
}

int similar(char *s,char *t,int n){
if(strlen(s)>strlen(t))return 0;
int flag=0;
int i=0;;
for(int j=0;j<(s[i]!=0 && t[j]!=0);j++){
   if(s[i]==t[j]){
	i++;
	j++;
}else{
flag++;
j++;
}
i++;
}	
if(flag>n){return 0;}
else{return 1;}
    



}
void print_lines(char *str){
    for (int i = 0; i < LINE ; ++i) {
        if(str[i]=='\n')break;
    printf("%c",str[i]);
    }
    return;
}
void print_similar_words(char *str){
    for (int i = 0; i < WORD ; ++i) {
        if(str[i]=='\n')break;
        if(str[i]=='\t')break;
        printf("%c",str[i]);
    }
    return;

}
        int main(){
    char opt;
    char s[LINE];
    char w[WORD];
    do {
        printf("Enter your choice: to search word 'a' or 'b'\n");
        printf("Enter anything else to quit\n");
        scanf(" %c", &opt);
        switch (opt) {
            case 'a':
                printf("a\n");

                break;
            case 'b':
                printf("b\n");


                break;
            default:
                opt = 'e';
                printf("Goodbye\n");
                break;
        }
    } while (opt != 'e');
    return 0;
}

