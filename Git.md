# Git - Version Control System

## Git commands

- git status
- git add filename
- git commit -m "message"
- git log
- git diff filename
- git checkout filename

### Github - Remote Repository

- Create a new repository on the command line
  -
  ```cmd
    git init
    git add //filename//
    git commit -m "//commit message//"
    git branch -M main
    git remote add origin //url//
    git push -u origin main
    ```
  - Origin is an alias
  - git branch -m master main //```renames master branch to main```
  - git branch -m main //```renames current branch to main```
  - -u flag for upstream
  - git push -u origin main //```push to main branch of origin```

- Push an existing repository from the command line
  -

  ```cmd
    git remote add origin //url//
    git branch -M main
    git push -u origin main
    ```

## .gitignore

- unnecessary files - build artifact, logs-reports.
- sensitive files - api key, password.
- local environment configuration file i.e. IDE settings.
- gitignore keeps repository clean and protects sensitive info.

## More git commands

- git clone //url//
- git branch //branch name//
- git checkout //brand name//

## Branching, Merging

- merge via git or github
- 
  ```
  Local Merging: Combining branches within your local repository and then pushing changes to the remote repository.

  Remote Merging: Creating and merging pull requests on a remote platform like GitHub to integrate changes collaboratively.
  ```

## Collaboration

- forking
- pull request
- contribute to open source project
-
   ```
  Forking: is for creating a copy of a repository under your own account on a platform like GitHub, enabling you to make changes and propose them back to the original project.

  Cloning: is for creating a copy of a repository on your local machine, allowing you to work on the project locally.
  ```

- git pull = git fetch + git merge

-
  ```
  git fetch: Downloads updates from the remote repository without merging them, allowing you to review and decide when to integrate changes.

  git pull: Combines fetching and merging into one step, automatically integrating remote updates into your current branch for quicker synchronization.
  ```
-
  ```
  Collaborators: have been granted direct access to the repository and can push commits directly.
  
  Contributors: are individuals who have contributed to the repository via pull requests, without having direct write access.
  ```
- 
  ```
  Git: Does not include pull requests; focuses on version control functionality.

  GitHub: Adds the pull request feature to facilitate code reviews and collaboration, making it easier to manage contributions and integrate changes. Other platforms like GitLab and Bitbucket offer similar functionality under different names (e.g., merge requests).
  ```
