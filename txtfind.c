#include<stdio.h>
#include <string.h>
#include <stdlib.h>

#define WORD 30
#define LINE 256
#ifndef NULL
#define NULL 0
#endif

int substring(char *str1, char *str2) {

    int wordlen = 0;
    int j = 0;
    int full = strlen(str2);
    int len = strlen(str1);
    for (int i = 0; i < len; i++) {
        if ((str2[j]) == (str1[i])) {
            wordlen++;
            if (wordlen == full)return 1;
            j++;
        }
    }
    return 0;
}

int search(char *s,char a){
    int k=0;
    for(;k<strlen(s);k++){
        if(s[k]==a)return k;
    }
    return k;
}

int similar(char *s, char *t, int n) {

    int flag = 0;
    int i = 0;
    int j = 0;
    s=s+search(s,t[0]);
    for (; i < strlen(s) && j < strlen(t); i++) {
        if (s[i] == t[j]) {
            j++;

        } else {
            flag++;
        }
        if(s[i]==' ')break;
        if(s[i]=='\n')break;
        if(s[i]=='\t')break;
        if(s[i]=='\0')break;

    }
    char c =s[i];
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))flag++;
    if (flag > n) { return 0; }

    else { return 1; }

}
void print_line(char *p){
    printf("%s\n", &*p);
}
void print_word(char *p,char *key){
    for (int j = 0; j < LINE; ++j) {
        if (p[j] == key[0]) {
            for (int k = j; k <LINE ; ++k) {
                printf("%c", p[k]);
                if((p[k] >= 'a' && p[k] <= 'z') || (p[k] >= 'A' && p[k] <= 'Z')){continue;}
                else{break;}
            }


        }
    }
    printf("\n");
}


int main() {
    FILE *ptr_file;
    char buf[LINE];
    char key[] = "cat"; // the string I am searching for
    char wordcount[WORD];
    int i = 0;
    ptr_file = fopen("testa.txt", "r"); // my input text file
    while (fgets(buf, LINE, ptr_file) != NULL) {
        if (substring(buf, key)) {
            char *p = buf;


            if (similar(p, key, 1)) {
                print_line(p);
            }
            if (similar(p, key, 1)) {
    print_word(p,key);
            }
        }

        }
        fclose(ptr_file);

        return 1;
    }

