//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSNumber, NSString;

@interface HMDBulletinCharacteristicTuple : HMFObject
{
    BOOL _changedByThisDevice;
    NSString *_serviceContextID;
    NSString *_currentType;
    id _targetValue;
    NSDate *_lastPostingTime;
    NSNumber *_targetStateNumber;
}

+ (id)tupleWithServiceContextID:(id)arg1 currentType:(id)arg2 targetValue:(id)arg3 targetStateNumber:(id)arg4 changedByThisDevice:(BOOL)arg5;
@property(readonly, nonatomic) BOOL changedByThisDevice; // @synthesize changedByThisDevice=_changedByThisDevice;
@property(readonly, nonatomic) NSNumber *targetStateNumber; // @synthesize targetStateNumber=_targetStateNumber;
@property(retain, nonatomic) NSDate *lastPostingTime; // @synthesize lastPostingTime=_lastPostingTime;
@property(readonly, nonatomic) id targetValue; // @synthesize targetValue=_targetValue;
@property(readonly, nonatomic) NSString *currentType; // @synthesize currentType=_currentType;
@property(readonly, nonatomic) NSString *serviceContextID; // @synthesize serviceContextID=_serviceContextID;
// - (void).cxx_destruct;
- (void)updatePostingTime;
- (id)initWithServiceContextID:(id)arg1 currentType:(id)arg2 targetValue:(id)arg3 targetStateNumber:(id)arg4 changedByThisDevice:(BOOL)arg5;

@end

