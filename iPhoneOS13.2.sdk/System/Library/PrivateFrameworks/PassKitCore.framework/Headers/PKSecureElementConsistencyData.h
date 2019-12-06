//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface PKSecureElementConsistencyData : NSObject
{
    NSUInteger _backoffLevel;
    NSDictionary *_secureElementAppletStateByAID;
    NSDictionary *_passStateByAID;
    NSDictionary *_cleanupActionsByAID;
    NSArray *_registeredRegions;
}

+ (id)consistencyDataWithPaymentApplications:(id)arg1 secureElementApplets:(id)arg2 cleanupActions:(id)arg3 registeredRegions:(id)arg4;
@property(copy, nonatomic) NSArray *registeredRegions; // @synthesize registeredRegions=_registeredRegions;
@property(copy, nonatomic) NSDictionary *cleanupActionsByAID; // @synthesize cleanupActionsByAID=_cleanupActionsByAID;
@property(copy, nonatomic) NSDictionary *passStateByAID; // @synthesize passStateByAID=_passStateByAID;
@property(copy, nonatomic) NSDictionary *secureElementAppletStateByAID; // @synthesize secureElementAppletStateByAID=_secureElementAppletStateByAID;
@property(nonatomic) NSUInteger backoffLevel; // @synthesize backoffLevel=_backoffLevel;
// - (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end

