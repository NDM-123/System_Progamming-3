#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void findsimilar(char filename[],char  input[]){//input is a string we want to find in text

FILE *file = fopen(filename, "r");
if ( file != NULL )//file is exist
{
    char line[256]; /* or other suitable maximum line size */
    while (fgets(line, sizeof line, file) != NULL) /* read a line  stores it into the string pointed to by line*/
    {
       ///////////////////////////////////////////////////////////work with 1 line
       
     char temp_word[100];/* or other suitable maximum word size */
    char newString[10][10]; 
    int i=0,//run on the line
    int j=0,//the start of the temp word 
    int ctr=0;// the temp word index
         
 
 
    for(i=0;i<=(strlen(temo_word));i++)
    {
        // if space or \0 found, assign NULL into newString[ctr]
        if(temp_word[i]==' '||temp_word[i]=='\0')
        {
            newString[ctr][j]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else//we are in the middle of the word
        {
            newString[ctr][j]=temo_word[i];
            j++;
        }
    }
    //lcs
    for(i=0;i < ctr;i++){
      if( findLCS(newString[i],input,strlen(newString[i]),strlen(input))>strlen(input))//the word is similar!
           printf(newString[i]);
           }
    }
    ///////////////////////////////////////////////////////////////// 
    fclose(file);
}
else
{
printf("file doesnt exist")
}
}
