CPP = g++

SRCS = main.cpp Point.cpp Rectangle.cpp 

BUILDDIR = buildDir

TARGET = Rectangle

C_EXTRA = Point.h Rectangle.h

C_INC = $(patsubst %,-I%,$(C_EXTRA))

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir $(BUILDDIR))

build: $(CPPOBJS)
	$(CPP) $(C_INC) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) $(C_INC) -c $< -o $@

clean:
	$(shell rm -rf $(BUILDDIR))
	$(shell del ${BUILDDIR})

.SUFFIXES: .cpp .o

.PHONY: clean createdirs build