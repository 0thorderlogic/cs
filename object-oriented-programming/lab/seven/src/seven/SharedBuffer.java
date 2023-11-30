package seven;

import java.util.LinkedList;

class SharedBuffer {
    private LinkedList<Integer> buffer = new LinkedList<>();
    private int capacity;

    public SharedBuffer(int capacity) {
        this.capacity = capacity;
    }

    public void produce(int item) throws InterruptedException {
        synchronized (this) {
            while (buffer.size() == capacity) {
                wait(); // Producer waits if the buffer is full
            }

            buffer.add(item);
            System.out.println("Produced: " + item);
            notify(); // Notify consumer that an item is available
        }
    }

    public void consume() throws InterruptedException {
        synchronized (this) {
            while (buffer.isEmpty()) {
                wait(); // Consumer waits if the buffer is empty
            }

            int item = buffer.remove();
            System.out.println("Consumed: " + item);
            notify(); // Notify producer that space is available
        }
    }
}