#!/bin/bash
set -x
rsync -uvrt --modify-window=1 ./*.*p* ~/Dropbox/C++/cmhughes
rsync -uvrt --modify-window=1 ./update-dropbox.sh ~/Dropbox/C++/cmhughes
git log > creation-order.txt
mv creation-order.txt ~/Dropbox/C++/cmhughes
exit
