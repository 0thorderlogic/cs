package six;

class Writer extends Thread {
    private int writerId;
    private ReaderWriter rw;

    public Writer(int writerId, ReaderWriter rw) {
        this.writerId = writerId;
        this.rw = rw;
    }

    @Override
    public void run() {
        while (true) {
            String newData = "New Data written by Writer " + writerId;
            rw.write(writerId, newData);
            try {
                Thread.sleep(2000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
