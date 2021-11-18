import com.github.gradle.node.task.NodeTask

plugins {
  id("com.github.node-gradle.node") version "3.1.1"
}

tasks.npmInstall {
  nodeModulesOutputFilter {
    exclude("notExistingFile")
  }
}

tasks.register<NodeTask>("run") {
  dependsOn(tasks.npmInstall)
  script.set(file("app.js"))
}
