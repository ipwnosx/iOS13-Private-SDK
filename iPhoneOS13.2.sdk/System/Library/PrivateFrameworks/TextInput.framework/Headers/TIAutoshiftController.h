//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TITextInputTraits;

@interface TIAutoshiftController : NSObject
{
    BOOL _enabled;
    TITextInputTraits *_textInputTraits;
}

@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) TITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
// - (void).cxx_destruct;
- (BOOL)isSelectionAtSentenceAutoshiftBoundaryWithDocumentState:(id)arg1 inputManagerState:(id)arg2;
- (NSUInteger)actionForDocumentState:(id)arg1 inputMangerState:(id)arg2;
- (id)initWithTextInputTraits:(id)arg1;

@end

