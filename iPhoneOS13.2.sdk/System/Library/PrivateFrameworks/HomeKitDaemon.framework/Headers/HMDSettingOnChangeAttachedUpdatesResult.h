//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSArray;

@interface HMDSettingOnChangeAttachedUpdatesResult : HMFObject
{
    NSArray *_settingsToUpdate;
    NSArray *_modelsToUpdate;
    id /* CDUnknownBlockType */ _onCommitCompletion;
}

@property(readonly) id /* CDUnknownBlockType */ onCommitCompletion; // @synthesize onCommitCompletion=_onCommitCompletion;
@property(readonly) NSArray *modelsToUpdate; // @synthesize modelsToUpdate=_modelsToUpdate;
@property(readonly) NSArray *settingsToUpdate; // @synthesize settingsToUpdate=_settingsToUpdate;
// - (void).cxx_destruct;
- (id)initWithSettingsToUpdate:(id)arg1 models:(id)arg2 onCommitCompletion:(CDUnknownBlockType)arg3;

@end

