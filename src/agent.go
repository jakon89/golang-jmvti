package main

//#include <jvmti.h>
//#include <agent-wrapper.h>
import "C"
import "fmt"

//export goAgent_onLoad
func goAgent_onLoad(jvm *C.JavaVM, cOptions *C.char) {
	options := C.GoString(cOptions)
	fmt.Printf("Agent called with options: [%v] \n", options)
}

func main() {}