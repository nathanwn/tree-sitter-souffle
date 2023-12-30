#!/bin/bash

tree-sitter generate

result=$(find "$dir" -type f -name "*.dl"  -exec bash -c 'f=$1; tree-sitter parse -q "$f" || echo FAILED "$f"' shell {} \; | grep FAILED)

if [ -n "$result" ]; then
  echo "Failed integration test."
  echo "$result"
  exit 1
fi

echo "All good!"
