//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFResultFeedback.h>


@class NSString;

@interface SFResultGradingFeedback : SFResultFeedback <NSCopying>
{
    NSUInteger _grade;
    NSString *_textFeedback;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *textFeedback; // @synthesize textFeedback=_textFeedback;
@property(readonly, nonatomic) NSUInteger grade; // @synthesize grade=_grade;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1 grade:(NSUInteger)arg2 textFeedback:(id)arg3;
- (id)initWithResult:(id)arg1 grade:(NSUInteger)arg2;

@end

