//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFConditionItem-Protocol.h>

@class HFCondition;

@interface HFUnknownConditionItem : HFItem <HFConditionItem>
{
    HFCondition *_condition;
}

@property(readonly, nonatomic) HFCondition *condition; // @synthesize condition=_condition;
// - (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithCondition:(id)arg1;
- (id)init;

@end

