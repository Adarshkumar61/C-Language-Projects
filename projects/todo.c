#include <stdio.h>
#include <string.h>

#define MAX_TASKS 10
#define MAX_TASK_LENGTH 50

char tasks[MAX_TASKS][MAX_TASK_LENGTH];
int taskCount = 0;

void addTask() {
    if (taskCount < MAX_TASKS) {
        printf("Enter task: ");
        fgets(tasks[taskCount], MAX_TASK_LENGTH, stdin);
        tasks[taskCount][strcspn(tasks[taskCount], "\n")] = 0;
        taskCount++;
        printf("Task added!\n");
    } else {
        printf("Task list is full!\n");
    }
}

void removeTask() {
    if (taskCount > 0) {
        int taskNumber;
        printf("Enter task number to remove (1-%d): ", taskCount);
        scanf("%d", &taskNumber);
        getchar(); // Consume newline character
        if (taskNumber >= 1 && taskNumber <= taskCount) {
            for (int i = taskNumber - 1; i < taskCount - 1; i++) {
                strcpy(tasks[i], tasks[i + 1]);
            }
            taskCount--;
            printf("Task removed!\n");
        } else {
            printf("Invalid task number!\n");
        }
    } else {
        printf("Task list is empty!\n");
    }
}

void displayTasks() {
    if (taskCount > 0) {
        printf("Tasks:\n");
        for (int i = 0; i < taskCount; i++) {
            printf("%d. %s\n", i + 1, tasks[i]);
        }
    } else {
        printf("Task list is empty!\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("1. Add task\n");
        printf("2. Remove task\n");
        printf("3. Display tasks\n");
        printf("4. Quit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character
        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                removeTask();
                break;
            case 3:
                displayTasks();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
