package six;

public class Main {
    public static void main(String[] args) {
        ReaderWriter rw = new ReaderWriter();

        // Creating reader threads
        Thread[] readerThreads = new Thread[3];
        for (int i = 0; i < readerThreads.length; i++) {
            readerThreads[i] = new Reader(i + 1, rw);
            readerThreads[i].start();
        }

        // Creating writer threads
        Thread[] writerThreads = new Thread[2];
        for (int i = 0; i < writerThreads.length; i++) {
            writerThreads[i] = new Writer(i + 1, rw);
            writerThreads[i].start();
        }
    }
}