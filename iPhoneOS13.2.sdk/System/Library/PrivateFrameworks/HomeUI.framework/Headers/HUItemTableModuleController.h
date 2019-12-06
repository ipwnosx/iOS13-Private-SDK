//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUItemTableTextEditingController-Protocol.h>

@class HFItemModule;
@protocol HUItemTableModuleControllerHosting;

@interface HUItemTableModuleController : NSObject <HUItemTableTextEditingController>
{
    id <HUItemTableModuleControllerHosting> _host;
    HFItemModule *_module;
}

@property(readonly, nonatomic) HFItemModule *module; // @synthesize module=_module;
@property(nonatomic) __weak id <HUItemTableModuleControllerHosting> host; // @synthesize host=_host;
// - (void).cxx_destruct;
- (id)textFieldForVisibleItem:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (BOOL)shouldManageTextFieldForItem:(id)arg1;
- (long long)rowAnimationForOperationType:(NSUInteger)arg1 item:(id)arg2 suggestedAnimation:(long long)arg3;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (NSUInteger)didSelectItem:(id)arg1;
- (BOOL)canSelectDisabledItem:(id)arg1;
- (BOOL)canSelectItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
- (id)initWithModule:(id)arg1;

@end

