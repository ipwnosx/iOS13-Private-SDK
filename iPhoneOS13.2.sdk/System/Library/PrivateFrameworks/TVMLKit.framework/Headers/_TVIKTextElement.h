//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKTextElement.h>

@class NSAttributedString;

@interface _TVIKTextElement : IKTextElement
{
    NSAttributedString *_cachedAttributedString;
}

@property(copy, nonatomic) NSAttributedString *cachedAttributedString; // @synthesize cachedAttributedString=_cachedAttributedString;
// - (void).cxx_destruct;
- (void)_stylesMarkedDirtyNotification:(id)arg1;
- (void)dealloc;

@end

