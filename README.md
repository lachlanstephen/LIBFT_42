<h1>LIBFT</h1>

<h3>Mark: 125/100</h3>

LIBFT, the first project in the 42 Cursus, set about teaching us how standard functions in C work, by implementing our own versions, whilst matching the original functions functionality as per their manual entries. From these functions, we create our own library to use in future projects.

<p>This project was split into 3 parts:</p>

<ol>
<li>Standard C Library (libc) Functions - Same protoypes and comply with definition as in the man</li>
<li>Additional Functions - Functions not in libc, or are part of it, but in an altered form</li>
<li>Bonus Functions - List manipulation functions</li>
</ol>

<h3>Creating the library</h3>

<p>Run the following command:</p>

```bash

# Make using the default Makefile

make re

# This creates the function library libft.a at the root

# Make with bonuses (separate as per subject requirements)

make bonus
```

<h3>Testing LIBFT functions</h3>

To test your own LIBFT, download the [`main.c`](./libft/main.c) and [`testing_Makefile`](./libft/testing_Makefile) files from my repo, and move into your libft project folder.

<p>Run these commands to test your libft functionality:</p>

```bash

# Make using the specific Makefile with the -f flag

make re -f testing_Makefile

# Run compiled program

./test_libft
```
<p>Compare the user output with the expected output.</p>

<p><i>Note</i>: My test files aren't fully complete currently. On my to-do list.</p>

**_Important_: Make sure to run `make fclean -f testing_Makefile` to clean up files before submitting for evaluation.**

<h3>Future Use of LIBFT</h3>

`libft.a` can be linked with compilations in future using:

```bash
-L<LIBFT_directory> -lft

# e.g. cc -Wall -Wextra -Werror *.o -L./libft/ -lft -o program
```

<h4>Plan for repository</h4>

- [ ] Complete test cases in `main.c` for mandatory functions
- [ ] Create test functions for bonus functions
- [ ] Return whether diff of output is same or different
