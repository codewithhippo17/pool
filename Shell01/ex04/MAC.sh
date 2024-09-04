#!/bin/bash
ifconfig -a | grep -o "ether [0-9a-fA-F:]\{17\}" | awk ' {print $2}'