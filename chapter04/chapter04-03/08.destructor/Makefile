CPP = g++

SRCS = destructor.cpp

TARGET = destructor

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

C_EXTRA = 

C_INC = $(patsubst %,-I%,$(C_EXTRA))

all: clean createdirs build

createdirs:
	$(shell mkdir $(BUILDDIR))

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUILDDIR})

build: $(CPPOBJS)
	$(CPP) $(C_INC) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) $(C_INC) -c $< -o $@


PHONEY: clean createdirs build
SUFFIXES: .cpp .o