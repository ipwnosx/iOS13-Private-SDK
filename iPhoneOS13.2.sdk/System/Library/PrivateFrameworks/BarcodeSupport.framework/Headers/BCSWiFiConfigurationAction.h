//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BarcodeSupport/BCSAction.h>

__attribute__((visibility("hidden")))
@interface BCSWiFiConfigurationAction : BCSAction
{
}

- (BOOL)isWiFiAction;
- (id)actionPickerItems;
- (void)performDefaultActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performDefaultAction;
- (id)debugDescriptionExtraInfoDictionary;
- (id)localizedDefaultActionDescription;
- (id)_wiFiConfigurationData;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;

@end

