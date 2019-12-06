//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TVContentRating : NSObject
{
    long long _ratingSystem;
    NSString *_ratingLabel;
    NSUInteger _rank;
    NSString *_ratingDescription;
}

+ (id)new;
@property(readonly, copy, nonatomic) NSString *ratingDescription; // @synthesize ratingDescription=_ratingDescription;
@property(readonly, nonatomic) NSUInteger rank; // @synthesize rank=_rank;
@property(readonly, copy, nonatomic) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(readonly, nonatomic) long long ratingSystem; // @synthesize ratingSystem=_ratingSystem;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSString *stringRepresentation;
@property(readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property(readonly, copy, nonatomic) NSString *ratingSystemString;
@property(readonly, nonatomic) long long ratingSystemKind;
- (id)initWithStringRepresentation:(id)arg1;
- (id)initWithRatingSystem:(long long)arg1 explicitContent:(BOOL)arg2;
- (id)initWithRatingSystemString:(id)arg1 ratingLabel:(id)arg2 rank:(NSUInteger)arg3 ratingDescription:(id)arg4;
- (id)initWithRatingSystem:(long long)arg1 ratingLabel:(id)arg2 rank:(NSUInteger)arg3 ratingDescription:(id)arg4;
- (id)init;

@end

