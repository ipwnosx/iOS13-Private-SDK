//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class HMSetting, HMSettings, NSSet;

@interface _HFObservedAccessorySettingState : NSObject <NAIdentifiable>
{
    HMSettings *_settings;
    HMSetting *_setting;
    NSSet *_selectionOptions;
}

+ (id)na_identity;
+ (id)stateWithSettings:(id)arg1 forSetting:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *selectionOptions; // @synthesize selectionOptions=_selectionOptions;
@property(readonly, nonatomic) HMSetting *setting; // @synthesize setting=_setting;
@property(readonly, nonatomic) HMSettings *settings; // @synthesize settings=_settings;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithSettings:(id)arg1 setting:(id)arg2;
- (id)init;

@end

