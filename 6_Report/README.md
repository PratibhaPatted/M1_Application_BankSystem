# Introduction

This system is primarily intended for the storage of banking information. The C programming language was used to create the entire system. It establishes a basic notion of how clients' bank details, such as their name, address, phone number, and other information, are preserved. The user interface is straightforward, with a standard screen design, so staff may quickly become accustomed to it.

# Requirements

## High level requirements
1. Manage Customers Information
2. Manage Bank Records
3. Withdraw money
4. Deposit money
5. create different types of accounts (Savings,current,Fixed deposit)
6. Search accounts

## Low level requirements
1. Add the customer id, name, amount.
2. Search the customer details by using their user id.
3. Deposit and withdraw amount by user id.


# Benefits

1. Required very little manpower.
2. Simplify the problem of editing.
3. Maintain the clearance level by the hierarchy.
4. Maintain data integrity Validate the manual calculations avoid calculation error.
5. Safeguard the data accuracy.
6. User Friendly


# SWOT ANALYSIS
/////////

## 4W's and 1'H

## Who
Banks
## What
This bank management system is based on bank requirements. The system can encode customer information. Banking admin can have access to the customer status and information of different accounts. Users can create account, deposit and withdraw amount.

## When
When we want to Safeguard the data accuracy.
When we want to reduce calculation error and manual work.
When user wants to carry out the tasks quickly.


## Where
In the banks 

## How

We can implement this to do the basic banking activities and the admin can keep the track of all the records and about customer details. And customers can deposit , withdraw and create different types of accounts.


# Design 
# High Level Design

## Architecture Design

![design](https://user-images.githubusercontent.com/98818228/152687123-10db9ae7-3db2-42cd-859a-c5742ac9933e.PNG)


# Usecase Diagram
![uml](https://user-images.githubusercontent.com/98818228/152687161-9e8c8aec-0ee0-498b-9ba7-daf259c0824a.jpg)


# Low Level Design
## Level0
![0level](https://user-images.githubusercontent.com/98818228/152687175-0d825cfe-bf38-41f0-b027-7eb704b3f920.jpg)



## Level1

![level1 (1)](https://user-images.githubusercontent.com/98818228/152687185-71dcb9fc-1e8c-45b5-9ad8-80fe5c36c7db.jpg)


# Output Screenshots
## Main Menu

![1](https://user-images.githubusercontent.com/98818228/153588345-f3fc4d86-7732-4ea4-8431-291d604d6e62.PNG)

## Create Account 1 (Shows no amount <= 0 valid)

![2](https://user-images.githubusercontent.com/98818228/153588367-623e984e-8381-4fe2-a709-a9f9a811edb3.PNG)


![3](https://user-images.githubusercontent.com/98818228/153588387-fc823219-7d59-46fc-a80b-51fbddc89436.PNG)

## Create Account 2 

![4](https://user-images.githubusercontent.com/98818228/153588399-8082d4f5-65fc-4d4e-b3c1-c4c1eb187f5e.PNG)

## Create Account 3 (Shows only Savings SA, current CA and fixed deposit accounts FD valid)

![5](https://user-images.githubusercontent.com/98818228/153588411-dab86b08-a2ed-4f3f-878d-3bff268f5b9a.PNG)

## Deposit Amount operation

![6](https://user-images.githubusercontent.com/98818228/153588459-25b98fd9-28d2-4730-897a-7fb1e1963ec4.PNG)

## Withdraw Amount operation (Shows withdraw amount should be less than or equal to current balance )

![7](https://user-images.githubusercontent.com/98818228/153588475-2cdec2e3-163b-4643-b170-9232cd521b3b.PNG)

![8](https://user-images.githubusercontent.com/98818228/153588488-7f63a377-49d1-4558-bb37-0da7f926dbb0.PNG)

## Display all accounts (Admin)

![10](https://user-images.githubusercontent.com/98818228/153588508-d0c575c3-82ae-4ac7-a482-fc547e95a20d.PNG)

![11](https://user-images.githubusercontent.com/98818228/153588542-1e52a25f-2229-46af-a582-fde3b6705300.PNG)