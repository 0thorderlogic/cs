package six;

class Reader extends Thread {
    private int readerId;
    private ReaderWriter rw;

    public Reader(int readerId, ReaderWriter rw) {
        this.readerId = readerId;
        this.rw = rw;
    }

    @Override
    public void run() {
        while (true) {
            rw.read(readerId);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}