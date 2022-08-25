#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100]; /* creates an array of char s that will store 100 characters from index 0 to 99 -> declare a variable s and it can accept a maximum of 100 characters */
    scanf("%[^\n]%*c",s); /* means that all the characters entered as the input, including the spaces, until we hit the enter button are  stored in the variable, 
                          name; provided we allocate sufficient memory for the variable. -> get the entire sentence*/
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    printf("Hello, World!\n");
    printf("%s", s);
    return 0;
}
