/*

THE OPEN UNIVERSITY OF SRI LANKA

FACULTY OF ENGINEERING

DEPARTMENT OF ELECTRICAL AND COMPUTER ENGINEERING

EEI3262 – INTRODUCTION TO OBJECT ORIENTED PROGRAMMING

LAB TEST  01 WD Academic Year – 2022/2023                
Duration – 2 Hours 


Instructions

●        Browsing the web and COPYING answers are strictly prohibited. 

●        Late submissions will receive Zero Marks.

●        Use proper conventions and indentation when writing the code.

●        Don't copy and paste from other places. It will be IDENTIFIED and will result in zero marks. 

Scenario 

DEF company has decided to implement a system that will provide a travel allowance to employees based on certain criteria.

Assume that you have been chosen as the developer for this system. According to the customer, the following tasks and conditions need to be fulfilled by the software:

The user should be able to enter Employee ID (empID), Employee Name (empName), Employee Salary (empSalary), and distance from office in kilometres to Employee’s home (empHomeKM).
Need to display relevant messages when taking user input.
If the employee’s home is more than a certain distance from the office, they will be eligible for a travel allowance.
The travel allowance will be a certain percentage of the salary(empSalary) of the employee.
If the distance from home is more than the certain distance, the final salary with travel allowance should be calculated.
     o   Final Salary with travel allowance (finalSal) = Employee Salary (empSalary) +  Employee Salary (empSalary) * the certain percentage

The final salary should be displayed with Employee ID and Employee Name.
important:
The certain distance should be the first two digits of your “Registration Number”.
The certain percentage should be the last two digits of your “Student Number(SNumber)”.

Include your “registration number”, “student number” as comments at the top of your code for identification.

Task

Develop a simple JAVA program which can execute above functionalities. (When creating identifiers use the names which are given in the brackets.) 
--------------------------------------------------  END  --------------------------------------------------------------


*/


/*
registration number :-
student number:-
*/


import java.util.Scanner;

class Main{
    public static void main(String[] args){
        
        String empID;
        String empName;
        double empSalary;
        double empHomeKM;
        int distance = 12;
        double cPercentage = 0.07;
        double new_salary;
        
        
        
        System.out.print("Enter Employee ID :-");
        Scanner id = new Scanner(System.in);
        empID = id.nextLine();
        
        System.out.print("Enter Employee Name:-");
        Scanner name = new Scanner(System.in);
        empName = name.nextLine();
        
        System.out.print("Enter Employee Salary:-");
        Scanner salary = new Scanner(System.in);
        empSalary = salary.nextDouble();
        
        System.out.print("distance :-");
        Scanner dis = new Scanner(System.in);
        empHomeKM = dis.nextDouble();
        
        
        if (distance<empHomeKM){
            empSalary = empSalary + (empSalary*cPercentage);
            System.out.println("Employee Name :-"+empID);
            System.out.println("Employee Name :-"+empName);
            System.out.println("New Salary :-"+empSalary);
        }else{
            System.out.println("Not eligible!");
    }
}}
