//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenshotServices/SSUIServiceRequest.h>

@class NSString;

@interface SSUIRunPPTServiceRequest : SSUIServiceRequest
{
    NSString *_testName;
}

+ (id)entitlement;
@property(copy, nonatomic) NSString *testName; // @synthesize testName=_testName;
// - (void).cxx_destruct;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;

@end

