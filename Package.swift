// swift-tools-version:5.8
import PackageDescription

let package = Package(
    name: "BlueBillywigNativeShared-iOS",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "BlueBillywigNativeShared-iOS",
            targets: ["BlueBillywigNativeShared-iOS"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "BlueBillywigNativeShared-iOS",
            path: "./bbnativeshared.xcframework"
        )
    ]
)
