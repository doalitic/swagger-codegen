#!/bin/bash

set -e

# Make sure api docs are generated
#
curl -o /dev/null -s https://api.brook.io/api-docs

# Clean previous artifacts to force libbrook to be re-generated
#
./run-in-docker.sh mvn clean
./run-in-docker.sh mvn package

# Generate libbrook
#
./run-in-docker.sh generate \
  -i https://api-stg.brook.io/docs \
  -l python \
  -o samples/client/libbrook \
  -c libbrook.config.json

