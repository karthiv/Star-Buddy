FILE(REMOVE_RECURSE
  "StelGuiLib_automoc.cpp"
  "stellarium_automoc.cpp"
  "testConversions_automoc.cpp"
  "testDates_automoc.cpp"
  "testDeltaT_automoc.cpp"
  "testStelFileMgr_automoc.cpp"
  "testStelJsonParser_automoc.cpp"
  "testStelSphereGeometry_automoc.cpp"
  "testStelVertexArray_automoc.cpp"
  "CMakeFiles/StelGuiLib_automoc"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/StelGuiLib_automoc.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
