package CLI;

public class Main {
    public static void main(String[] args) {
          Scanner sc = new Scanner(System.in); // Built-in java class used to read input
          int choice;

          while (true) {
            System.out.println(" 1: Create a new task");
            System.out.println("  2: Delete an existing task");
            System.out.println(" 3: Show all current tasks");
            System.out.println(" 0. Exit the Smart Task Manager");
            System.out.print(" Select from option's 0–3: ");

            // Based on what the user inputs depending on what the user is using the Smart task Manager for, one of the print statements will be displayed depending on not just what the user is utilizing the smart task manager for but also what he's inputing as well

            if (choice == 1) {
              System.out.println("Add selected Task"); 
          } else if (choice == 2) {
              System.out.println("Remove selected Task");
              } else if (choice == 3) {
              System.out.println("Show all selected Tasks");
              } else if (choice == 0) {
              System.out.println("Application closed: Thanks for using the Smart Task Manager");
              return;
              } else {
              System.out.println("Error, try again"); // If the user inputs something that the program doesn't understand
              }
          
          }
    }
}

