EXE = SampleJavaApp
JAVA = java
JAVAC = javac

all: $(EXE)

$(EXE): 
	$(JAVAC) $(EXE).java
	$(JAVA) $(EXE)

clean:
	/bin/rm -f $(EXE)
