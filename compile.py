import os
import sys
from typing import List


IGNORE = [".git", ".idea", "cmake-build-debug"]


def get_all_source_files(path: str = "./") -> List[str]:
    paths = []
    for item in filter(lambda x: x not in IGNORE, os.listdir(path)):
        if item.endswith(".cpp"):
            paths.append(path + "/" + item)
        elif "." not in item:
            paths += get_all_source_files(path + "/" + item)
    return paths


def build_command(paths: List[str], o_file: str) -> str:
    command = "g++"
    for path in paths:
        command += " " + path
    command += " -o " + o_file
    return command


if __name__ == "__main__":
    o_file = sys.argv[1] if len(sys.argv) > 1 else "main"
    paths = get_all_source_files()
    cmd = build_command(paths, o_file)
    os.system(cmd)
    if len(sys.argv) > 1:
        for arg in sys.argv[1:]:
            if "-r" in arg:
                os.system(o_file)
