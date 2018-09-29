

//--------------------------------------------------
// INCLUDE SECTION
//--------------------------------------------------
#include "pal.h"

//--------------------------------------------------
// gen_num
//--------------------------------------------------
int gen_num(int lb, int ub) {
	//1. We create the output variable with an initial value.
	int res = 0;

	//2. We assign num to a random value in the desired range
	res = (rand() % (ub - lb)) + lb;

	//3. We return the output variable
	return res;
}

//--------------------------------------------------
// my_getchar
//--------------------------------------------------
char my_get_char() {
	//1. We create the output variable with the value the user has input by keyboard
	char res = getchar();

	//2. We discard any extra character the user has input by keyboard
	boolean finish = False;
	char dummy_char = ' ';

	while (finish == False) {
		dummy_char = getchar();
		if (dummy_char == '\n')
			finish = True;
	}

	//3. We return the output variable
	return res;
}

//--------------------------------------------------
// initialise_array
//--------------------------------------------------
void initialise_array(int a[6], int num) {

	//int numbers[10] = {num1, num2, num3, num4, num5, num6};

	//This methods converts the pal_num from main.c to its individual int's 
	int i= 0;
	int thisNum;
    int divisor = 100000;

    if(num > 0){

    for(i=0; i<6;i++){
    thisNum = (num / divisor) % 10; //%10 removes any decimal, rounding the number up 

    divisor = divisor/10; //Make the divisor smaller each time

    a[i] = thisNum; //set the current position in array to thisNum

   

	
	
	}





}else{
		printf("pal_num must be greater than 0");

//--------------------------------------------------
// is_pal
//--------------------------------------------------
boolean is_pal(int a[6]) {


		boolean b = True;

				int i = 0;
				int size = 6;
				int element;
				int reverseElement;
				int x = 0;
				int num = 0;
				int* p = a;


				for (i = 0; i < 6; i++) {

					//Get elements from array starting from end and store

					element = a[i];

					//printf("%d", element);

				}

				//printf("\n Reverse: \n ");

				for (i = size - 1; i >= 0; i--) {

					reverseElement = a[i];
					// printf("%d", reverseElement);




				}


				//Compare all elements of both arrays
				if (element != reverseElement) {


					b = False; //Meaning the number is not a palindrome if b is false

				}


				return b;

}

//--------------------------------------------------
// ask_for_command
//--------------------------------------------------
char ask_for_command() {
	char res = ' ';

	printf("Enter command:");
	
	res = my_get_char();
	

	return res;
}

//--------------------------------------------------
// process_movement
//--------------------------------------------------
void process_movement(int a[6], int** p_p, int* p_nm, char c){

	int i=0;
	//char c = res from ask_for_command method
	//int a[6] = array holding the pal_num
	//int* p_nm = pointer to number of attempts (used to increment moves)
	//int ** P_P = pointer to the array pointer (used to edit array values)
	
	switch(c){
	
	
	case 'a':

			if ((*p_p) > &a[0]) {
			
			(*p_p) = (*p_p)-1;
			
			
			(*p_nm)=+1;
			
			

			
			printf("\n");
		
		break;


	case 'd':
		//If we are not in the last position (right)		
		if ((*p_p) < (&a[0] + 5)) {
			//moveing pointer once to the right 
			(*p_p) = (*p_p) + 1;
			
			//update the number of movements
			(*p_nm) = (*p_nm) + 1;

			//clearing the screen with 50 emptylines each time a valid comand has happened 
			for ( i = 0; i < 50; i++)
				printf("\n");
		}
		break;

	
	case 'w':
		//If we are not in the top diget (9)		
		if ((**p_p) < 9) {
			// incrementing previouse number by 1
			(**p_p) = (**p_p) + 1;
			
			//update the number of movements
			(*p_nm) = (*p_nm) + 1;

			//clearing the screen with 50 emptylines each time a valid comand has happened 
			for ( i = 0; i < 50; i++)
				printf("\n");
		}
		break;

	case 'x':
		//If we are not in the bottom diget (0)		
		if ((**p_p) > 0) {
			// decrementing previouse number by 1
			(**p_p) = (**p_p) - 1;


			//update the number of movements
			(*p_nm) = (*p_nm) + 1;

			//clearing the screen with 50 emptylines each time a valid comand has happened 
			for ( i = 0; i < 50; i++)
				printf("\n");

		}
		break;
		
		
		
		default: 
		ask_for_command();
		
		}
		
		}
	
	}





//--------------------------------------------------
// print_status
//--------------------------------------------------
void print_status(int a[6], int* p, int nm) {

	//nm = number of moves
	//p = pointer to array
	int i=0;

	printf("---------Game Status----------\n");

	//Print out numbers

	printf("Moves: ");
	printf("%d", nm);

	printf("\nNumbers: ");

printf("{");
	for(i=0; i<6; i++){

	
		printf("%d  ", p[i] );

	}
	
	printf("}");
	
	printf("\n                   " );
	
	int spaces = (int)(p - &a[0]);

	// Pointer hopping movement  giving it 2 spaces and responding with 2 spaces each time 
	for ( i = 0; i < (2 * spaces); i++)
		printf(" ");
	printf("^");
	printf("\n");
	
	







}

//--------------------------------------------------
//
//--------------------------------------------------
 void user_game_palindrome(int pal_num){


	 int *p; //Create a pointer to point to array



	 char c;

	 int a[6]; //Declare the array

	 //Call initialise array function

	 initialise_array(a, pal_num);


	 p = a; //Pointer to array

	 int numOfMoves = 0;
	 
	 int* p_nm;
	 
	 p_nm = &numOfMoves;

	 print_status(a, p, numOfMoves);


	 if(is_pal(a) == false){

		 //Number not a palindrome, continue game

		 ask_for_command();
		 
		


		 process_movement(a, &p, p_nm, c);

		 print_status(a, p, numOfMoves);
	 
	 
	 
	 
	 }else{
	 
	 printf("Number is a palindrome");
	 
	 
	 
	 }
	 
	 }
	 
	 }
	 
	 


























