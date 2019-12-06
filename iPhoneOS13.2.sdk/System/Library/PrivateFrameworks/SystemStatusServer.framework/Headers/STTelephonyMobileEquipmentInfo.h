//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemStatusServer/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface STTelephonyMobileEquipmentInfo : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    NSString *_MEID;
    NSString *_IMEI;
    NSString *_ICCID;
    NSString *_CSN;
    NSString *_bootstrapICCID;
}

@property(readonly, copy, nonatomic) NSString *bootstrapICCID; // @synthesize bootstrapICCID=_bootstrapICCID;
@property(readonly, copy, nonatomic) NSString *CSN; // @synthesize CSN=_CSN;
@property(readonly, copy, nonatomic) NSString *ICCID; // @synthesize ICCID=_ICCID;
@property(readonly, copy, nonatomic) NSString *IMEI; // @synthesize IMEI=_IMEI;
@property(readonly, copy, nonatomic) NSString *MEID; // @synthesize MEID=_MEID;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic, getter=isOnBootstrap) BOOL onBootstrap;
- (id)initWithMobileEquipmentInfo:(id)arg1;
- (id)init;

@end

