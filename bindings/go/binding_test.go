package tree_sitter_souffle_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-souffle"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_souffle.Language())
	if language == nil {
		t.Errorf("Error loading Souffle grammar")
	}
}
