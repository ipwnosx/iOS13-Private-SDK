//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAIntentGroupProcessIntent.h>

@interface SAIntentGroupProcessIntent (INSExtensionService)
- (BOOL)ins_shouldUseExtendedFlowTimeout;
- (long long)ins_analyticsEndEventType;
- (long long)ins_analyticsBeginEventType;
- (void)_handleIntentWithExtensionProxy:(id)arg1 onQueue:(id)arg2 processIntentCompleted:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_confirmIntentWithExtensionProxy:(id)arg1 onQueue:(id)arg2 processIntentCompleted:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_resolveIntentSlotsWithExtensionProxy:(id)arg1 onQueue:(id)arg2 processIntentCompleted:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)ins_protobufEncodedIntent;
- (id)ins_jsonEncodedIntent;
@end

