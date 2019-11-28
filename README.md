### Go + JVMTI = ❤

This tool provides binding between [JVMTI](https://docs.oracle.com/javase/8/docs/platform/jvmti/jvmti.html) and Golang. The idea is simple: instead of writing C or C++ code we could utilize higher-level language like Go to interact with JVMTI interface.

#### How it works

* [Main class](src/Main.java) simulates long running JVM process that we want to hook into
* [CGO](src/agent.go) is used to compile Go program to be shared library accepted by JVM.

Unfortunately, CGO does not support function pointers which are used heavily in JVM + JVM TI. To overcome this I use simple [proxy](src/agent-wrapper.c) which exposes functions that CGO calls in order to communicate with JVMTI protocol.

* Compiled shared library is attached to the JVM process during startup using ```-agentpath:agent-go.so=dummy-option``` parameter. Please refer to [Makefile](Makefile) to get better understanding of what is happening.


This POC is intended to show just a few basic things: 
* how to read arguments passed to the agent and how to call JVMTI method from Go. The mumbo-jumbo related to CGO types are left to the reader - good luck.
* how to build CGO program to be shared library available for JVM