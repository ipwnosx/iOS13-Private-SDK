//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface FCVideoManifest : NSObject
{
    NSURL *_videoURL;
    NSString *_articleID;
}

@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
// - (void).cxx_destruct;
- (id)initWithArticleID:(id)arg1 videoURL:(id)arg2;
- (id)init;

@end

