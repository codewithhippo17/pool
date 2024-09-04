#!/bin/bash
ls -l | tail -n +1 | awk 'NR % 2 == 1'