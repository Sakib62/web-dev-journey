### Basic commands used in the Windows Command Prompt (CMD):

**dir** - Lists the contents of a directory.

```cmd
dir
```

**cd directory-name** - Changes the current directory.

```cmd
cd documents
cd documents/folder1
cd ..
cd ../..
cd /
cd
```

**mkdir directory-name** - Creates a new directory.

```cmd
mkdir myfolder
```

**rmdir directory-name** - Removes a directory.

```cmd
rmdir myfolder
```

**echo. > filename** - Create an empty file.

```cmd
echo. > test.txt
```

**echo Your content here > filename.txt** - Create non-empty file.

```cmd
echo here is some content > test1.txt
```

**type filename** - Displays the contents of a text file.

```cmd
type test.txt
```

**start filename** - Open file in default app.

```cmd
start test.txt
```

**start appname filename** - Open file in a particular app.

```cmd
start notepad test.txt
```

**del filename** - Deletes one or more files.

```cmd
del test.txt
```

**copy source_file destination** - Copies one or more files to another location. Destination as Relative/Absolute path.

```cmd
copy test.txt MyFolder
copy test.txt ..
copy test.txt ../folder
```

**move source_file destination** - Moves one or more files to another location.

```cmd
move test.txt MyFolder
```

**exit** - Quits the Command Prompt.

```cmd
exit
```

**help command-name** - Get more information about a command's usage and options.

```cmd
help dir
```

### Command Prompt vs Powershell

while both Command Prompt and PowerShell are command-line interfaces available in Windows, PowerShell offers more advanced features, scripting capabilities, and integration with system management tools, making it a powerful tool for system administrators and developers.

### Directory Separator

In Unix-like file systems, including those used in Linux, macOS, and Git Bash (on Windows), the forward slash / is used as a directory separator. It separates directory names in a path and indicates the hierarchy of directories in the file system.

```../..``` means "move up one directory level from the current directory, and then move up another directory level from there." The forward slash / is used to separate the two levels of movement in the directory path.

In Windows, the directory separator is typically a backslash \, rather than a forward slash / used in Unix-like systems. Windows file paths follow a similar hierarchical structure, with directories organized in a tree-like manner, but they use backslashes to separate directory names in the path.

For example:

```cmd
Unix-like systems: /home/user/Documents
Windows: C:\Users\User\Documents
```

In Windows, the backslash \ is used as a directory separator in file paths, while the colon : is used to specify the drive letter (e.g., C: for the primary hard drive).

### Shell

A shell is a command-line interface (CLI) program that interprets user commands and executes them. It acts as an intermediary between the user and the operating system kernel. The shell provides features such as command execution, scripting capabilities, environment variable management, input/output redirection, and more.

Examples of shells include **Bash (Bourne Again Shell), sh (Bourne Shell), zsh (Z Shell), and csh (C Shell),** among others.


### Unix

Developed in the late 1960s and early 1970s at AT&T Bell Labs, Unix is a family of multitasking, multiuser computer operating systems. It was designed to be portable, flexible, and powerful.

Unix systems typically have a command-line interface (CLI), where users interact with the system using text commands. However, Unix also supports graphical user interfaces (GUIs) like X Window System.

Unix and ```Unix-like operating systems (e.g., Linux, macOS)``` are widely used in servers, workstations, supercomputers, embedded systems, and mobile devices. Unix has a rich ecosystem of open-source software and development tools, with a strong emphasis on compatibility, stability, and security.


### POSIX

POSIX (Portable Operating System Interface) is a set of standards that define a standard operating system interface and environment, including command-line interfaces, system calls, and utility interfaces. The goal of POSIX is to ensure compatibility between operating systems and portability of applications across different Unix-like operating systems.


### Git Bash

Git Bash is a command-line interface specifically designed for running Git commands on Windows. It provides a Unix-like environment on Windows by bundling together a minimal Bash shell environment with Git for Windows, which includes the Git command-line tools and Unix utilities ported to Windows.


### Git Bash vs Hyper

Hyper and Git Bash serve similar purposes but are fundamentally different things:

**Git Bash** : This is a program that provides a command line environment on Windows that mimics a Unix Bash shell. It's essentially a terminal program pre-configured to work well with Git version control.

**Hyper** : This is a terminal application itself, but it doesn't come pre-loaded with a specific shell like Git Bash. Hyper is more like a blank canvas that allows you to configure it to use the shell of your choice, including Git Bash.

In short, Git Bash is a specific type of shell environment, while Hyper is a program that can be used to run various shells, including Git Bash.


### OpenSSH vs OpenSSL

OpenSSH and OpenSSL are two separate but related open-source projects commonly used in secure communication protocols and cryptographic operations:

1. **OpenSSH**:
   - OpenSSH (Open Secure Shell) is a suite of tools for secure remote login, file transfer, and tunneling protocols over a network. It provides secure encrypted communication between computers over an insecure network, such as the internet.
   - OpenSSH includes several components, including:
     - `ssh`: The Secure Shell (SSH) client used for securely logging into remote systems and executing commands.
     - `sshd`: The SSH server daemon used for allowing secure remote access to a computer.
     - `scp`: The Secure Copy (SCP) utility used for securely transferring files between computers.
     - `sftp`: The Secure File Transfer Protocol (SFTP) subsystem for secure file transfer.
   - OpenSSH uses cryptographic techniques to secure communications, including public-key cryptography, symmetric-key encryption, and cryptographic hash functions.

2. **OpenSSL**:
   - OpenSSL is a robust, full-featured open-source toolkit for implementing the Secure Sockets Layer (SSL) and Transport Layer Security (TLS) protocols, as well as a general-purpose cryptography library.
   - OpenSSL provides functions and tools for cryptographic operations, including:
     - SSL/TLS protocol implementation for secure communication over the internet.
     - Cryptographic algorithms and primitives, such as encryption, decryption, digital signatures, hashing, and key exchange.
     - Certificate management tools for generating, signing, and verifying X.509 digital certificates.
     - Various command-line utilities for performing cryptographic operations and managing certificates and keys.
   - OpenSSL is widely used in web servers, email servers, VPNs, and other network services to provide secure communication and protect data privacy and integrity.

In summary, OpenSSH is a suite of tools for secure remote access and file transfer, while OpenSSL is a cryptography toolkit used for implementing secure communication protocols and cryptographic operations. While they serve different purposes, they often work together in securing network communications and ensuring data privacy and integrity.