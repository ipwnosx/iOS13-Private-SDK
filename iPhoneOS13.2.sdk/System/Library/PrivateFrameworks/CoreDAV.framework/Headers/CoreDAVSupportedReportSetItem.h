//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem
{
    NSMutableSet *_supportedReports;
}

+ (id)copyParseRules;
@property(retain, nonatomic) NSMutableSet *supportedReports; // @synthesize supportedReports=_supportedReports;
// - (void).cxx_destruct;
- (BOOL)supportsReportWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)addSupportedReport:(id)arg1;
- (id)description;
- (id)init;

@end

