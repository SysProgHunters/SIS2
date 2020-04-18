cpumonitor: LDLIBS += -lncurses
cpumonitor: cpumonitor.o

clean:
	rm -f cpumonitor cpumonitor.o
