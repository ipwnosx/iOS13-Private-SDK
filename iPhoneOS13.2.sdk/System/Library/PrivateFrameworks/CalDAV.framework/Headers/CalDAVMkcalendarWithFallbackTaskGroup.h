//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSDictionary, NSSet, NSURL;

@interface CalDAVMkcalendarWithFallbackTaskGroup : CoreDAVTaskGroup
{
    NSURL *_url;
    NSSet *_primaryElements;
    BOOL _shouldSupportVEVENT;
    BOOL _shouldSupportVTODO;
    NSDictionary *_headersToOverride;
    NSDictionary *_responseHeaders;
    NSSet *_fallbackElements;
}

@property(retain, nonatomic) NSSet *fallbackElements; // @synthesize fallbackElements=_fallbackElements;
@property(retain, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain, nonatomic) NSDictionary *headersToOverride; // @synthesize headersToOverride=_headersToOverride;
@property(nonatomic) BOOL shouldSupportVTODO; // @synthesize shouldSupportVTODO=_shouldSupportVTODO;
@property(nonatomic) BOOL shouldSupportVEVENT; // @synthesize shouldSupportVEVENT=_shouldSupportVEVENT;
// - (void).cxx_destruct;
- (void)startTaskGroup;
- (void)_mkcalendarAfterFailureCount:(NSUInteger)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5;

@end

