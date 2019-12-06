//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface TSDTextRange : UITextRange
{
    NSRange * _range;
    BOOL _eolAffinity;
    float _preferredStartPosition;
    float _preferredEndPosition;
}

+ (id)textRangeWithRange:(NSRange *)arg1 eolAffinity:(BOOL)arg2 preferredStartPosition:(float)arg3 preferredEndPosition:(float)arg4;
+ (id)textRangeWithRange:(NSRange *)arg1;
@property(readonly, nonatomic) float preferredEndPosition; // @synthesize preferredEndPosition=_preferredEndPosition;
@property(readonly, nonatomic) float preferredStartPosition; // @synthesize preferredStartPosition=_preferredStartPosition;
@property(nonatomic) BOOL isAtEndOfLine; // @synthesize isAtEndOfLine=_eolAffinity;
@property(nonatomic) NSRange * range; // @synthesize range=_range;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEmpty;
- (id)end;
- (id)start;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithRange:(NSRange *)arg1 eolAffinity:(BOOL)arg2 preferredStartPosition:(float)arg3 preferredEndPosition:(float)arg4;
- (id)initWithRange:(NSRange *)arg1;

@end

