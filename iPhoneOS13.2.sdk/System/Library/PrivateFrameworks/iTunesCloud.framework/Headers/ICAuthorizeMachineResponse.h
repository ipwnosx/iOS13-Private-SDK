//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

@interface ICAuthorizeMachineResponse : NSObject
{
    NSDictionary *_responseDictionary;
}

// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *tokenData;
@property(readonly, copy, nonatomic) NSData *keybagData;
- (id)initWithResponseDictionary:(id)arg1;

@end

