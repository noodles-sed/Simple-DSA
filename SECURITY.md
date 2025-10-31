# Security Policy

## Supported Versions

This section outlines which versions of Simple DSA are currently supported with security updates.

| Version | Supported          |
| ------- | ------------------ |
| Latest  | :white_check_mark: |
| Older   | :x:                |

**Note:** As this is an educational repository focused on DSA solutions, we maintain only the latest version. All contributions are merged into the main branch.

## Reporting a Vulnerability

We take the security of Simple DSA seriously. If you discover a security vulnerability, we appreciate your help in disclosing it to us responsibly.

### What Constitutes a Security Vulnerability?

For this educational repository, security vulnerabilities may include:

- **Malicious Code**: Any intentionally harmful code in submitted solutions
- **Code Injection**: Solutions that could be exploited to execute arbitrary code
- **Privacy Violations**: Code that collects or exposes user data inappropriately
- **Denial of Service**: Solutions with infinite loops or excessive resource consumption
- **Vulnerable Dependencies**: If we add dependencies with known vulnerabilities
- **Repository Access Issues**: Problems with repository permissions or access controls

### How to Report

**Please do NOT report security vulnerabilities through public GitHub issues.**

Instead, please report security vulnerabilities by:

1. **Email** (preferred): Send details to the repository maintainers
   - Include "SECURITY" in the subject line
   - Provide a detailed description of the vulnerability
   - Include steps to reproduce the issue
   - Suggest a fix if possible

2. **GitHub Security Advisories**: 
   - Navigate to the repository's Security tab
   - Click "Report a vulnerability"
   - Fill out the advisory form with detailed information

### What to Include in Your Report

To help us better understand and address the issue, please include:

- **Type of vulnerability** (malicious code, injection, etc.)
- **Location** of the vulnerability (file path, line numbers)
- **Step-by-step instructions** to reproduce the issue
- **Potential impact** of the vulnerability
- **Suggested fix** (if you have one)
- **Your contact information** for follow-up questions

### Response Timeline

- **Initial Response**: We will acknowledge receipt of your report within **48 hours**
- **Status Update**: We will provide a detailed response within **7 days**, including:
  - Confirmation of the issue
  - Planned fix timeline
  - Any additional information we need
- **Resolution**: We aim to resolve critical vulnerabilities within **14 days**

### What to Expect

1. **Acknowledgment**: We'll confirm we received your report
2. **Investigation**: We'll investigate and validate the vulnerability
3. **Fix Development**: We'll develop and test a fix
4. **Disclosure**: We'll publicly disclose the vulnerability after it's fixed
5. **Credit**: We'll credit you for the discovery (unless you prefer to remain anonymous)

## Security Best Practices for Contributors

When contributing to Simple DSA, please follow these security best practices:

### Code Review

- **Review your code** before submitting to ensure it doesn't contain vulnerabilities
- **Avoid hardcoding** sensitive information (API keys, passwords, etc.)
- **Test thoroughly** to ensure your solution doesn't have infinite loops or excessive resource usage
- **Use safe functions** and avoid deprecated or vulnerable methods

### Safe Coding Practices

#### For All Languages

- Validate all user inputs
- Avoid infinite loops - always have clear termination conditions
- Don't use system calls or commands unnecessarily
- Be cautious with recursion - include proper base cases
- Don't include personal or sensitive information in code comments

#### Language-Specific

**C/C++:**
- Avoid buffer overflows - use bounds checking
- Free allocated memory properly
- Use safe string functions (strncpy instead of strcpy)
- Avoid format string vulnerabilities

**Python:**
- Don't use `eval()` or `exec()` with user input
- Use parameterized queries if working with databases
- Be careful with `pickle` - it can execute arbitrary code

**Java:**
- Avoid serialization vulnerabilities
- Use proper exception handling
- Don't use deprecated or unsafe methods

**JavaScript:**
- Avoid `eval()` with user input
- Be cautious with `innerHTML` - use `textContent` instead
- Sanitize any user-provided data

### Dependency Management

- If suggesting new dependencies, ensure they:
  - Have no known vulnerabilities
  - Are actively maintained
  - Come from trusted sources
  - Are necessary for the solution

## Vulnerability Disclosure Policy

### Our Commitment

- We will respond promptly to security reports
- We will keep you informed throughout the resolution process
- We will credit researchers who report vulnerabilities responsibly (unless you prefer anonymity)
- We will not take legal action against researchers who:
  - Report vulnerabilities in good faith
  - Follow this disclosure policy
  - Don't access or modify user data beyond what's necessary to demonstrate the vulnerability

### Public Disclosure

- We will work with you to determine an appropriate disclosure timeline
- We prefer to disclose vulnerabilities after a fix is available
- Typical disclosure timeline is 90 days from initial report
- We may request an extension if the issue is complex

## Security Updates

When security issues are identified and fixed:

1. **Pull Request**: A PR will be created with the fix
2. **Review**: The fix will be reviewed by maintainers
3. **Merge**: Once approved, the fix will be merged quickly
4. **Announcement**: We'll announce the fix (without details that could be exploited)
5. **Credit**: We'll credit the reporter in the announcement

## Scope

This security policy applies to:

- All code in the Simple DSA repository
- The repository infrastructure (GitHub settings, workflows, etc.)
- Any official documentation

This policy does NOT apply to:

- Individual contributor's forks
- Third-party sites linking to this repository
- Unofficial implementations or derivatives

## Contact

For security-related questions or concerns that don't involve reporting a vulnerability:

- Open a general discussion in the repository's Discussions section
- Contact the maintainers
    - [noodles-sed](https://github.com/noodles-sed)
    - [Ayush Hardeniya](https://github.com/ayushHardeniya)

## Learning Resources

Since this is an educational repository, we encourage contributors to learn about secure coding:

- [OWASP Top 10](https://owasp.org/www-project-top-ten/)
- [CWE (Common Weakness Enumeration)](https://cwe.mitre.org/)
- [Secure Coding Guidelines](https://wiki.sei.cmu.edu/confluence/display/seccode)
- Language-specific security guides for your chosen language

---

**Thank you for helping keep Simple DSA safe and secure!** 🔒

By reporting vulnerabilities responsibly, you're helping protect the community and making this a better learning resource for everyone.