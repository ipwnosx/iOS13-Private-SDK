//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <CoreFollowUpUI/FLExtensionRemoteInterface-Protocol.h>

@interface FLExtensionContext : NSExtensionContext <FLExtensionRemoteInterface>
{
    id _shadowPrincipalObject;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
// - (void).cxx_destruct;
- (void)followUpPerformUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)hostContextWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_shadowPrincipalObject;
- (id)extensionLogicProvider;

@end

