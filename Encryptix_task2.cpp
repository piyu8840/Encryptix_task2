# include <iostream>
using namespace std;

int main() {

  char oper;
  float num1, num2;

  cout << "Enter operator: +, -, *, / : " ;
  cin >> oper;

  cout << "Enter two operands: " << endl;
  cin >> num1 >> num2;

  switch(oper) {

    case '+':
      cout << " The sum of two operands " << num1 << " + " << num2 << " = " << num1 + num2 <<endl;
      break;

    case '-':
      cout <<" The subtraction of two operands " << num1 << " - " << num2 << " = " << num1 - num2 <<endl;
      break;

    case '*':
      cout <<" The multiplication of two operands " << num1 << " * " << num2 << " = " << num1 * num2 <<endl;
      break;

    case '/':
      cout <<" The division of two operands " << num1 << " / " << num2 << " = " << num1 / num2 <<endl;
      break;

    default:
      cout << "Error! Entered operand is incorrect";
      break;
  }

  return 0;
}