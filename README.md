```javac Main.java```

```clang -shared -undefined dynamic_lookup -o agent.so -I /Users/ajedro/.sdkman/candidates/java/current/include/ -I /Users/ajedro/.sdkman/candidates/java/current/include/darwin/ main.cpp```

```java -agentpath:$(pwd)/agent.so Main```


```go build -buildmode=c-shared -o agent-go.so```


```java -agentpath:$(pwd)/agent-go.so Main```
