"""
Project Name : Task Management System
Author : Imran Hossen
Date : 08/01/23
Email: imranbappy.official@gmail.com
"""

from datetime import datetime as dt
import uuid


class Task:
    def __init__(self, name) -> None:
        self.id = uuid.uuid4()
        self.name = name
        self.created_time = dt.now().strftime("%d/%m/%y %H:%M:%S")
        self.updated_time = None
        self.completed_time = None
        self.task_done = False

    def __repr__(self) -> str:
        return f"id: {self.id}\nTask : {self.name}\nCreated_time: {self.created_time}"


class Task_Manager:
    def update_task(self, task, name):
        task.updated_time = dt.now().strftime("%d/%m/%y %H:%M:%S")
        task.name = name

    def complete_task(self, task):
        task.completed_time = dt.now().strftime("%d/%m/%y %H:%M:%S")
        task.task_done = True


all_tasks = []


def print_task(task, task_no=0):
    print(
        f"""{f"Task No - {task_no}" if task_no else ""}
ID - {task.id}
Task - {task.name}
Created time - {task.created_time}
Updated time - { task.updated_time if  task.updated_time else "NA"  }
Completed - {task.task_done}
Completed time - {task.completed_time if task.completed_time else "NA"}"""
    )


def tasks_printer(type="all"):
    if len(all_tasks) == 0:
        print("\nTask Not Found")
        return
    inComplated_task = 0
    complated_task = 0
    for task in all_tasks:
        if type == "inComplated" and task.task_done == False:
            print_task(task)
            inComplated_task += 1
        elif type == "complated" and task.task_done == True:
            print_task(task)
            complated_task += 1
        elif type == "all":
            print_task(task)
    if type == "inComplated" and inComplated_task == 0:
        print("\nNo Incomplated Task")
    elif type == "complated" and complated_task == 0:
        print("\nNo Complated Task")


manager = Task_Manager()
while True:
    print(
        """
1. Add New Task
2. Show All Tasks
3. Show Incomplete Tasks
4. Show Completed Tasks
5. Update Task
6. Mark A Task Completed"""
    )
    option = input("Enter Option: ")
    if option == "1":
        name = input("Enter New Task: ")
        all_tasks.append(Task(name))
        print("\nTask Created Successfully")
    elif option == "2":
        tasks_printer("all")
    elif option == "3":
        tasks_printer("inComplated")
    elif option == "4":
        tasks_printer("complated")
    elif option == "5":
        print("Select Which Task To Update\n")
        task_count = 0
        for id, task in enumerate(all_tasks):
            if not task.task_done:
                print_task(task, task_no=id + 1)
                print()
                task_count += 1
        if not task_count:
            print("No Task To Update")
        else:
            print()
            task_no = int(input("Enter Task No: "))
            task_name = input("Enter new Task: ")
            manager.update_task(all_tasks[task_no - 1], task_name)
            print("\nTask Updated Successfully")
    elif option == "6":
        print("Select Which Task To Complate\n")
        task_count = 0
        for id, task in enumerate(all_tasks):
            if not task.task_done:
                print_task(task, task_no=id + 1)
                print()

                task_count += 1
        if not task_count:
            print("No Task To Complate")
        else:
            print("")
            task_no = int(input("Enter Task No: "))
            manager.complete_task(all_tasks[task_no - 1])
            print("\nTask Completed Successfully")
