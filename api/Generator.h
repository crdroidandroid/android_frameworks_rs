/*
 * Copyright (C) 2015 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_RS_API_GENERATOR_GENERATOR_H
#define ANDROID_RS_API_GENERATOR_GENERATOR_H

// Generates the RenderScript header files.  The implementation is in GenerateHeaderFiles.cpp.
bool generateHeaderFiles(const std::string& directory);

// Generates the Java and RenderScript test files.  The implementation is in GenerateTestFiles.cpp.
bool generateTestFiles(const std::string& directory, int versionOfTestFiles);

// Generates all HTML documentation files.  The implementation is in GenerateHtmlDocumentation.cpp.
bool generateHtmlDocumentation(const std::string& director);

#endif  // ANDROID_RS_API_GENERATOR_GENERATOR_H
