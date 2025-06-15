#!/usr/bin/env python3

import os
import sys
import shutil
import re
from pathlib import Path

def create_project(project_name, target_dir):
    # Validate project name
    if not re.match(r'^[a-zA-Z][a-zA-Z0-9_]*$', project_name):
        print("Error: Project name must start with a letter and contain only letters, numbers, and underscores")
        sys.exit(1)

    # Create target directory
    target_path = Path(target_dir) / project_name
    if target_path.exists():
        print(f"Error: Directory {target_path} already exists")
        sys.exit(1)

    # Get template directory (where this script is located)
    template_dir = Path(__file__).parent

    # Create project directory
    target_path.mkdir(parents=True)
    os.chdir(target_path)

    # List of files/directories to exclude
    exclude_list = ['.git', 'build', 'create_project.py', '.DS_Store']

    # Copy template files
    for item in template_dir.iterdir():
        if item.name in exclude_list:
            continue
        if item.is_file():
            shutil.copy2(item, target_path)
        elif item.is_dir():
            shutil.copytree(item, target_path / item.name, ignore=shutil.ignore_patterns(*exclude_list))

    # Update CMakeLists.txt
    cmake_file = target_path / 'CMakeLists.txt'
    if cmake_file.exists():
        content = cmake_file.read_text()
        # Add PROJECT_NAME variable at the top
        content = f"set(PROJECT_NAME {project_name})\n" + content
        cmake_file.write_text(content)

    # Update README.md
    readme_file = target_path / 'README.md'
    if readme_file.exists():
        content = readme_file.read_text()
        content = content.replace('FPGA_TEMPLATE_PROJECT', project_name)
        readme_file.write_text(content)

    # Create build directory
    (target_path / 'build').mkdir()

    # Initialize git repository
    os.system('git init')
    os.system('git add .')
    os.system('git commit -m "Initial commit"')

    print(f"\nProject '{project_name}' has been created successfully!")
    print(f"\nNext steps:")
    print(f"1. cd {project_name}")
    print(f"2. mkdir build && cd build")
    print(f"3. cmake ..")
    print(f"4. make")

def main():
    if len(sys.argv) != 3:
        print("Usage: python create_project.py <project_name> <target_directory>")
        sys.exit(1)

    project_name = sys.argv[1]
    target_dir = sys.argv[2]
    create_project(project_name, target_dir)

if __name__ == "__main__":
    main() 