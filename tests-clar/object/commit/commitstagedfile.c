	repo = NULL;

	const git_index_entry *entry;
	cl_git_pass(git_index_add_from_workdir(index, "test.txt"));
	entry = git_index_get_byindex(index, 0);
	cl_git_pass(git_index_write_tree(&tree_oid, index));