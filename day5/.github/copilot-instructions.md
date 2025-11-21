<!-- Auto-generated: guidance for AI coding agents working on this repo. -->
# Copilot instructions for this repository

This workspace is a small collection of single-file C exercises (student/coursework style). The goal of this document is to give an AI coding agent the precise, discoverable knowledge needed to be productive here.

**Quick Summary:**
- **Layout:** flat folder containing isolated C programs. Examples: `1_arthematic.c`, `2_RO.c`, `3_LO.C`, `4_userinput.c`, `5_if.c`, `6_ifelse.c`, `7_evenodd.c`, `8_elseif.c`, `9_ascii.c`.
- **Build:** no build system or tests. Each `.c` is a standalone program with its own `main`.
- **Primary platform:** Windows (developer used PowerShell). File extensions may vary in case (e.g., `3_LO.C`). Treat filenames as they appear but remember Windows is case-insensitive.

**What to do when editing/adding code**
- Only modify a file if the change is limited and deliberate — these are independent demo programs. Prefer one small logical change per PR (e.g., fix a single program's logic or add a small feature to one file).
- Keep filenames and numeric prefixes intact. The numeric prefixes imply ordering/lessons and other files may rely on that naming for instructor scripts.
- If adding a new example, follow the same naming convention (prefix with the next integer and use underscore-separated description), and place it alongside existing `.c` files.

**How to compile & run (PowerShell)**
- Compile a single file with `gcc` (MinGW/WSL or other installed compiler):

```powershell
gcc -o 1_arthematic.exe 1_arthematic.c
.\1_arthematic.exe
```

- Quick bulk-compile command (PowerShell):

```powershell
Get-ChildItem -Filter "*.c" | ForEach-Object { gcc $_.Name -o ($_.BaseName + '.exe') }
```

- Notes: If `gcc` isn't present on the developer machine, prefer documenting that the user should install MinGW or use WSL. Do not add a build system unless requested.

**Patterns & conventions observed in this repo**
- Programs are tiny, single-file exercises focused on basic C constructs (I/O, conditionals, ASCII values, etc.). Expect `main()` in each file.
- Naming uses numeric prefix then underscore then short description, e.g., `7_evenodd.c`.
- Casing is inconsistent (e.g., `3_LO.C`). On Windows that's fine; on case-sensitive systems take care when referencing filenames.

**What *not* to change without confirmation**
- Do not consolidate files into a single project or add a multi-file build system without asking — this repo appears to be a set of isolated exercises.
- Avoid mass formatting changes; keep edits minimal and focused on the learning goal of the modified file.

**Examples that show notable patterns**
- `4_userinput.c` — demonstrates standard input handling; use it as a template for user-interaction examples.
- `7_evenodd.c` and `8_elseif.c` — show how conditional logic is taught across multiple files; prefer keeping examples separate rather than merging them.

**Agent behavior guidance (practical tips)**
- When proposing changes, include a one-line explanation: why the change helps (bugfix, clarity, portability), and how to test it locally (compile command + example input).
- If you add code that expects specific input, update the filename comment or include a short `README.md` snippet in the same folder showing example input and expected output.
- When you modify a file, run the compile command in the repo root and report any compiler warnings/errors in your PR description.

**If you need to add CI or tests**
- Ask the repository owner before adding CI. If agreed, propose a minimal workflow that only compiles changed `.c` files with `gcc` and runs them with sample inputs.

---
If anything here is unclear or you want a different level of automation (for example, a small `Makefile` or PowerShell build script), tell me which direction you prefer and I will update this file accordingly.
