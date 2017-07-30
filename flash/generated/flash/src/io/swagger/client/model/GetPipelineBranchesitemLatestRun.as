package io.swagger.client.model {


    [XmlRootNode(name="GetPipelineBranchesitemLatestRun")]
    public class GetPipelineBranchesitemLatestRun {
                [XmlElement(name="durationInMillis")]
        public var durationInMillis: Number = NaN;
                [XmlElement(name="estimatedDurationInMillis")]
        public var estimatedDurationInMillis: Number = NaN;
                [XmlElement(name="enQueueTime")]
        public var enQueueTime: String = null;
                [XmlElement(name="endTime")]
        public var endTime: String = null;
                [XmlElement(name="id")]
        public var id: String = null;
                [XmlElement(name="organization")]
        public var organization: String = null;
                [XmlElement(name="pipeline")]
        public var pipeline: String = null;
                [XmlElement(name="result")]
        public var result: String = null;
                [XmlElement(name="runSummary")]
        public var runSummary: String = null;
                [XmlElement(name="startTime")]
        public var startTime: String = null;
                [XmlElement(name="state")]
        public var state: String = null;
                [XmlElement(name="type")]
        public var type: String = null;
                [XmlElement(name="commitId")]
        public var commitId: String = null;
                [XmlElement(name="_class")]
        public var class: String = null;

    public function toString(): String {
        var str: String = "GetPipelineBranchesitemLatestRun: ";
        str += " (durationInMillis: " + durationInMillis + ")";
        str += " (estimatedDurationInMillis: " + estimatedDurationInMillis + ")";
        str += " (enQueueTime: " + enQueueTime + ")";
        str += " (endTime: " + endTime + ")";
        str += " (id: " + id + ")";
        str += " (organization: " + organization + ")";
        str += " (pipeline: " + pipeline + ")";
        str += " (result: " + result + ")";
        str += " (runSummary: " + runSummary + ")";
        str += " (startTime: " + startTime + ")";
        str += " (state: " + state + ")";
        str += " (type: " + type + ")";
        str += " (commitId: " + commitId + ")";
        str += " (class: " + class + ")";
        return str;
    }

}

}