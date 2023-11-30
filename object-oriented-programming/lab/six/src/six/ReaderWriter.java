package six;

class ReaderWriter {
    private String sharedResource = "Shared Data";
    private int readersCount = 0;
    private int writersCount = 0;

    public synchronized void read(int readerId) {
        try {
            while (writersCount > 0) {
                wait();
            }

            readersCount++;
            System.out.println("Reader " + readerId + " is reading: " + sharedResource);
            Thread.sleep(1000); // Simulating reading

            readersCount--;
            if (readersCount == 0) {
                notifyAll(); // Notify waiting writers
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    public synchronized void write(int writerId, String newData) {
        try {
            writersCount++;
            while (readersCount > 0 || writersCount > 1) {
                wait();
            }

            System.out.println("Writer " + writerId + " is writing: " + newData);
            Thread.sleep(2000); // Simulating writing
            sharedResource = newData;

            writersCount--;

            notifyAll(); // Notify waiting readers and writers
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}