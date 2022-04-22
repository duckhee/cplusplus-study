CPP = g++

SRCS = shallowCopyError.cpp

TARGET = shallowCopyError

BUILDDIR = buildDir

CPP_EXTRA = 

CPP_INC = $(patsubst %,-I%, $(CPP_EXTRA))

CPPOBJS = $(addprefix $(BUILDDIR)/, ${SRCS:.cpp=.o})

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

build: $(CPPOBJS)
	$(CPP) $(CPP_INC) -o $(BUILDDIR)/$(TARGET) $^

$(CPPOBJS): $(BUILDDIR)/%.o : %.cpp
	$(CPP) $(CPP_INC) -c $< -o $@

clean:
	$(shell rm -rf ${BUILDDIR})
	$(shell del ${BUILDDIR})

.SUFFIXES: .cpp .o
.PHONEY: clean createdirs build