//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKTimeOffsetManager : NSObject
{
    double _timeOffset;
}

+ (id)sharedManager;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
- (void)_updateTimeOffset:(BOOL)arg1;
- (void)_loadTimeOffset;
- (void)forceUpdateTimeOffset;
- (void)_handleFaceLibraryReloaded;
- (void)_handleFaceDefaultsChanged;
- (id)displayTimeForRealTime:(id)arg1;
- (id)faceDisplayTime;
- (void)dealloc;
- (id)init;

@end

