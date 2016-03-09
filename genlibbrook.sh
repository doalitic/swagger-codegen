#!/bin/bash

set -e

./run-in-docker.sh mvn clean
./run-in-docker.sh mvn package
./run-in-docker.sh generate \
  -i https://api.brook.io/docs \
  -l python \
  -o samples/client/libbrook \
  -c libbrook.config.json

