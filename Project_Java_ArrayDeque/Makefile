JAVAC =javac
JAVAC_FLAGS =

all:	StackSpeedTest.class Main.class

StackSpeedTest.class:	StackSpeedTest.java
	$(JAVAC) $(JAVAC_FLAGS) $<

Main.class:	Main.java
	$(JAVAC) $(JAVAC_FLAGS) $<

clean:
	rm ./*.class

.PHONY:	all clean
