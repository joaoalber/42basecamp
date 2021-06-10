git_root_directory=$(git rev-parse --show-toplevel)
cd $git_root_directory
directory_files=$(find . -type f)
git check-ignore $directory_files
