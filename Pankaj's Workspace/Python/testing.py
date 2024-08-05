from tabulate import tabulate  # type: ignore

student_db = []
id =1
while True:
    print("Student Mangement System")
    print("1. View Records")
    print("2. Add Record")
    print("3. Delete Record")
    print("4. Search Record")
    print("5. Exit")

    choice = input("\nEnter Your Choice: ")
    
    if choice == "1":
        if len(student_db) == 0:
            print(">>No Records Found\n")
        else:
            headers = ["NAME", "ID", "COURSE"]
            print(f"{tabulate(student_db,headers,tablefmt="simple")}\n")

    elif choice == "2":
        name=input("Enter Student Name: ")        
        course = input("Enter Course: ")

        student_tuple = (name,id,course)
        student_db.append(student_tuple)
        id = id+1
        print(">>Student Added\n")

    elif choice == "3":
        del_id = int(input("Enter Student ID: "))
        found = False
        for student_tuple in student_db:
            if student_tuple[1] == del_id:
                student_db.remove(student_tuple)
                found = True
                print(">>Student Deleted\n")
                break

        if not found:
            print(">>Student ID Not Found\n")    

    elif choice == "4":
        if not student_db:
            print(">>No Records Are Available To Search\n")

        else:
            search_id = int(input("Enter Student ID: "))
            found = False
            for student_tuple in student_db:
                if student_tuple[1] == search_id:
                    print(tabulate([student_tuple],headers,tablefmt="simple"))                   
                    found = True

            if not found:
                print(">>Student ID Not Found\n")
                
    elif choice == "5":
        print("Exiting...")        
        break

    else:
        print(">>Invalid Choice\n")





