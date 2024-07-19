package three;

public class FileReaderDemo {
    public static void main(String[] args) {
        String filePath = "example.txt";

        try {
            FileReader fileReader = new FileReader(filePath);
            String fileContent = fileReader.readFile();
            System.out.println("File Content:\n" + fileContent);
        } catch (FileProcessingException e) {
            // Handle custom exception and print the stack trace
            System.err.println("File processing error: " + e.getMessage());
            System.err.println("Original cause: ");
            e.getCause().printStackTrace();
        }
    }
}