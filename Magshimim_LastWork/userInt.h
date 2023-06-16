#ifndef userInt
#define userInt

/*
Function will print the menu
Input: None
Output: None
*/
void printMenu(void);

/*
Function will print the load options menu
Input: None
Output: None
*/
void printLoadMenu(void);

/*
Function will get the option for the main menu
Input: None
Output: option - the option inputted
*/
int getMenuOption(void);

/*
Function will get the loading option
Input: None
Output: option - the inputted option
*/
int getLoadOption(void);

/*
Function will print the list of frames
Input: None
Output: None
*/
void printFrameList(void);

/*
Function wil print the requirement for the option by the option and section
Input: option - the option selected
	   section - the section of the print
Output: None
*/
void printOptionReq(int option, int section);

/*
Function will get an input of the type string from the user and return it
Input: None
Ouput: userInput
*/
char* getInputString(void);

/*
Function will get the input of the type int from the user and return it
Input:None
Output: UserInput
*/
int getInputInt(void);



#endif