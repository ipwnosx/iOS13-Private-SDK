//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSURL;

@interface DEDCloudKitAttachment : NSObject
{
    NSURL *_url;
    NSNumber *_fileSize;
}

@property(retain) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(retain) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (id)initWithURL:(id)arg1;

@end

