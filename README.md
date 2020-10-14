# Arithmetic-Analyzer
Performs the lexical analysis of arithmetic expressions

1.  Arithmetic analyzer: Using the C or Java language, implement an automaton to perform the lexical analysis of arithmetic expressions. Given an input, the automaton must recognize and list the symbols that compose it.

  a. Receive a typed string as the input to the implemented program.

  b. Eliminate blank spaces.

  c. Recognize and print the arithmetic operators (i.e., +, -, *, /, %) and operands (constant and/or variable symbols). Examples:

  Input: "+ 555"

    Result:
    Token text: +
    Token lexical category: ADD
    Token text: 555
    Token lexical category: OPERAND

  Input: "+ 555 666"

    Result:
    Token text: +
    Token lexical category: ADD
    Token text: 555
    Token lexical category: OPERAND
    Token text: 666
    Token lexical category: OPERAND

  Input: "2*x + y/z + 3"

    Result:
    Token text: 2
    Token lexical category: OPERAND
    Token text: *
    Token lexical category: MULTIPLY
    Token text: x
    Token lexical category: OPERAND
    Token text: +
    Token lexical category: ADD
    Token text: y
    Token lexical category: OPERAND
    Token text: /
    Token lexical category: DIVIDE
    Token text: z
    Token lexical category: OPERAND
    Token text: +
    Token lexical category: ADD
    Token text: 3
    Token lexical category: OPERAND

2.	Regular expressions. Consider the following deterministic finite automaton (DFA).

  a. Define the model M = (K, Σ, δ, s, F) to describe it formally and give a regular expression representing the same language.

  b. Implement the DFA using the C language or the Java language. Consider the input strings x = abbaaa, y = baba, z = abaaabaaab to test the use of your implementation: The automaton must indicate if it accepts or not these strings.

3.  Evaluation

Deliver a report in which the following information must be included:

•	Your ability to identify, formulate, and solve complex engineering problems by applying principles of engineering, science, and mathematics. Specifically, it should:
  Clearly identify what characteristics a lexical analyzer should have.
  Formulate a solution for each of the problems presented above.
  Make a logical and comprehensive interpretation of the findings.
  Apply appropriate resources to identify, formulate, and solve both problems.

To organize the information, the report should have the following structure:
  Characteristics of the problems.
  Propose a solution for each problem: Particularly the implemented functions.
  Interpretation of findings.
  Give examples that show how each program works.
  Include copies of windows where the result is shown.
  References and bibliography.

•	Your ability to work effectively in a team. Add an APPENDIX to your report that details the following aspects:
  Work plan for carrying out the project (timelines, meetings, activities carried out, role or roles of each team member, strategies carried out in case of an exceptional situation).
  The realization of the activities: By each team member, indicate the activities made by he/she and the percentage of the total work.

Please find in attachment the rubrics that will be used to evaluate your reports:
•	"SO1.pdf" (identify, formulate, and solve complex engineering problems) and
•	"SO5.pdf" (working effectively in a team).
