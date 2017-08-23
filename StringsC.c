/**
	* Written by Mian Safyan Shah
	* Contact : safyanshah@live.com
	*
	* This program demonstrates const char in C
	*
	* Use the command line to compile and run this program. It'll run in any IDE but 
	* using command line is preferred.
	*
	* How to compile : Open Command Prompt on Windows or Terminal on Mac OS/Linux/Unix
	* then navigate to the directory of this program and type the following command
	*
	* gcc StringsC.c -o StringsC
	*
	* How to Run : after successful compilation, type ./StringsC
	*
	*
  */
  
  #include <stdio.h>
  
  int main(void) {
  
  	const char string[] = "This is a constant character string. It works the same as String in Java.\n";
  	
  	printf(string);
  }