public class Main {

  public static void main(String[] args) {
    int i = 0;
    while (true) {
      try {
        System.out.println("Sleeping: " + i);
        i++;
        Thread.sleep(5000L);
      } catch (Exception ignored) {
      }
    }
  }
}