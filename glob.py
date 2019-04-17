#!/usr/bin/env python2
# a helper for gyp to do file globbing cross platform
# Usage: python glob.py root_dir pattern [pattern...]

import fnmatch
import os
import sys

root_dir = sys.argv[1]
patterns = sys.argv[2:]

for (dirpath, dirnames, files) in os.walk(root_dir):
    for f in files:
        match = False
        for pattern in patterns:
            match = match or fnmatch.fnmatch(f, pattern)
        if match:
            print dirpath + '/' + f
