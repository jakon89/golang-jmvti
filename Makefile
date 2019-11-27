all: create-bin-dir compile-java compile-agent

create-bin-dir:
	@mkdir -p bin

compile-java:
	@javac src/Main.java -d bin/

compile-agent:
	@unset GO111MODULE && CGO_CFLAGS="-I${JAVA_HOME}/include -I${JAVA_HOME}/include/darwin" go build -buildmode=c-shared -o bin/agent-go.so ./src

run-jvm:
	@java -agentpath:bin/agent-go.so bin/Main