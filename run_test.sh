#!/bin/bash
ARG=$(./random.sh 10 1 10)
valgrind ./push_swap $ARG