CPP = g++

SRCS = privateConstructor.cpp

TARGET = privateConstructor

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

C_EXTRA = 

C_INC = $(patsubst %,-I%,$(C_EXTRA))

all: clean createdirs build

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUILDDIR})

createdirs:
	$(shell mkdir ${BUILDDIR})

build: $(CPPOBJS)
	$(CPP) $(C_INC) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) $(C_INC) -c $< -o $@

.PHONEY: clean createdirs build

.SUFFIXES: .cpp .o