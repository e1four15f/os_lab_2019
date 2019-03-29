#!/bin/bash
gcc zombie_process.c -o zombie_process
./zombie_process
ps -ef | grep zombie_process