//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface DCCachesDirectory : NSObject
{
    NSURL *_cachesDirectoryURL;
}

+ (id)sharedCachesDirectory;
@property(readonly, nonatomic) NSURL *cachesDirectoryURL; // @synthesize cachesDirectoryURL=_cachesDirectoryURL;
// - (void).cxx_destruct;
- (id)init;

@end

