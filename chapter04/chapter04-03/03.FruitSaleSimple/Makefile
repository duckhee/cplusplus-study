CPP = g++

SRCS = FruitSaleSim.cpp

TARGET = FruitSaleSim

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

C_EXTRA = 

C_INC = $(patsubst %,-I%, $(C_EXTRA))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

build: $(CPPOBJS)
	$(CPP) $(C_INC) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) $(C_INC) -c $< -o $@

clean:
	$(shell rm -rf $(BUILDDIR))
	$(shell del ${BUILDDIR})

.SUFFIXES: .cpp .o

.PHONY: clean createdirs build
