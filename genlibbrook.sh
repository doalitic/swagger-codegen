#!/bin/bash

set -e

curl -o /dev/null -s https://api.brook.io/api-docs
./run-in-docker.sh mvn clean
./run-in-docker.sh mvn package
./run-in-docker.sh generate \
  -i https://api.brook.io/docs \
  -l python \
  -o samples/client/libbrook \
  -c libbrook.config.json

