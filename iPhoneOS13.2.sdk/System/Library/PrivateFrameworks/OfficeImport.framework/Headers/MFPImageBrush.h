//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/MFPBrush.h>

@class OITSUColor, OITSUImage;

__attribute__((visibility("hidden")))
@interface MFPImageBrush : MFPBrush
{
    OITSUImage *mPhoneImage;
    OITSUColor *mPhonePatternColor;
}

// - (void).cxx_destruct;
- (id)color;
- (void)fillPath:(id)arg1;
- (id)initWithPhoneImage:(id)arg1;

@end

