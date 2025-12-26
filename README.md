# Striver's A2Z DSA - Solutions and Learning Resources

A structured, well-documented collection of Data Structures & Algorithms (DSA) solutions following Striver's "A2Z DSA" curriculum. This repository contains problem solutions, organized topic-wise to help learners practice, compare implementations, and track progress while preparing for interviews, contests, or general algorithmic proficiency.

Table of Contents
- [About](#about)
- [Repository Structure](#repository-structure)
- [How to Use This Repository](#how-to-use-this-repository)
  - [Browse by Topic](#browse-by-topic)
- [Contribution Guide](#contribution-guide)
  - [How to add a solution](#how-to-add-a-solution)
  - [Coding Style](#coding-style)
  - [Pull Request Checklist](#pull-request-checklist)
- [Learning Roadmap & Suggested Order](#learning-roadmap--suggested-order)
- [Resources & References](#resources--references)
- [Issues & Support](#issues--support)
- [Acknowledgements](#acknowledgements)

---

## About

Striver's A2Z DSA is a popular curriculum that covers core algorithmic topics essential for competitive programming and technical interviews. This repository aims to collect high-quality solutions (with clear explanations, time/space complexity notes, and tested code) mapped to the A2Z topics so learners can:

- Study reference solutions in one place.
- Track progress by topic.
- Contribute and improve existing solutions.

This repo is intended for learners of all levels — from beginner to advanced — who want a single source of truth for Striver's A2Z problem set.

---

## Repository Structure

Top-level layout (example — actual folders may differ):

- /arrays
  - README.md (topic overview, common approaches)
  - problem_001_two_sum.cpp
  - problem_001_two_sum.py
- /linked_lists
  - ...
- /stacks_and_queues
- /trees
- /graphs
- /dynamic_programming
- /strings
- /math
- /greedy
- /sorting_searching
- /bit_manipulation
- /utils (helpers, input generators, test harnesses)
- README.md (this file)

Each topic folder typically contains:
- Solutions files named clearly (topic/problem_description.extension)
- A local README describing the topic, typical techniques, and the problem mapping to the A2Z list
- If present, input/outputs or small test files


## How to Use This Repository

### Browse by Topic
Open the topic folder that interests you (e.g., `trees/`, `dynamic_programming/`). Each folder contains topic overviews and problems ordered roughly from basic to advanced.


## Contribution Guide

Contributions are welcome! Whether you're adding missing solutions, optimizing existing ones, or improving documentation — thank you.

Before contributing, please read these guidelines.

How to add a solution
1. Fork the repository.
2. Create a branch: git checkout -b feat/<topic>-<short-description>
3. Add your solution file to the appropriate topic folder.
   - Use clear file names, e.g. `two_sum.cpp`, `binary_tree_inorder_traversal.py`.
   - If adding multiple languages for one problem, use a consistent naming pattern: `problemname.lang.ext` or `problemname__lang.ext`.
4. Update or add the topic README with:
   - Problem title and canonical link (e.g., LeetCode, GFG) if applicable.
   - Short explanation of the approach.
   - Complexity analysis.
   - Any special notes (edge cases, constraints).
5. Run local tests or include sample input/output.
6. Create a PR from your branch into main with a descriptive title.

Coding Style
- Keep functions small and focused.
- Add comments to explain non-obvious logic or optimizations.
- Prefer readable variable names; avoid single-letter names except for indices (i, j).
- For C++ files, prefer standard headers and avoid non-portable compiler extensions.
- For Python files, adhere to PEP8 where practical.

Pull Request Checklist
- [ ] Code compiles without warnings (when applicable).
- [ ] Provided explanation and complexity analysis.
- [ ] Sample tests or basic validation included or described.
- [ ] All new files placed in correct folder.
- [ ] PR description explains what was added/changed and why.

---

## Issues & Support

- If you find an incorrect solution, bug, or missing explanation:
  - Open an issue describing the problem, expected behavior, and a short repro (input, output).
  - If you can, propose a fix or open a PR.
- Use descriptive issue titles and link to the specific file or problem in the repo.

---

## Acknowledgements

- Striver — for the A2Z DSA curriculum that inspired this structure.
- Contributors and maintainers who add solutions, tests, and documentation.
- The wider algorithm and competitive programming community for resources and explanations.

---

Happy learning and coding!
