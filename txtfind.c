#include <stdio.h>

#include <string.h>
#define WORD 30
#define LINE 256
#define TWO 2
#define ONE 1

int getLine(char s[])
{
	int SizeLine = 0;
	char letter = getchar();

		while(letter=='\n')  //remove the spare whitelines in the begening of the file.
			letter = getchar();

	if(letter==EOF) //if the input is empty.
		return 0;

	while((letter != EOF) &&(letter != '\n') && (SizeLine < LINE)) //checks if its not a "enter" char or end of file
	{
		s[SizeLine]=letter; //creating a string until \n
		SizeLine++;
		letter = getchar();//get next lettter
	}
	s[SizeLine]='\0'; //ending the string with '\0'

	return SizeLine;

}



int getword(char w[])
{
	int SizeWord = 0;
	char letter = getchar(); //get the first letter

	while((letter != EOF)&&(letter != ' ') &&(letter != '\t')&&(letter != '\n') && (SizeWord < WORD))
	{
		w[SizeWord]=letter;//creating a string until ' '
		SizeWord++;
		letter = getchar();//gets the next letter
	}



	w[SizeWord]='\0'; // ending the string with '\0'


	return SizeWord;

}


int isSimilar(char* s,char* t){
   
   if (strlen(s)>strlen(t)||strlen(t)-strlen(s)>1)
      return 0;

    
     char maybe[WORD];
     maybe[0]='\0';
    int i,j =0;   
    for(i=0;*(t+i)!='\0';i++){
     
	
      if(*(s+j)==*(t+i)){
      
        strncat(maybe,t+i,1);
        j++;
              //checking if there will be more than 1  inaccurate letter
    }
    }
    
    if(j==strlen(s)){
      
      return 1;
  }
   else
    return 0;

}
void printLine(char * word)
{
	char line[LINE];
	int SizeLine = getLine(line);
    while(SizeLine != 0)
	{
		if(strstr(line, word)) //checks if the word cat is in a line
			printf("%s\n", line);

		SizeLine = getLine(line); // gets the next line until EOF

}
   
    
}
void printWordByWord(char *word)
{   
    char singleWord[WORD];
	int SizeWord = getword(singleWord);//getting the first word
    SizeWord = getword(singleWord);//going to the next word
    SizeWord = getword(singleWord);//going to the next word 
    
     

	while(SizeWord != 0)
	{
      

		if(isSimilar(word,singleWord))
			printf("%s\n", singleWord); //Prints if the word is similar by 1 letter to the original word


		SizeWord = getword(singleWord); // give the next word until EOF
	}
    

}

int main()
{  
  
    char word[WORD];
    char operator;
   getword(word);


 scanf(" %c", &operator);
  
  if(operator=='a')
  printLine(word);

   if(operator=='b')    
   printWordByWord(word);
   

return 0;
}


