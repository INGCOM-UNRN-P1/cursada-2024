# Un patrón de subdirectorios para hacer la ejecución en masa.
# Esta hecho de esta manera para que funcione de la forma mas simple posible.
SUBDIRS := $(wildcard ejercicio*/)

# Las reglas Phony, son aquellas que no estan vinculadas a un archivo
# en este caso, la regla en sí, hace referencia a otra regla de hecho
# evitando confusiones entre directorios y comandos
.PHONY: all $(SUBDIRS)

# Esta regla, que es la primera y que por lo tanto será la que se llame
# cuando no se indique otra, no tiene que hacer mucho mas que mostrar un
# mensaje.
all: $(SUBDIRS)
	@echo "Finalizando el objetivo '$(MAKECMDGOALS)' en todos los sub proyectos: "

# Esta regla se encarga de llamar a un subproyecto, pasando el objetivo
# con el que se llamó a este.
$(SUBDIRS):
	@echo "Procesando el proyecto '$@'"
	$(MAKE) -C $@ $(MAKECMDGOALS)
	@echo "Finalizando el proyecto '$@'"

# Esta regla se asegura de pasar la regla que se recibió a los subproyectos
$(MAKECMDGOALS): $(SUBDIRS)

# si no indicamos un objetivo, se llama al `all` que compila todo.
.DEFAULT_GOAL := all


