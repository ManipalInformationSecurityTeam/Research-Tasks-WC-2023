Welcome to contributing for the research domain in Manipal Information Security Team! Here are a few rules to get you started. Can use Github Desktop as you like.

## Branching and Workflow Guidelines

### 1. Clone the Repository

First, clone the repository to your local machine if you haven't already:

```bash
git clone <repository-url>
cd <repository-directory>
```

### 2. Create a New Branch
Create a new branch for your dedicated work. Use your own name for your branch. Make sure to create a folder in your branch inside the dedicated task folder and push your code in it.

```bash
git checkout -b name
```

### 3. Work on Your Branch
Make your changes on your branch. Commit your work regularly with clear and descriptive commit messages:

```bash
git add .
git commit -m "Task0 Complete"
```

### 4. Push Your Branch
Once you have committed your changes, push your branch to the remote repository:
```bash
git push origin <branchname>
```

### 5. Creating a Pull Request
When your work is ready to be reviewed, create a pull request from your branch to the main branch. Make sure to provide a clear description of the changes and any relevant information for the ManComm to review.

### 6. Keeping Your Branch Up-to-Date
To ensure your branch stays up-to-date with the main branch, regularly merge or rebase changes from the main branch into your feature branch:

```bash
git checkout main
git pull origin main
git checkout feature/new-login-page
git merge main
```

or

```bash
git rebase main
```

### 7. Resolving Conflicts
If there are any merge conflicts, resolve them carefully. Make sure to test your changes after resolving conflicts to ensure nothing is broken.

Additional Notes
- Always ensure your branch names and commit messages are clear and descriptive.
- Regularly push your work to avoid losing changes and to keep your team updated.
- Review your code thoroughly before creating a pull request.

May the force be with you :)