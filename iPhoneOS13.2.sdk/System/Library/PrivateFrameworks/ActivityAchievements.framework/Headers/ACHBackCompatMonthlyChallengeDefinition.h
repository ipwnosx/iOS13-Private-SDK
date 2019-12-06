//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSExpression, NSString;

@interface ACHBackCompatMonthlyChallengeDefinition : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_typeString;
    NSExpression *_goalExpression;
}

+ (BOOL)supportsSecureCoding;
+ (id)definitionFromData:(id)arg1;
@property(readonly, nonatomic) NSExpression *goalExpression; // @synthesize goalExpression=_goalExpression;
@property(readonly, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_goalExpressionValue;
- (id)_dateComponentsFromIdentifier;
- (NSUInteger)_monthlyChallengeTypeFromTypeString;
- (id)template;

@end

