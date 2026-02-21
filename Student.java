public class Student {
    // Attributes (Instance Variables)
    int studentId;
    String name;
    String course;

    // Constructor to initialize the attributes
    public Student(int id, String studentName, String studentCourse) {
        this.studentId = id;
        this.name = studentName;
        this.course = studentCourse;
    }

    // Method to display student details
    public void displayDetails() {
        System.out.println("Student ID: " + studentId);
        System.out.println("Name: " + name);
        System.out.println("Course: " + course);
        System.out.println("---------------------------");
    }

    // Main method: The actual entry point
    public static void main(String[] args) {
        // Creating the first Student object
        Student student1 = new Student(101, "Alice Johnson", "Computer Science");

        // Creating the second Student object
        Student student2 = new Student(102, "Bob Smith", "Data Science");

        // Displaying details for both objects
        System.out.println("--- Student Records ---");
        student1.displayDetails();
        student2.displayDetails();
    }
}