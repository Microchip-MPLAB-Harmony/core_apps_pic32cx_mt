---
parent: Harmony 3 driver and system service application examples for PIC32CXMTSH family
title: FAT filesystem using NVM Media 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# FAT filesystem using NVM Media

This application shows an example of implementing a FAT disk in the device internal Flash memory.

## Description

- Application places a FAT disk image consisting of a Master Boot Record (MBR) sector, Logical Boot Sector, File allocation Table, and Root Directory Area in the internal Flash memory (NVM)

- During execution, the application first opens an existing file named **FILE.TXT** and performs following file system related operations:
    - **SYS_FS_FileStat**
    - **SYS_FS_FileSize**
    - **SYS_FS_FileSeek**
    - **SYS_FS_FileEOF**

- It tries to read the file and checks if string **"Data"** is present. If present it continues to next step or it fails the application

- Finally, the string **"Hello World"** is written to this file. The string is then read and compared with the string that was written to the file. If the string compare is successful, An LED indication is provided

### File system layer uses:

- Memory driver to communicate with underlying NVM media

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/core_apps_pic32cx_mt) and then click Clone button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/fs/nvm_fat/firmware** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| pic32cx_mtc_db.X | MPLABX project for [PIC32CXMTC-Development Board](https://www.microchip.com/en-us/development-tool/EV58E84A) |
| pic32cx_mtg_db.X | MPLABX project for [PIC32CXMTG-Development Board](https://www.microchip.com/en-us/development-tool/EV11K09A) |
| pic32cx_mtsh_db.X | MPLABX project for [PIC32CXMTSH-Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB#Related%20Tools) |
|||

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
| pic32cx_mtc_db.X | [PIC32CXMTC-Development Board](https://www.microchip.com/en-us/development-tool/EV58E84A) |
| pic32cx_mtg_db.X | [PIC32CXMTG-Development Board](https://www.microchip.com/en-us/development-tool/EV11K09A) |
| pic32cx_mtsh_db.X| [PIC32CXMTSH-Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB#Related%20Tools) |
|||

### Setting up  [PIC32CXMTC-Development Board](https://www.microchip.com/en-us/development-tool/EV58E84A)

- Connect the Debug USB port on the board to the computer using a micro USB cable

### Setting up [PIC32CXMTG-Development Board](https://www.microchip.com/en-us/development-tool/EV11K09A)

- Connect the Debug USB port on the board to the computer using a micro USB cable

### Setting up [PIC32CXMTSH-Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB#Related%20Tools)

- Connect the Debug USB port on the board to the computer using a micro USB cable

## Running the Application

1. Build and program the application using its IDE
2. Press Switch to start the file operations
3. The LED is turned ON when the File **FILE.TXT** has the app data **"Hello World"** written in it

Refer to the following table for LED and Switch name:

| Board | LED Name | Switch Name |
| ----- | -------- | ----------- |
| [PIC32CXMTC-Development Board](https://www.microchip.com/en-us/development-tool/EV58E84A)  | D24 | Scroll Down |
| [PIC32CXMTG-Development Board](https://www.microchip.com/en-us/development-tool/EV11K09A)  | D3 | USER SW |
| [PIC32CXMTSH-Development Board](https://www.microchip.com/en-us/development-tool/PIC32CXMTSH-DB#Related%20Tools)  | D20 | Scroll Down |
|||