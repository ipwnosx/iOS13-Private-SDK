//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSession;

@interface AAUIImageFetcher : NSObject
{
    NSURLSession *_urlSession;
}

+ (id)sharedImageFetcher;
// - (void).cxx_destruct;
- (id)_urlSession;
- (void)fetchImageAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

