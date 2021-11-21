import com.github.gradle.node.npm.task.NpmTask

plugins{
  id("com.github.node-gradle.node") version "3.1.1"
}

tasks.npmInstall{
  nodeModulesOutputFilter{
    exclude("notExistingFile")
  }
}

tasks.register<NpmTask>("run"){
  dependsOn(tasks.npmInstall)
  npmCommand.set(listOf("start"))
}
