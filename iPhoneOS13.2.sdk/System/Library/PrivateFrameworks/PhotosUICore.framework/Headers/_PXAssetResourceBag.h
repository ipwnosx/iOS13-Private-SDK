//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface _PXAssetResourceBag : NSObject
{
    long long _resourceType;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) long long resourceType; // @synthesize resourceType=_resourceType;
// - (void).cxx_destruct;
- (id)initWithResourceType:(long long)arg1 atURL:(id)arg2;

@end

