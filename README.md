
# TDD- Árvore Balanceada AVL

Este é o código exemplo do trabalho usando TDD (*Test Driven Development*) com o framework C++ [Catch2](https://github.com/catchorg/Catch2/tree/v2.x).

O framework Catch2 consegue ser utilizado apenas com o arquivo header [catch.hpp](catch.hpp) sem necessidade de instalação.

**NÃO MODIFIQUE OS TESTES** 

Todos os testes estão prontos no arquivo [testes.cpp](testes.cpp). A compilação e teste pode ser feita com os comandos:
```
g++ -Wall -O2 -g -c catch_amalgamated.cpp
g++ -Wall -O2 -g -c testes.cpp
gcc -Wall -O2 -g -c avl.c
g++ -Wall -O2 -g avl.o testes.o  catch_amalgamated.o
valgrind --leak-check=full ./a.out --reporter compact --success
```

