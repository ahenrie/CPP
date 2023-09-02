# Conditional Expressions

A conditional expression has the form `condition ? exprWhenTrue : exprWhenFalse`.

All three operands are expressions. If the condition evaluates to true, then `exprWhenTrue` is evaluated. If the condition evaluates to false, then `exprWhenFalse` is evaluated. The conditional expression evaluates to whichever of those two expressions was evaluated. For example, if `x` is 2, then the conditional expression `(x == 2) ? 5 : 9 * x` evaluates to 5.

A conditional expression has three operands, and thus the `?` and `:` together are sometimes referred to as a ternary operator.

Good practice is to restrict the usage of conditional expressions to an assignment statement, as in: `y = (x == 2) ? 5 : 9 * x;`. Common practice is to put parentheses around the first expression of the conditional expression to enhance readability.

![image](https://github.com/ahenrie/CPP/assets/103060170/8075e039-6247-44c3-abad-587b7b59996f)

## Short Circuit Evaluation

In programming, a logical operator evaluates operands from left to right. Short-circuit evaluation is a behavior that skips evaluating later operands if the result of the logical operator can already be determined. Two common logical operators that employ short-circuit evaluation are the logical AND (`&&`) and the logical OR (`||`) operators.

- The logical AND operator (`&&`) short circuits to false if the first operand evaluates to false. In this case, it skips evaluating the second operand because the result is already determined to be false.

- The logical OR operator (`||`) short circuits to true if the first operand is true. Similar to the AND operator, it skips evaluating the second operand since the result is already known to be true.

This behavior can be useful in scenarios where evaluating later operands might be unnecessary or even harmful. Short-circuit evaluation helps improve the efficiency and performance of logical expressions in programming.

![image](https://github.com/ahenrie/CPP/assets/103060170/0bea3146-5418-42bd-9cea-2992bf024a46)

| Operator             | Example             | Short Circuit Evaluation                                  |
|----------------------|---------------------|-----------------------------------------------------------|
| operand1 && operand2 | true && operand2    | If the first operand evaluates to true, operand2 is evaluated.  |
|                      | false && operand2   | If the first operand evaluates to false, the result of the AND operation is always false, so operand2 is not evaluated. |
| operand1 || operand2 | true || operand2    | If the first operand evaluates to true, the result of the OR operation is always true, so operand2 is not evaluated. |
|                      | false || operand2   | If the first operand evaluates to false, operand2 is evaluated.  |
