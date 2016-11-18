#!/bin/bash
set -x
cp *.*p* ~/Dropbox/C++/cmhughes
git log > creation-order.txt
mv creation-order.txt ~/Dropbox/C++/cmhughes
exit
