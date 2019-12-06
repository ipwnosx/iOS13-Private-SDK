//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKCSSParseObject.h>

@class IKArray, IKCSSParseBlock;

@interface IKCSSParseRule : IKCSSParseObject
{
    IKArray *_prelude;
    IKCSSParseBlock *_block;
    NSRange * __endRange;
}

@property(nonatomic, setter=_setEndRange:) NSRange * _endRange; // @synthesize _endRange=__endRange;
@property(retain, nonatomic) IKCSSParseBlock *block; // @synthesize block=_block;
@property(retain, nonatomic) IKArray *prelude; // @synthesize prelude=_prelude;
// - (void).cxx_destruct;
- (id)description;
- (NSRange *)range;
- (id)init;

@end

