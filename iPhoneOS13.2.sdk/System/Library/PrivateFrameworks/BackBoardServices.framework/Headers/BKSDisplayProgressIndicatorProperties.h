//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface BKSDisplayProgressIndicatorProperties : NSObject <NSSecureCoding, BSDescriptionProviding>
{
    long long _style;
    CGPoint _position;
}

+ (BOOL)supportsSecureCoding;
+ (id)progressIndicatorWithStyle:(long long)arg1 position:(CGPoint)arg2;
@property(readonly, nonatomic) CGPoint position; // @synthesize position=_position;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithStyle:(long long)arg1 position:(CGPoint)arg2;

@end

