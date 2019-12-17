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



int wordleng=getword(line);
if(substring(line, input))
{
if(similar(line,input,1)){
printf("%c \n",line);
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
