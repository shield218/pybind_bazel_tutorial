#!/bin/bash

# Define the destination directories
BIN_DIR="built/bin"
LIB_DIR="built/lib"

mkdir -p "$BIN_DIR"
mkdir -p "$LIB_DIR"

# Ensure the bazel build is up to date
# bazel build //chef:foreplay_lib
# bazel build //chef:cook_lib
bazel build //chef:foreplay_py
bazel build :chef_binary

# Copy binaries and libraries to their destinations
# cp -v "bazel-bin/chef/libforeplay_lib.so" "${BIN_DIR}/foreplay_lib"
# cp -v "bazel-bin/chef/libcook.so" "${BIN_DIR}/cook_lib"
cp -v "bazel-bin/chef/libforeplay_py.so" "${LIB_DIR}/chef_tom.so"
cp -v "bazel-bin/chef_binary" "${BIN_DIR}/chef_binary"

bazel clean

echo "Installation complete."
