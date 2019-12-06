//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class HFAccessorySettingSiriLanguageAdapter, HFSiriLanguageOption;

@interface HUSiriLanguageOptionItem : HFItem
{
    NSUInteger _optionStyle;
    HFAccessorySettingSiriLanguageAdapter *_adapter;
    HFSiriLanguageOption *_languageOption;
}

+ (id)selectionKeyForLanguageOption:(id)arg1 withOptionStyle:(NSUInteger)arg2;
@property(retain, nonatomic) HFSiriLanguageOption *languageOption; // @synthesize languageOption=_languageOption;
@property(readonly, nonatomic) HFAccessorySettingSiriLanguageAdapter *adapter; // @synthesize adapter=_adapter;
@property(readonly, nonatomic) NSUInteger optionStyle; // @synthesize optionStyle=_optionStyle;
// - (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithStyle:(NSUInteger)arg1 adapter:(id)arg2 languageOption:(id)arg3;

@end

