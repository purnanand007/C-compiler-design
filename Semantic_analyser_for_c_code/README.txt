#code running instruction for semantic analysis:
run following commands 


bison -v yaccfile.y
flex lexfile.l
gcc lex.yy.c y.tab.c lib/symbol_table.c lib/scope.c -w -o y.exe
y.exe


for run gcc command change your file to y.tab.h and y.tab.c

input:  now after running above commands give your input on terminal or cmd

output : if there is any syntax or sementics error in the code then you will ablw to see on terminal , else if there is no error press "ctrl + c" and it will show "output: your code is sementically correct" .
