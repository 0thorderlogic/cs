package sevenb;

import java.util.LinkedList;

class SharedBuffer {
    private LinkedList<Integer> buffer = new LinkedList<>();
    private int capacity;
    private Object lock = new Object();

    public SharedBuffer(int capacity) {
        this.capacity = capacity;
    }

    public void produce(int item) throws InterruptedException {
        synchronized (lock) {
            while (buffer.size() == capacity) {
                lock.wait();
            }

            buffer.add(item);
            System.out.println("Produced: " + item);
            lock.notifyAll();
        }
    }

    public void consume() throws InterruptedException {
        synchronized (lock) {
            while (buffer.isEmpty()) {
                lock.wait();
            }

            int item = buffer.remove();
            System.out.println("Consumed: " + item);
            lock.notifyAll();
        }
    }
}