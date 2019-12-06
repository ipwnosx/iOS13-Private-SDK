//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface PLCPLDownloadContext : NSObject
{
    BOOL _completed;
    NSString *_taskIdentifier;
    NSString *_resourceTypeDescription;
    double _progress;
    NSError *_error;
    double _updateLastQueuedTime;
}

@property double updateLastQueuedTime; // @synthesize updateLastQueuedTime=_updateLastQueuedTime;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL completed; // @synthesize completed=_completed;
@property double progress; // @synthesize progress=_progress;
@property(retain) NSString *resourceTypeDescription; // @synthesize resourceTypeDescription=_resourceTypeDescription;
@property(retain) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
// - (void).cxx_destruct;
- (void)updateFromDownloadStatusUserInfo:(id)arg1;
- (id)description;

@end

