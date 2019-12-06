//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFConversationStorable-Protocol.h>

@class AFDataStore, AFDialogPhase, AceObject, NSString, NSUUID;

@interface AFMutableConversationItem : NSObject <AFConversationStorable, NSCopying>
{
    BOOL _virgin;
    NSUUID *_identifier;
    NSUUID *_revisionIdentifier;
    long long _type;
    AceObject *_aceObject;
    AFDialogPhase *_dialogPhase;
    NSString *_aceCommandIdentifier;
    long long _presentationState;
    AFDataStore *_associatedDataStore;
}

@property(readonly, nonatomic) AFDataStore *associatedDataStore; // @synthesize associatedDataStore=_associatedDataStore;
@property(nonatomic, getter=isVirgin) BOOL virgin; // @synthesize virgin=_virgin;
@property(nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property(copy, nonatomic) NSString *aceCommandIdentifier; // @synthesize aceCommandIdentifier=_aceCommandIdentifier;
@property(retain, nonatomic) AFDialogPhase *dialogPhase; // @synthesize dialogPhase=_dialogPhase;
@property(retain, nonatomic) AceObject *aceObject; // @synthesize aceObject=_aceObject;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSUUID *revisionIdentifier; // @synthesize revisionIdentifier=_revisionIdentifier;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)propertyListRepresentation;
- (long long)_presentationStateForPropertyListString:(id)arg1;
- (id)_propertyListStringForPresentationState;
- (long long)_typeForPropertyListString:(id)arg1;
- (id)_propertyListStringForType;
- (void)_didMutate;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithType:(long long)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(long long)arg4 aceCommandIdentifier:(id)arg5 virgin:(BOOL)arg6 associatedDataStore:(id)arg7;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 aceObject:(id)arg3 dialogPhase:(id)arg4 presentationState:(long long)arg5 aceCommandIdentifier:(id)arg6 virgin:(BOOL)arg7 associatedDataStore:(id)arg8;
- (id)initWithIdentifier:(id)arg1 revisionIdentifier:(id)arg2 type:(long long)arg3 aceObject:(id)arg4 dialogPhase:(id)arg5 presentationState:(long long)arg6 aceCommandIdentifier:(id)arg7 virgin:(BOOL)arg8 associatedDataStore:(id)arg9;

@end

