//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface ISExportDestination : NSObject
{
    NSURL *_photoURL;
    NSURL *_videoURL;
}

+ (id)destinationWithPhotoURL:(id)arg1 videoURL:(id)arg2;
@property(readonly) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly) NSURL *photoURL; // @synthesize photoURL=_photoURL;
// - (void).cxx_destruct;
- (id)initWithPhotoURL:(id)arg1 videoURL:(id)arg2;

@end

