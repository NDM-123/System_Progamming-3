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

    int i = 0;
    ptr_file = fopen("input.txt", "r"); // my input text file

char *token1;
char *token2;
if(fgets(buf, LINE, ptr_file) != NULL)
{

char *line =buf;
char *search = " ";


// Token will point to "SEVERAL".
token1 = strtok(line, search);


// Token will point to "WORDS".
token2 = strtok(NULL, search);

}


    char str2[30]="a";
char*p=str2;
if(*p==*token2)
{
char c[30];
  strcpy(c, token1);
    while (fgets(buf, LINE, ptr_file) != NULL) {
        if (substring(buf, token1)) {
            char *p = buf;


            if (similar(p, token1, 1)) {
                print_line(p);
            }
           
        }

        }
        fclose(ptr_file);
}
else
{
char c[30];
  strcpy(c, token1);
    while (fgets(buf, LINE, ptr_file) != NULL) {
        if (substring(buf, c)) {
            char *p = buf;


             if (similar(p, c, 1)) {
    print_word(p,c);
            }
           
        }

        }
        fclose(ptr_file);
}
        return 1;
    }
