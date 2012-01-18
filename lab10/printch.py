#!/usr/bin/python

import sys, subprocess

from dirwatch import Dirwatch


if __name__ == '__main__':
    def f (changed_files, removed_files):
        print changed_files
        print 'Removed', removed_files
	for file in changed_files:
	   	    subprocess.call(sys.argv[1]+" "+file,shell=True)
    dirs = sys.argv[2:]
    if not dirs:
        dirs = ["."]

    
    Dirwatch(dirs, f, 1).watch()


