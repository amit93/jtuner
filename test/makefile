EXE = SampleJavaApp
JAVA = java
JAVAC = javac

all: $(EXE)

$(EXE):  
#	$(JAVAC) $(EXE).java
	get_primary.sh $(JAVA) $(TUNEFLAGS) -cp . $(EXE) > temp.pseat
	awk '{print $NF;}' temp.pseat > perf.pseat
#	get_primary.sh $(JAVA) $(EXE) > standperf.pseat

#clean:
#	/bin/rm -f $(EXE).class
