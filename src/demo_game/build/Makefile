#OBJS specifies which files to compile as part of the project
OBJS := $(wildcard *.cpp ../game/*.cpp ../../engine/camera/*.cpp ../../engine/core/*.cpp ../../engine/entity/*.cpp ../../engine/render/*.cpp ../../engine/UI/*.cpp) #gets all cpp files
HEADERS := $(wildcard *.h ../entity/*.h ../utils/*.h ../render/*.h ../UI/*.h) #gets all header files
BINS := $(SRCS:%.cpp=%)

#CC specifies which compiler we're using
CC = g++

COUNT = cloc

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
COMPILER_FLAGS = -w

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lSDL2main -lSDL2 -lSDL2_image -lopengl32 -lglew32

#if its windows we need -lnmingw32
ifeq ($(OS), Windows_NT)
	LINKER_FLAGS = -m32 -lmingw32 -lSDL2main -lSDL2 -lSDL2_image  glut32.lib -lopengl32 -lglew32 -lglut32 -lglu32 -lfreetype
endif	

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = main.exe

#This is the target that compiles our executable
all : ${BINS}
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

run : ${BINS}
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
	./${OBJ_NAME}

# only runs on linux using cloc
stats : ${BINS}
	${COUNT} ${HEADERS} ${OBJS} 