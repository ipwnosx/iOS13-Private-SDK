//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputChinese/TIWordSearchShapeBased.h>

@interface TIWordSearchCangjie : TIWordSearchShapeBased
{
    BOOL _suchengEnabled;
    BOOL _supportsEnglish;
}

@property BOOL supportsEnglish; // @synthesize supportsEnglish=_supportsEnglish;
@property BOOL suchengEnabled; // @synthesize suchengEnabled=_suchengEnabled;
- (BOOL)validateCode:(id)arg1 withOption:(NSUInteger)arg2;
- (id)uncachedCandidatesForOperation:(id)arg1;
- (id)initTIWordSearchWithInputMode:(id)arg1;
- (int)mecabraInputMethodType;

@end

