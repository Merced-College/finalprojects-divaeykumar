package Model;

public class Task {
    // Fields are implemented here, private variables are implemented here to store the task's data
    private String name;
    private String dueDate;
    private int priority; 

    // Constructors are implemented here, creates task with a certain name, due date and priority level.
    /** 
 * @param name      - Task name: 
 * @param dueDate   - Due date: (YYYY-MM-DD)
 * @param priority  - Importance: 1 (Very Important), 2 (Important), 3 (Not as Important but still important)
 */

 // @param purpose in this code is to describe a parameter of a method or constructor


 //Here varibales are being defined for the task
public Task(String name, String dueDate, int priority) {
    this.name = name;
    this.dueDate = dueDate;
    this.priority = priority;
}

    // Getters are implemented here, the Getter Methods are implemented to be able to access current values of an object's properties

    public String getName() {
        return name;
    }

    public String getDueDate() {
        return dueDate;
    }

    public int getPriority() {
        return priority;
    }

    // Setters are implemented here, purpose of it whenever you want to add or chane the data stored with an object
    public void setName(String name) {
        this.name = name;
    }

    public void setDueDate(String dueDate) {
        this.dueDate = dueDate;
    }

    public void setPriority(int priority) {
        this.priority = priority;
    }

    // toString Method is implemented here, purpose of this method is to log the state of an object
    @Override
    public String toString() {
        return "Task: " + name +
            "\nDue: " + dueDate +
            "\nPriority: " + priority;
 
    }
    // This part of the code incorporate the task name, due date, and priority into a block string
}
 





