//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFCharacteristicValueDisplayMetadata, NSDictionary;

@interface HFMediaAccessoryItemUpdateResponse : NSObject
{
    HFCharacteristicValueDisplayMetadata *_displayMetadata;
    NSDictionary *_standardResults;
}

@property(readonly, nonatomic) NSDictionary *standardResults; // @synthesize standardResults=_standardResults;
@property(readonly, nonatomic) HFCharacteristicValueDisplayMetadata *displayMetadata; // @synthesize displayMetadata=_displayMetadata;
// - (void).cxx_destruct;
- (id)initWithDisplayMetadata:(id)arg1 standardResults:(id)arg2;

@end

