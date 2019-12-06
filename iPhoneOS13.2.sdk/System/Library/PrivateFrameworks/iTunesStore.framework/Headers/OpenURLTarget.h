//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OpenURLTarget : NSObject
{
    unsigned int _applicationState;
   struct {
        NSString *clientIdentifier;
        NSString *normalScheme;
        NSString *secureScheme;
    } _targetData;
    long long _targetIndex;
}

- (id)description;
- (id)copyURLForURL:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithTargetIdentifier:(id)arg1;
- (id)init;

@end

