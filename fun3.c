#include<stdio.h>
#include <string.h>
#include <stdlib.h>
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
char* p=line;


for( int i=0;i<=(strlen(line));i++){
if (line[i]==' ' ||line[i]=='\0'){
if(substring(*p, input))
{
if(similar(line,input,1)){
printf("%s \n",*p);
}
}
*p=*(p+i++);
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
