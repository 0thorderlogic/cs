package def;

class Library {
    private Book[] books;
    private int bookCount;

    public Library(int maxBooks) {
        this.books = new Book[maxBooks];
        this.bookCount = 0;
    }

    public void addBook(Book book) {
        if (bookCount < books.length) {
            books[bookCount++] = book;
        } else {
            System.out.println("Library is full. Cannot add more books.");
        }
    }

    public void removeBook(Book book) {
        for (int i = 0; i < bookCount; i++) {
            if (books[i].equals(book)) {
                // Shift books to fill the gap
                for (int j = i; j < bookCount - 1; j++) {
                    books[j] = books[j + 1];
                }
                books[--bookCount] = null; // Set the last element to null
                break;
            }
        }
    }

    public void displayBooks() {
        System.out.println("Library Books:");
        for (int i = 0; i < bookCount; i++) {
            Book book = books[i];
            System.out.println("Title: " + book.getTitle());
            System.out.println("Author: " + book.getAuthor());
            System.out.println("Publish Year: " + book.getPublishYear());
            System.out.println("--------------------------");
        }
    }
}
