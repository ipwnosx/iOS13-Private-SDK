//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDSettingOwnerProtocol-Protocol.h>

@class HMSettingValue, NSMutableArray, NSNumber, NSString, NSUUID;

@interface HMDSetting : NSObject <HMDSettingOwnerProtocol>
{
    BOOL _readOnly;
    NSUUID *_identifier;
    NSUUID *_parentIdentifier;
    NSString *_name;
    NSMutableArray *_constraints;
    NSString *_keyPath;
    NSNumber *_type;
    NSNumber *_properties;
    HMSettingValue *_internalValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)settingValueWithModel:(id)arg1;
@property(copy) HMSettingValue *internalValue; // @synthesize internalValue=_internalValue;
@property(copy) NSNumber *properties; // @synthesize properties=_properties;
@property(copy) NSNumber *type; // @synthesize type=_type;
@property(getter=isReadOnly) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(readonly, copy) NSString *keyPath;
@property(retain) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)wouldValueUpdate:(id)arg1;
- (BOOL)isValidValue:(id)arg1;
- (id)logIdentifier;
- (BOOL)updateWithSettingValue:(id)arg1;
- (void)addConstraint:(id)arg1;
@property(readonly, copy) id value;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 name:(id)arg3 properties:(id)arg4 type:(id)arg5 value:(id)arg6 constraints:(id)arg7;
- (id)initWithModel:(id)arg1;

@end

