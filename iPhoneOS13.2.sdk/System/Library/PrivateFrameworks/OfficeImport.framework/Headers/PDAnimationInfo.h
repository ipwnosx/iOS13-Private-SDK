//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDAnimationInfoData, PDMediaNode;

__attribute__((visibility("hidden")))
@interface PDAnimationInfo : NSObject
{
    PDAnimationInfoData *mEntrance;
    PDAnimationInfoData *mExit;
    PDAnimationInfoData *mMedia;
    PDMediaNode *mediaNode;
}

@property(retain, nonatomic) PDMediaNode *mediaNode; // @synthesize mediaNode;
@property(retain, nonatomic) PDAnimationInfoData *mediaData; // @synthesize mediaData=mMedia;
// - (void).cxx_destruct;
- (id)description;
- (id)exitData;
- (void)setExitData:(id)arg1;
- (id)entranceData;
- (void)setEntranceData:(id)arg1;

@end

