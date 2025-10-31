# Contributing to Simple DSA

Thank you for your interest in contributing to Simple DSA! 🎉 This document provides guidelines and instructions for contributing to this repository.

## Table of Contents

- [Contributing to Simple DSA](#contributing-to-simple-dsa)
  - [Table of Contents](#table-of-contents)
  - [Code of Conduct](#code-of-conduct)
  - [Getting Started](#getting-started)
    - [Prerequisites](#prerequisites)
    - [First Time Setup](#first-time-setup)
  - [How to Contribute](#how-to-contribute)
    - [Reporting Bugs](#reporting-bugs)
    - [Suggesting Enhancements](#suggesting-enhancements)
    - [Adding Solutions](#adding-solutions)
  - [Contribution Guidelines](#contribution-guidelines)
    - [✅ DO](#-do)
    - [❌ DON'T](#-dont)
  - [Project Structure](#project-structure)
    - [File Naming Conventions](#file-naming-conventions)
  - [Coding Standards](#coding-standards)
    - [General Guidelines](#general-guidelines)
    - [Language-Specific Standards](#language-specific-standards)
      - [Python](#python)
      - [C/C++](#cc)
      - [Java](#java)
      - [JavaScript](#javascript)
  - [Commit Message Guidelines](#commit-message-guidelines)
    - [Format](#format)
    - [Types](#types)
    - [Examples](#examples)
  - [Pull Request Process](#pull-request-process)
    - [Before Submitting](#before-submitting)
    - [PR Checklist](#pr-checklist)
    - [After Submitting](#after-submitting)
  - [Need Help?](#need-help)
  - [Recognition](#recognition)
  - [License](#license)

## Code of Conduct

This project and everyone participating in it is governed by our [Code of Conduct](CODE_OF_CONDUCT.md). By participating, you are expected to uphold this code. Please report unacceptable behavior to the project maintainers.

## Getting Started

### Prerequisites

Before you begin, ensure you have:

- A GitHub account
- Git installed on your local machine
- Basic knowledge of Git and GitHub
- A code editor (VS Code, Sublime Text, etc.)
- Compiler/interpreter for your chosen programming language
- Registered for [Hacktoberfest](https://hacktoberfest.com) (if participating)

### First Time Setup

1. **Star this repository** ⭐ (Required for Hacktoberfest contributions)

2. **Fork the repository**
   - Click the "Fork" button at the top right of this page
   - This creates a copy of the repository in your GitHub account

3. **Clone your fork**
   ```bash
   git clone https://github.com/noodles-sed/Simple-DSA.git
   cd Simple-DSA
   ```

4. **Add upstream remote**
   ```bash
   git remote add upstream https://github.com/noodles-sed/Simple-DSA.git
   ```

5. **Verify remotes**
   ```bash
   git remote -v
   ```

## How to Contribute

### Reporting Bugs

If you find a bug, please create an issue with:
- A clear, descriptive title
- Detailed description of the issue
- Steps to reproduce the problem
- Expected vs actual behavior
- Screenshots (if applicable)
- Your environment (OS, language version, etc.)

### Suggesting Enhancements

We welcome suggestions! To suggest an enhancement:
- Check if the enhancement has already been suggested
- Create an issue with a clear title and detailed description
- Explain why this enhancement would be useful

### Adding Solutions

1. **Choose a problem** from the README that hasn't been solved in your preferred language
2. **Create a new branch**
   ```bash
   git checkout -b add-solution-q[NUMBER]-[LANGUAGE]
   # Example: git checkout -b add-solution-q15-python
   ```

3. **Write your solution**
   - Follow the project structure (see below)
   - Add comments explaining your approach
   - Test your code thoroughly

4. **Update contributors.json**
   - Add your profile information to the `contributors.json` file

5. **Commit and push**
   ```bash
   git add .
   git commit -m "feat: Add solution for Q[NUMBER] in [LANGUAGE]"
   git push origin your-branch-name
   ```

6. **Create a Pull Request**
   - Go to your fork on GitHub
   - Click "Compare & pull request"
   - Fill in the PR template with all required information

## Contribution Guidelines

### ✅ DO

- **Write clean, readable code** with proper indentation
- **Add comments** to explain complex logic
- **Test your solution** before submitting
- **Follow the folder structure** specified below
- **Use meaningful commit messages**
- **One solution per PR** - Keep PRs focused
- **Update documentation** if you add new features
- **Be respectful** in all interactions

### ❌ DON'T

- Submit plagiarized code
- Make PRs for minor typo fixes (unless significant)
- Submit duplicate solutions in the same language
- Create spam PRs for Hacktoberfest
- Include personal information in code
- Submit untested or broken code

## Project Structure

```
Simple-DSA/
├── README.md
├── CODE_OF_CONDUCT.md
├── CONTRIBUTING.md
├── LICENSE
├── SECURITY.md
├── contributors.json
├── .github/
│   ├── ISSUE_TEMPLATE/
│   │   ├── bug_report.md
│   │   ├── feature_request.md
│   │   └── solution_submission.md
│   └── pull_request_template.md
├── C/
│   ├── q1_hello_world.c
│   ├── q2_print_integer.c
│   └── ...
├── C++/
│   ├── q1_hello_world.cpp
│   ├── q2_print_integer.cpp
│   └── ...
├── Java/
│   ├── Q1HelloWorld.java
│   ├── Q2PrintInteger.java
│   └── ...
├── Python/
│   ├── q1_hello_world.py
│   ├── q2_print_integer.py
│   └── ...
└── [Other Languages]/
    └── ...
```

### File Naming Conventions

- **C/C++**: `q[NUMBER]_descriptive_name.c` or `.cpp`
  - Example: `q15_leap_year.c`
- **Python**: `q[NUMBER]_descriptive_name.py`
  - Example: `q15_leap_year.py`
- **Java**: `Q[NUMBER]DescriptiveName.java` (PascalCase)
  - Example: `Q15LeapYear.java`
- **JavaScript**: `q[NUMBER]_descriptive_name.js`
  - Example: `q15_leap_year.js`

## Coding Standards

### General Guidelines

- Write clean, readable, and well-documented code
- Use meaningful variable and function names
- Keep functions small and focused on a single task
- Add a header comment with:
  ```
  // Question [NUMBER]: [Title]
  // Author: [Your Name]
  // Description: [Brief description of the problem]
  // Language: [Programming Language]
  ```

### Language-Specific Standards

#### Python
- Follow PEP 8 style guide
- Use snake_case for variables and functions
- Add docstrings for functions

#### C/C++
- Use proper indentation (4 spaces or 1 tab)
- Add function prototypes when necessary
- Free allocated memory to prevent leaks

#### Java
- Follow Java naming conventions (camelCase for methods, PascalCase for classes)
- Use meaningful class and method names
- Add JavaDoc comments for public methods

#### JavaScript
- Use const/let instead of var
- Follow ES6+ standards
- Use arrow functions where appropriate

## Commit Message Guidelines

We follow the [Conventional Commits](https://www.conventionalcommits.org/) specification:

### Format
```
<type>: <description>

[optional body]

[optional footer]
```

### Types
- `feat`: New solution or feature
- `fix`: Bug fix
- `docs`: Documentation changes
- `style`: Code formatting (no logic changes)
- `refactor`: Code refactoring
- `test`: Adding tests
- `chore`: Maintenance tasks

### Examples
```bash
feat: Add solution for Q15 in Python

Added leap year check solution with detailed comments
explaining the algorithm logic.

feat: Add solution for Q25 in C++
fix: Correct logic error in Q10 Java solution
docs: Update README with new language support
```

## Pull Request Process

### Before Submitting

1. **Sync your fork** with the upstream repository
   ```bash
   git fetch upstream
   git checkout main
   git merge upstream/main
   ```

2. **Test your code** thoroughly

3. **Review your changes**
   ```bash
   git diff
   ```

4. **Ensure all files follow naming conventions**

5. **Update contributors.json** with your information

### PR Checklist

- [ ] I have read the CONTRIBUTING guidelines
- [ ] My code follows the project's coding standards
- [ ] I have tested my solution and it works correctly
- [ ] I have added my information to contributors.json
- [ ] My commit messages follow the conventional commits format
- [ ] I have updated documentation if needed
- [ ] My PR addresses only ONE problem/issue
- [ ] I have provided a clear PR description

### After Submitting

- Be responsive to feedback and questions
- Make requested changes promptly
- Be patient - maintainers will review your PR as soon as possible
- Do not spam or repeatedly request reviews

## Need Help?

If you have questions or need assistance:

1. **Check existing issues** - Your question might already be answered
2. **Read the README** - It contains detailed instructions
3. **Create a new issue** - Use the appropriate issue template
4. **Be specific** - Provide as much detail as possible

## Recognition

All contributors will be:
- Listed in the contributors.json file
- Credited in the project
- Given a shoutout for valuable contributions

## License

By contributing to Simple DSA, you agree that your contributions will be licensed under the same license as the project (see [LICENSE](LICENSE) file).

---

Thank you for contributing to Simple DSA! 🚀 Your efforts help make this a valuable learning resource for the community.