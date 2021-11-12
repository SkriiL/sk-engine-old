import os
import sys
from typing import List, Dict

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


def get_config() -> Dict:
    c = {"o_file": "main", "run": False}
    for arg in sys.argv[1:]:
        if "-o" in arg:
            o_file_index = sys.argv.index("-o") + 1
            if len(sys.argv) > o_file_index:
                c["o_file"] = sys.argv[o_file_index]
            else:
                raise Exception("No file name for -o.")
        if "-r" in arg:
            c["run"] = True
    return c


if __name__ == "__main__":
    config = get_config()
    paths = get_all_source_files()
    cmd = build_command(paths, config["o_file"])
    os.system(cmd)
    if config["run"]:
        os.system(config["o_file"])
