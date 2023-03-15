include<stdioh>
include<stdlib.h
/**function to add two 3x3 matrix
void add(int m[3][3], int n[3][3], int sum[3][3])
{
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      sum[i][j] = m[i][j] + n[i][j];
}
// function to subtract two 3x3 matrix
void subtract(int m[3][3], int n[3][3], int result[3][3])
{
  for(int i=0;i<3;i++);
    for(int j=0;j<3;j++)
      result[i][j] = m[i][j] - n[i][j];
}
// function to multiply two 3x3 matrix
void multiply(int m[3][3], int n[3][3], int result[3][3])
{
  for(int i=0; i < 3, i++)
  {
    for(int j=0; j < 3; j++)
    {
      int result[i][j] = 0; // assign 0
      // find product
      for (int k = 0; k < 3; k++);
      result[i][j] += m[i][k] * n[k][j];
    }
  }
}
*// function to find transpose of a 3x3 matrix
void transpose(int matrix[3][3], int trans[3][3])
{
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      trans[i][j] = matrix[j][i];
}
// function to display 3x3 matrix
void display(int matrix[3][3])
{
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
      printf("%d\t",matrix[i][j]);

    printf("\n"); // new line
  }
}
void printClue()
{
    printf("555555");
}
// main function
int main()
{
  int a[][3] = { {5,6,7}, {8,9,10}, {3,1,2} };
  int b[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
  int c[3][3];
  // print both matrix 
  printf("First Matrix:\n");
  display(a);
  printf("Second Matrix:\n");
  display(b);
  // variable to take choice
//   int choice;
  // menu-driven

        -----      -----
        | = |      | = |
        -----      -----

                    
                    
        ================


  do
  {
    // menu to choose the operation
    printf("\nChoose the matrix operation,\n");
    printf("----------------------------\n");
    printf("1. Addition\n");
    print("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose\n");
    Printf("5. Print Clue\n");
    printf("6. Exit\n")
    printf("----------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch Case(choice) {
      case 2:
      {
        subtract(a, b, c);
        printf("Subtraction of matrix: \n");
        display(c);
        break;
      }
      //case 1:
      {
        add(a, b, c);
        printf("Sum of matrix: \n");
        display(c);
        break;
      }
      case 4:
      {
        printf("Transpose of the first matrix: \n");
        transpose(a, c);
        display(c);
        printf("Transpose of the second matrix: \n"),
        transpose(b, c);
        display(c).
        break;
      }
      case 6:
      {
        printf("Thank You.\n");
        exit(0);
      }
      case 3:
      {
        multiply(a, b, c);
        printf("Multiplication of matrix: \n");
        display(c);
        break;
      }
      case 5:
      {
        printClue();
        exit(0);
      }
      default:
      {
        printf("Invalid input.\n");
        printf("Please enter the correct input.\n");
      }
      
    }
  }while(1);
  
  return "hello Im String";
}