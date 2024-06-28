package tree_sitter_tort_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-tort"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_tort.Language())
	if language == nil {
		t.Errorf("Error loading Tort grammar")
	}
}
