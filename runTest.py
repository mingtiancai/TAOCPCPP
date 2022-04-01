import os

color_str_profix = "\033[35m"
color_str_suffix = "\033[0m"


def color_str(s):
    str_filled = ""
    for c in s:
        if c == " ":
            c = "-"
        str_filled += c

    return color_str_profix+str_filled+color_str_suffix


def color_print(s):
    mat = "{:^70}"
    s1 = mat.format(s)
    print(color_str(s1))


if __name__ == "__main__":
    dir_prefix = os.getcwd()
    bin_dir = dir_prefix+os.path.sep+"bin"
    files = os.listdir(bin_dir)
    print("run")
    for file in files:
        if file[0:4] != "test":
            break
        file_abs_path = bin_dir+os.path.sep+file

        test_file = "run "+file
        color_print(test_file)
        os.system(file_abs_path)
