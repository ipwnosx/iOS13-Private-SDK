//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

@class CoreDAVResponseItem, NSSet, NSURL;

@interface CalDAVPropPatchWithFallbackTaskGroup : CoreDAVTaskGroup
{
    NSURL *_url;
    NSSet *_primaryElements;
    NSSet *_fallbackElements;
    CoreDAVResponseItem *_responseItem;
}

@property(retain, nonatomic) CoreDAVResponseItem *responseItem; // @synthesize responseItem=_responseItem;
// - (void).cxx_destruct;
- (void)startTaskGroup;
- (void)_proppatchAfterFailureCount:(NSUInteger)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5;

@end

