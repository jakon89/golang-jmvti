package main

//#include <jvmti.h>
//#include <agent-wrapper.h>
import "C"
import (
	"fmt"
	"time"
)

//export goAgent_onLoad
func goAgent_onLoad(jvm *C.JavaVM, cOptions *C.char) {
	options := C.GoString(cOptions)
	fmt.Printf("Agent called with options: [%v] \n", options)

	fmt.Printf("Sleeping 10 seconds and killing JVM...")
	time.Sleep(10 * time.Second)
	C.cagent_DestroyJvm(jvm)
}

func main() {}