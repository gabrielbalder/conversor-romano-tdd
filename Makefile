# Variáveis de compilação
CXX = g++
CXXFLAGS = -std=c++14 -Wall -fprofile-arcs -ftest-coverage
LIBS = -lgtest_main -lgtest -lpthread

# Alvos principais
all: testa_romano

# Compila o executável de testes
testa_romano: romano.o testa_romano.o
	$(CXX) $(CXXFLAGS) romano.o testa_romano.o -o testa_romano $(LIBS)

# Compila o módulo romano
romano.o: romano.cpp romano.hpp
	$(CXX) $(CXXFLAGS) -c romano.cpp

# Compila o arquivo de testes
testa_romano.o: testa_romano.cpp romano.hpp
	$(CXX) $(CXXFLAGS) -c testa_romano.cpp

# 1) Executa os testes (TDD)
test: testa_romano
	./testa_romano

# 2) Verificador de estilo (Google Style / cpplint)
lint:
	cpplint --filter=-runtime/references romano.cpp romano.hpp testa_romano.cpp

# 3) Verificador estático (cppcheck)
check:
	cppcheck --enable=warning .

# 4) Verificador dinâmico (Valgrind)
valgrind: testa_romano
	valgrind ./testa_romano

# 5) Verificador de cobertura (gcov)
coverage: test
	gcov romano.cpp

# Limpeza dos arquivos gerados
clean:
	rm -f *.o *.gcda *.gcno *.gcov testa_romano