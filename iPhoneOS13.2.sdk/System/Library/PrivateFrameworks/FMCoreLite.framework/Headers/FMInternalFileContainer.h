//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCoreLite/FMFileContainer-Protocol.h>

@class NSURL;

@interface FMInternalFileContainer : NSObject <FMFileContainer>
{
    NSURL *_url;
}

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
// - (void).cxx_destruct;
- (id)internalContainerURL;
- (id)init;

@end

