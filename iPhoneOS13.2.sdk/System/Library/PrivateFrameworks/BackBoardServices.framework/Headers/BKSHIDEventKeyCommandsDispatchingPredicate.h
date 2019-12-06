//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>

@class NSSet, NSString;

@interface BKSHIDEventKeyCommandsDispatchingPredicate : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    NSSet *_senderDescriptors;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSSet *senderDescriptors; // @synthesize senderDescriptors=_senderDescriptors;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy, nonatomic) NSSet *displays;
- (id)_initWithSenderDescriptors:(id)arg1;
- (id)init;

@end

