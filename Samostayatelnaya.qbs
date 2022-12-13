import qbs

CppApplication {
    consoleApplication: true
    files: [
        "funcs.cpp",
        "funcs.h",
        "main.cpp",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: product.type
        qbs.install: true
    }
}
