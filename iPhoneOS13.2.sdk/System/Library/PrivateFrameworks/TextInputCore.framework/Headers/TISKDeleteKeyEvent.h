//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TISKInputEvent.h>

@interface TISKDeleteKeyEvent : TISKInputEvent
{
    long long _deletePostion;
}

@property(nonatomic) long long deletePostion; // @synthesize deletePostion=_deletePostion;
- (id)description;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (void)reportToSession:(id)arg1;
- (long long)_metricDeleteKeyPostion;
- (id)init:(id)arg1 order:(long long)arg2;

@end

