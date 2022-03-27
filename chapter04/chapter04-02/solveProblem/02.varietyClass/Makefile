CPP = g++

SRCS = main.cpp

TARGET = Main

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

C_EXTRA_INC =

C_INC = $(patsubst %,-I%,$(C_EXTRA_INC))

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

.SUFFIXES: .cpp .o .hpp
.PHONY: clean createdirs build