//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TRDeviceSetupLegacySetupActionAuthInfo : NSObject
{
    NSDictionary *_headers;
    NSDictionary *_body;
}

@property(readonly, nonatomic) NSDictionary *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
// - (void).cxx_destruct;
- (id)initWithHeaders:(id)arg1 body:(id)arg2;

@end

