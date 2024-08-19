# Variables generales
CC = gcc
CFLAGS = -Wall -Wextra -g

# Archivos comunes, este es el lugar para cambiar el nombre 
# o agregar mas archivos a la compilación.
SRCS = ejercicio.c
HDRS = ejercicio.h

# Objetivo del programa principal
PROG_TARGET = programa
PROG_SRCS = $(SRCS) main.c
PROG_OBJS = $(PROG_SRCS:.c=.o)

# Objetivo de los tests
TEST_TARGET = test_bin
TEST_SRCS = $(SRCS) prueba.c
TEST_OBJS = $(TEST_SRCS:.c=.o)

# Compilar ambos: programa y tests
all: $(PROG_TARGET) $(TEST_TARGET)

# Compilar el programa principal
$(PROG_TARGET): $(PROG_OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compilar el ejecutable de pruebas
$(TEST_TARGET): $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Regla genérica para compilar archivos .o a partir de .c
%.o: %.c $(HDRS)
	@echo "compilando $<"
	$(CC) $(CFLAGS) -c $<

# Ejecutar el programa principal
.PHONY: run
run: $(PROG_TARGET)
	@echo "ejecutando"
	./$(PROG_TARGET)

# Ejecutar las pruebas (nuevo nombre para evitar conflictos)
.PHONY: probar
test: $(TEST_TARGET)
	@echo "probando"
	./$(TEST_TARGET)

# Limpiar archivos objeto y ejecutables
.PHONY: clean
clean:
	@echo "limpiando"
	rm -f $(PROG_OBJS) $(TEST_OBJS) $(PROG_TARGET) $(TEST_TARGET)

