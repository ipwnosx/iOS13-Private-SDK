//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OAXClient.h>

__attribute__((visibility("hidden")))
@interface EXOfficeArtClient : OAXClient
{
    BOOL mAutoChartFillIsHollow;
    BOOL mAutoChartStrokeIsHollow;
}

@property BOOL autoChartStrokeIsHollow; // @synthesize autoChartStrokeIsHollow=mAutoChartStrokeIsHollow;
@property BOOL autoChartFillIsHollow; // @synthesize autoChartFillIsHollow=mAutoChartFillIsHollow;
- (BOOL)chartAutoStrokeIsHollow;
- (BOOL)chartAutoFillIsHollow;
// - (void)readClientDataFromNode:(struct _xmlNode )arg1 toDrawable:(id)arg2 state:(id)arg3;

@end

