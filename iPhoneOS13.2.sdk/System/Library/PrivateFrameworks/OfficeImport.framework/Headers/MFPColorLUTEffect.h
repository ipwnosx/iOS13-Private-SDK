//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/MFPEffect.h>

__attribute__((visibility("hidden")))
@interface MFPColorLUTEffect : MFPEffect
{
    unsigned char mLutA[256];
    unsigned char mLutR[256];
    unsigned char mLutG[256];
    unsigned char mLutB[256];
}

+ (id)GUID;
- (id)initWithLUTA:(unsigned char [256])arg1 LUTR:(unsigned char [256])arg2 LUTG:(unsigned char [256])arg3 LUTB:(unsigned char [256])arg4;

@end

