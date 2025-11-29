# Nimbus_Project_Unnati_Mishra_11

# Toll Management System
It is a simple C program that is/will be used to record the vehicle entries, calculate dynamic tolls and saving transactions with a clean and clear CLI menu.

## Objective 

The primary objective of the project is to automate the toll booth operations, that being registering vehicles, computing tolls based on type and time and to maintain persistent daily records.

## Features

- Registering cars, buses, trucks, and bikes with timestamp
- Different toll rates; 20% off-peak discount (10pm-6am)
- Search past transactions by vehicle numbers
- It provides daily summary of vehicle counts and total collection
- It autosaves data and loads with every session

## Quick Start

In Terminal (Program Directory)

*Compile command*
'gcc main.c toll.c transaction.c fileio.c utils.c -o toll.exe'

*Run command*
'./toll.exe'

*Menu Showcase*
1. Register vehicle & entry
2. Search transaction
3. Summary report
4. Exit

## Example Usage

- Register: Enter number (e.g. 'UP101421'), type ('car', 'bike', etc), system shows toll.
- ![WhatsApp Image 2025-11-29 at 14 43 00_f66c2e4e](https://github.com/user-attachments/assets/75b0a373-bb31-4cc3-b93e-3cfa0feb09c3)
  
- Search: Enter vehicle number, see details.
- ![WhatsApp Image 2025-11-29 at 14 43 00_69608da7](https://github.com/user-attachments/assets/5964966d-8937-44bc-abd1-af3fdcceec92)

- Summary: Shows daily toll and vehicle stats
- ![WhatsApp Image 2025-11-29 at 14 43 00_49344a24](https://github.com/user-attachments/assets/2a8a7419-2a5d-47a0-b52d-5a886fa2dae7)
