#!/bin/bash

# Root folder
mkdir -p C-DSA-Mastery
cd C-DSA-Mastery || exit

# ================== 01-Basics ==================
mkdir -p 01-Basics/week01-syntax-loops \
         01-Basics/week02-functions-arrays \
         01-Basics/week03-pointers1 \
         01-Basics/week04-pointers-structs

touch 01-Basics/week01-syntax-loops/{calculator.c,even_odd.c,notes.md}
touch 01-Basics/week02-functions-arrays/{arrays.c,strings.c,notes.md}
touch 01-Basics/week03-pointers1/{pointer_arithmetic.c,swap_with_pointers.c,notes.md}
touch 01-Basics/week04-pointers-structs/{student_records.c,dynamic_memory.c,notes.md}

# ================== 02-Intermediate ==================
mkdir -p 02-Intermediate/week05-file-io \
         02-Intermediate/week06-recursion \
         02-Intermediate/week07-dynamic-memory \
         02-Intermediate/week08-linked-lists-stacks

# ================== 03-Algorithms ==================
mkdir -p 03-Algorithms/week09-sorting \
         03-Algorithms/week10-searching-hashing \
         03-Algorithms/week11-trees \
         03-Algorithms/week12-review-integration

# ================== 04-Advanced ==================
mkdir -p 04-Advanced/week13-graphs \
         04-Advanced/week14-dp \
         04-Advanced/week15-heaps \
         04-Advanced/week16-advanced-strings

# ================== mini-projects ==================
mkdir -p mini-projects
touch mini-projects/{student_management.c,text_editor.c,bst_dictionary.c}

# ================== leetcode ==================
mkdir -p leetcode/arrays \
         leetcode/strings \
         leetcode/linked_lists \
         leetcode/trees \
         leetcode/graphs

# ================== contests ==================
mkdir -p contests/contest1 contests/contest2

# ================== notes ==================
mkdir -p notes
touch notes/{week01.md,week02.md}
