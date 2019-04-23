find . -depth -name '*.sh' -exec basename {} \; | sed -e 's/\.sh//'
