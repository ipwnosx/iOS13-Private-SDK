//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface _EntitlementCheckResult : NSObject
{
    BOOL _entitled;
    NSError *_error;
    NSString *_group;
    NSString *_entitlement;
}

@property(nonatomic, getter=isEntitled) BOOL entitled; // @synthesize entitled=_entitled;
@property(copy, nonatomic) NSString *entitlement; // @synthesize entitlement=_entitlement;
@property(copy, nonatomic) NSString *group; // @synthesize group=_group;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
// - (void).cxx_destruct;
- (id)initWithEntitlement:(id)arg1 group:(id)arg2;

@end

