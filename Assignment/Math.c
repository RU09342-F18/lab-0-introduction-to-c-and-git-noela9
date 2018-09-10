#include MATH_H_
#include <stdio.h>
int math(num1, num2, Operator);
int main()

{
  int number1, number2;
  char Operator1;
  number1 = 5;
  number2 = 2;
  math(number1, number2, +);
  math(number1, number2, -);
  math(number1, number2, *);
  math(number1, number2, /);
  math(number1, number2, %);
  math(number1, number2, <);
  math(number1, number2, >);
  math(number1, number2, &);
  math(number1, number2, |);
  math(number1, number2, ^);
  math(number1, number2, ~);
  
  return 0;
}

math(int num1, int num2, char Operator)
{
  while (Operator != ('+' || '-' || '*' || '/' || '%' || '<' || '>' || '&' || '|' || '^' || '~'))
  {
  if Operator != ('+' || '-' || '*' || '/' || '%' || '<' || '>' || '&' || '|' || '^' || '~')
    fprint( "The operator you input is invalid.n" );
      else
        if (Operator == '+')
          {num2 = num1 + num2;
          fprint( "The answer is ");
          printf("%d", num2);
                                      };
        if (Operator == '-')
          {num2 = num1 - num2;
           fprint( "The answer is ");
          printf("%d", num2);
                                };
        if (Operator == '*')
          {num2 = num1 * num2;
           fprint( "The answer is ");
            printf("%d", num2);   
                                        };
        if (Operator == '/')
          {num2 = num1 / num2;
           fprint( "The answer is ");
           printf("%d", num2);
                                };
        if (Operator == '%')
          {num2 = num1 % num2;
           fprint( "The answer is ");
          printf("%d", num2);
           fprint( "The answer is ");
          printf("%d", num2);
                              };
        if (Operator = '<')
          {num2 = num2 < num1
           fprint( "The answer is ");
          printf("%d", num2);
                                };
        if (Operator = '>')
          {num2 = num2 > num1;
           fprint( "The answer is ");
          printf("%d", num2);
                                };
        if (Operator = '|')
          {num2 = num1 | num2;
           fprint( "The answer is ");
          printf("%d", num2);
                              };
        if (Operator = '^')
          {num2 = num1 ^ num2;
           fprint( "The answer is ");
          printf("%d", num2);
                                };
        if (Operator = '~')
          {num2 = ~num1;
           fprint( "The answer is ");
          printf("%d", num2);
                                };
        };
}
