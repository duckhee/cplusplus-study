CPP = g++

SRCS = cComStatic.cpp

TARGET = cComStatic

BUILDDIR = buildDir

CPPOBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.cpp=.o))

CPP_EXTRA = 

CPP_INC = $(patsubst %,-I%, $(CPP_EXTRA))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

build: $(CPPOBJS)
	$(CPP) $(CPP_INC) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) $(CPP_INC) -c $< -o $@

clean:
	$(shell del ${BUILDDIR})
	$(shell rm -rf ${BUILDDIR})

.SUFFIXES: .cpp .o
.PHONEY: clean createdirs build

