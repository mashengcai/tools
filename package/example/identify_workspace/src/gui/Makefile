PWD=$(shell pwd)
DIR =${PWD}"/GuiWidget/"
RELEASE=${PWD}"/Release/"
EXE=${PWD}"/Release/GuiWidget"
STATUS=$(shell if [ -f $(EXE) ]; then echo "EXIST"; else echo "NOEXIST"; fi;)

all: gui 

gui:
	qmake-qt4 -o $(RELEASE)Makefile $(DIR)GuiWidget.pro
	(make -C $(RELEASE))

clean:
ifeq ($(STATUS), $(filter $(STATUS), EXIST))
	make  distclean -C $(RELEASE)
else
	@echo $(EXE)"  is  already  clean"
endif



