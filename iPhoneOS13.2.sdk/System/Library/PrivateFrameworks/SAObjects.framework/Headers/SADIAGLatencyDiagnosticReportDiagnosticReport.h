//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface SADIAGLatencyDiagnosticReportDiagnosticReport : AceObject <SAAceSerializable>
{
}

+ (id)latencyDiagnosticReportDiagnosticReportWithDictionary:(id)arg1 context:(id)arg2;
+ (id)latencyDiagnosticReportDiagnosticReport;
@property(copy, nonatomic) NSString *verb;
@property(copy, nonatomic) NSURL *uri;
@property(copy, nonatomic) NSNumber *latency;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

