/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int check = 1 , counter=-1;
char name[20][20], email[50][50], id[10][10];
const char name_book[100][100],id_book[10][10];

int q = 0;
int w = 0;


int
sign_in ()
{

  int i, c = 0;

  printf ("\x1b[34m""Enter Name- = ");
  scanf ("%s", name[i]);


  printf ("\x1b[34m""Enter email- = ");
  scanf ("%s", email[i]);


  printf ("\x1b[34m""Enter id- = ");
  scanf ("%s", id[i]);

  q++;



  //printf("54");

  // gets("enter your name:  ", name);

  // gets("enter your ID:  ", id);

  // gets("enter your Email:  ",email);
  return 0;
}

int
num_of_students ()
{

  printf ("\x1b[33m""%d number of students :", q);

  return 0;
}


int
show_books ()
{
  int i;
  printf("names of books\n");
  for (i = 0; i <= counter; i++)
    {
      printf ("%s \n", name_book[i] );
    }
  return 0;

}




int
add_books ()
{

  
  printf ("\x1b[32m""you can enter 1 name  \n");
  
    
    printf ("\x1b[32m""Enter Name- = ");
      scanf ("%s", name_book[counter]);
      
      printf ("\x1b[32m""Enter id- = ");
      scanf ("%s", id_book[counter]);


  
  
  
  
  

}

int
search ()
{
  char search[50];
  int i, c = 0;
  printf ("\x1b[35m""\nEnter Name to be Searched: ");
  scanf ("%s", search);
  for (int i = 0; i < name_book; i++)
    {
      if (strcmp (name_book[i], search) == 0)
	{
	  c = 1;
	  break;
	}
      else if (strcmp (name_book[i], search) != 0)
	{
	  c = 0;
	  break;
	}
    }
  if (c == 1)
    {
      printf ("\x1b[35m""\n%s Found at Position '%d'\n", name_book[i], i + 1);
    }
  else if (c == 0)
    {
      printf ("\x1b[35m""not found \n");
    }

  return 0;
}

int
feedback ()
{
  int feed;
  printf ("give feedback \n");
  printf ("1 --> good \n");
  printf ("2 --> bad \n");
  scanf ("%d", &feed);
  if (feed == 1)
    {
      printf ("\033[0;32m");
      printf ("your feedback is good");
      printf ("\033[0m;");
    }
  else if (feed == 2)
    {
      printf ("\033[1;31m");
      printf ("your feedback is bad");
      printf ("\033[0m;");
    }
  else
    {
      printf ("invalid \n");
      feedback ();
    }

  return 0;

}








int
menu ()
{
  int option;
  printf ("\x1b[36m" "enter option number :\n");
  printf ("[1] register:\n");
  printf ("[2] show number of students \n");
  printf ("[3] add book \n");
  printf ("[4] show books\n");
  printf ("[5] search book\n");
  printf ("[6] exit \n");

  scanf ("%d", &option);

  if (option == 1)
    {
      sign_in ();
    }

  else if (option == 2)
    {
      num_of_students ();
    }
  else if (option == 3)
    {
      counter++;
      add_books ();

    }
  else if (option == 4)
    {

      show_books ();

    }
  else if (option == 5)
    {
      search ();

    }
  else if (option == 6)
    {
      feedback ();
      check = 0;
    }
  return 0;
}

int
main ()
{
  while (check == 1)
    {
      menu ();
    }


  return 0;
}

