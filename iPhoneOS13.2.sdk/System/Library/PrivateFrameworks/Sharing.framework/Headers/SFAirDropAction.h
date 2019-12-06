//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface SFAirDropAction : NSObject <NSSecureCoding>
{
    BOOL _requiresUnlockedUI;
    BOOL _shouldUpdateUserResponse;
    NSString *_localizedTitle;
    NSString *_singleItemLocalizedTitle;
    NSString *_actionIdentifier;
    NSString *_transferIdentifier;
    NSUInteger _minRequiredTransferState;
    NSUInteger _maxTransferState;
    id /* CDUnknownBlockType */ _actionHandler;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) id /* CDUnknownBlockType */ actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) BOOL shouldUpdateUserResponse; // @synthesize shouldUpdateUserResponse=_shouldUpdateUserResponse;
@property(nonatomic) BOOL requiresUnlockedUI; // @synthesize requiresUnlockedUI=_requiresUnlockedUI;
@property(nonatomic) NSUInteger maxTransferState; // @synthesize maxTransferState=_maxTransferState;
@property(nonatomic) NSUInteger minRequiredTransferState; // @synthesize minRequiredTransferState=_minRequiredTransferState;
@property(readonly, copy, nonatomic) NSString *transferIdentifier; // @synthesize transferIdentifier=_transferIdentifier;
@property(readonly, copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(copy, nonatomic) NSString *singleItemLocalizedTitle; // @synthesize singleItemLocalizedTitle=_singleItemLocalizedTitle;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
// - (void).cxx_destruct;
- (void)triggerAction;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransferIdentifier:(id)arg1 actionIdentifier:(id)arg2 title:(id)arg3 singleItemTitle:(id)arg4;

@end

