// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "plugin_registrant.h"

// Add plugin headers here.
#include <example_plugin.h>
#include <url_launcher_fde.h>

void RegisterPlugins(flutter::FlutterViewController *registry) {
  // In the future, when the Flutter tooling supports Windows plugins, this will
  // be replaced by a generated plugin registration. For now, plugins must be
  // added here manually.
  ExamplePluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("ExamplePlugin"));
  UrlLauncherRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("UrlLauncherPlugin"));
}
