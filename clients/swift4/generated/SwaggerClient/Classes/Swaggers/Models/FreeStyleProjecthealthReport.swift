//
// FreeStyleProjecthealthReport.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class FreeStyleProjecthealthReport: Codable {

    public var description: String?
    public var iconClassName: String?
    public var iconUrl: String?
    public var score: Int?
    public var _class: String?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case description = "description"
        case iconClassName = "iconClassName"
        case iconUrl = "iconUrl"
        case score = "score"
        case _class = "_class"
    }

}
