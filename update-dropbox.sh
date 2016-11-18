#!/bin/bash
rsync -uvrt --modify-window=1 ./*.*p* ~/Dropbox/C++/cmhughes
rsync -uvrt --modify-window=1 ./update-dropbox.sh ~/Dropbox/C++/cmhughes
git log > creation-order.txt
cat creation-order.txt
mv creation-order.txt ~/Dropbox/C++/cmhughes
ls -l /home/cmhughes/Dropbox/C++/cmhughes/
exit
