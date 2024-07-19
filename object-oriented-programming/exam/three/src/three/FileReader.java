package three;

class FileReader {
    private String filePath;

    public FileReader(String filePath) {
        this.filePath = filePath;
    }

    public String readFile() throws FileProcessingException {
        try (java.io.BufferedReader reader = new java.io.BufferedReader(new java.io.FileReader(filePath))) {
            StringBuilder content = new StringBuilder();
            String line;
            while ((line = reader.readLine()) != null) {
                content.append(line).append("\n");
            }
            return content.toString();
        } catch (java.io.IOException e) {
            // Catch IOException, create and throw a custom exception with exception chaining
            String errorMessage = "Error reading file: " + filePath;
            throw new FileProcessingException(errorMessage, e);
        }
    }
}
