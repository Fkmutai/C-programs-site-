public class Students{
    // Attributes
    int studentId;
    String name;
    String course;

    // 1. Parameterized Constructor
    public Students(int studentId, String name, String course) {
        this.studentId = studentId; // 'this' refers to the class attribute
        this.name = name;
        this.course = course;
    }
    public void displayDetails() {
        System.out.println("ID: " + studentId + " | Name: " + name + " | Course: " + course);
    }

    public static void main(String[] args){
        Student student1 = new Student(5001, "Marcus Aurelius", "Philosophy");
        Student student2 = new Student(5002, "Ada Lovelace", "Mathematics");

        student1.displayDetails();
        student2.displayDetails();
    }
}