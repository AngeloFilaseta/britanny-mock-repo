tasks.register<Exec>("run") {
    commandLine("pio", "run")
}

tasks.register<Exec>("test") {
    commandLine("pio", "test")
}

tasks.register<Exec>("upload") {
    commandLine("pio", "run", "-e", "nodemcuv2", "-t", "upload")
}
