//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/MFPhoneBrush.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPhoneSolidBrush : MFPhoneBrush
{
    OITSUColor *m_colour;
}

+ (id)solidBrushWithColour:(id)arg1;
// - (void).cxx_destruct;
- (void)fillPath:(id)arg1 in_path:(id)arg2;
- (id)initWithColour:(id)arg1;

@end

