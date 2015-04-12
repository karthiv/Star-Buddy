FILE(REMOVE_RECURSE
  "CMakeFiles/generate-pot"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/generate-pot.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
