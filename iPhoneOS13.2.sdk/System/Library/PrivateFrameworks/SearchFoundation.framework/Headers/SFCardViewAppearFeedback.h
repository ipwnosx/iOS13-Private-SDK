//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSString, SFCard;

@interface SFCardViewAppearFeedback : SFFeedback
{
    unsigned int _level;
    SFCard *_card;
    NSString *_fbr;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(nonatomic) unsigned int level; // @synthesize level=_level;
@property(retain, nonatomic) SFCard *card; // @synthesize card=_card;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCard:(id)arg1;

@end

