//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFSlotTemplateContent-Protocol.h>

@class NSAttributedString, NSString, WFSlotIdentifier;

@interface WFSlotTemplateSlot : NSObject <WFSlotTemplateContent, NSCopying>
{
    BOOL _enabled;
    BOOL _invalid;
    BOOL _prefersNoWrapping;
    BOOL _standaloneTextAttachment;
    WFSlotIdentifier *_identifier;
    NSString *_localizedName;
    NSString *_localizedPlaceholder;
    NSAttributedString *_contentAttributedString;
    long long _userInputInsertionIndex;
}

+ (id)slotWithLocalizedName:(id)arg1 localizedPlaceholder:(id)arg2 key:(id)arg3;
+ (id)addingSlotWithKey:(id)arg1;
@property(nonatomic) long long userInputInsertionIndex; // @synthesize userInputInsertionIndex=_userInputInsertionIndex;
@property(nonatomic) BOOL standaloneTextAttachment; // @synthesize standaloneTextAttachment=_standaloneTextAttachment;
@property(nonatomic) BOOL prefersNoWrapping; // @synthesize prefersNoWrapping=_prefersNoWrapping;
@property(copy, nonatomic) NSAttributedString *contentAttributedString; // @synthesize contentAttributedString=_contentAttributedString;
@property(nonatomic, getter=isInvalid) BOOL invalid; // @synthesize invalid=_invalid;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *localizedPlaceholder; // @synthesize localizedPlaceholder=_localizedPlaceholder;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(copy, nonatomic) WFSlotIdentifier *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic, getter=isPopulated) BOOL populated;
- (id)initWithLocalizedName:(id)arg1 localizedPlaceholder:(id)arg2 identifier:(id)arg3;
- (void)populateWithVariableString:(id)arg1 askVariableName:(id)arg2;
- (void)populateWithVariable:(id)arg1;
- (void)populateWithIcon:(id)arg1 string:(id)arg2;
- (void)populateWithString:(id)arg1;

@end

