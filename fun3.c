#include<stdio.h>
#include <string.h>
#include <stdlib.h>



void samewords(char input[]){
static const char filename[] = "file.txt";
FILE *file = fopen(filename, "r");

if ( file != NULL )
{
    char line[256]; /* or other suitable maximum line size */
    while (fgets(line, sizeof line, file) != NULL) /* read a line */
    {
       ////////
puts(line);
char* p=line;//pointer to start line


for( int i=0;i<=(strlen(line));i++){//run on all line
if (line[i]==' ' ||line[i]=='\0'\\line[i]=='\n'){
if(substring(*p, input))
{
if(similar(line,input,1)){
printf("%s \n",*p);
}
}
*p=*(p+i++);//go tothe index of the next word
}
}


    }
    fclose(file);
}
else
{
    //file doesn't exist
}
}
