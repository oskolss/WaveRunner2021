# CMake generated Testfile for 
# Source directory: /home/waverunner/Waverunner_Code/WaveRunner2021/dev_workspace/src/message_pkg
# Build directory: /home/waverunner/Waverunner_Code/WaveRunner2021/build/message_pkg
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/waverunner/Waverunner_Code/WaveRunner2021/build/message_pkg/test_results/message_pkg/lint_cmake.xunit.xml" "--package-name" "message_pkg" "--output-file" "/home/waverunner/Waverunner_Code/WaveRunner2021/build/message_pkg/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/home/waverunner/Waverunner_Code/WaveRunner2021/build/message_pkg/test_results/message_pkg/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/waverunner/Waverunner_Code/WaveRunner2021/dev_workspace/src/message_pkg")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/waverunner/Waverunner_Code/WaveRunner2021/build/message_pkg/test_results/message_pkg/xmllint.xunit.xml" "--package-name" "message_pkg" "--output-file" "/home/waverunner/Waverunner_Code/WaveRunner2021/build/message_pkg/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/home/waverunner/Waverunner_Code/WaveRunner2021/build/message_pkg/test_results/message_pkg/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/waverunner/Waverunner_Code/WaveRunner2021/dev_workspace/src/message_pkg")
subdirs("message_pkg__py")
