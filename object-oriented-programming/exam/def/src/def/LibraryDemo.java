package def;

public class LibraryDemo {
    public static void main(String[] args) {
        // Create a Library with a maximum of 10 books
        Library library = new Library(10);

        // Add books to the library
        Book book1 = new Book("The Catcher in the Rye", "J.D. Salinger", 1951);
        Book book2 = new Book("To Kill a Mockingbird", "Harper Lee", 1960);

        library.addBook(book1);
        library.addBook(book2);

        // Display books in the library
        library.displayBooks();

        // Remove a book from the library
        library.removeBook(book1);

        // Display books after removal
        library.displayBooks();
    }
}