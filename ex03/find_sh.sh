#!/bin/zsh
#find . -type f -name "*.sh"  -exec sh -c 'echo "${1#./}" | sed "s/\.sh$//"' _ {} \;
find . -type f -name "*.sh" -exec basename -s .sh {} \;
