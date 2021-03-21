bison -d yaccfile.y
flex lexfile.l
gcc lex.yy.c y.tab.c lib/symbol_table.c lib/scope.c -w -o y.exe
y.exe