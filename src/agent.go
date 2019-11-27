package main

//#include <jvmti.h>
//#include <agent-wrapper.h>
import "C"

//export goAgent_onLoad
func goAgent_onLoad(jvm *C.JavaVM) {
	C.cagent_DestroyJvm(jvm)
}

func main() {}