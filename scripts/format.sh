#!/usr/bin/env bash

find graphics/ apps/ -regex '.*\.\(cpp\|h\)' -exec clang-format -style=file -i {} \;