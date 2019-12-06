//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface _UICommandIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    SEL _action;
    id _propertyList;
}

+ (BOOL)supportsSecureCoding;
+ (id)identifierWithAction:(SEL)arg1 propertyList:(id)arg2;
@property(readonly, nonatomic) id propertyList; // @synthesize propertyList=_propertyList;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAction:(SEL)arg1 propertyList:(id)arg2;

@end

