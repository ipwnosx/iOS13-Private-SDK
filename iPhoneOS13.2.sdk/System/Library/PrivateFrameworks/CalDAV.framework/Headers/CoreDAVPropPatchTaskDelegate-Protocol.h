//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalDAV/CoreDAVTaskDelegate-Protocol.h>

@class CoreDAVPropPatchTask, NSArray, NSError;

@protocol CoreDAVPropPatchTaskDelegate <CoreDAVTaskDelegate>

@optional
- (void)propPatchTask:(CoreDAVPropPatchTask *)arg1 parsedResponses:(NSArray *)arg2 error:(NSError *)arg3;
@end

