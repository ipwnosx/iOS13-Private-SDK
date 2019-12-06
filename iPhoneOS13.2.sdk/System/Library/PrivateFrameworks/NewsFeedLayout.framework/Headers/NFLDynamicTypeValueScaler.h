//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NFLDynamicTypeValueScaler : NSObject
{
    double _XS;
    double _S;
    double _M;
    double _L;
    double _XL;
    double _XXL;
    double _XXXL;
    double _AM;
    double _AL;
    double _AXL;
    double _AXXL;
    double _AXXXL;
}

+ (id)valueSpecifierWithXSFactor:(double)arg1 largeSize:(double)arg2 XXXLFactor:(double)arg3 AXXXLFactor:(double)arg4;
+ (id)valueSpecifierWithXS:(double)arg1 L:(double)arg2 XXXL:(double)arg3 AXXXL:(double)arg4;
@property(nonatomic) double AXXXL; // @synthesize AXXXL=_AXXXL;
@property(nonatomic) double AXXL; // @synthesize AXXL=_AXXL;
@property(nonatomic) double AXL; // @synthesize AXL=_AXL;
@property(nonatomic) double AL; // @synthesize AL=_AL;
@property(nonatomic) double AM; // @synthesize AM=_AM;
@property(nonatomic) double XXXL; // @synthesize XXXL=_XXXL;
@property(nonatomic) double XXL; // @synthesize XXL=_XXL;
@property(nonatomic) double XL; // @synthesize XL=_XL;
@property(nonatomic) double L; // @synthesize L=_L;
@property(nonatomic) double M; // @synthesize M=_M;
@property(nonatomic) double S; // @synthesize S=_S;
@property(nonatomic) double XS; // @synthesize XS=_XS;
- (void)_nextSpecifiedCategoryStartingAtCategory:(id)arg1 outValue:(double )arg2 outIndex:(NSUInteger )arg3;
- (void)_previousSpecifiedCategoryStartingAtCategory:(id)arg1 outValue:(double )arg2 outIndex:(NSUInteger )arg3;
@property(readonly, nonatomic) NSArray *orderedSizeCategories;
- (double)specifiedValueForContentSizeCategory:(id)arg1;
- (double)scaledValueForSizeCategory:(id)arg1;
- (double)scaledValueForCurrentPreferredSizeCategory;
- (id)initWithWithXS:(double)arg1 S:(double)arg2 M:(double)arg3 L:(double)arg4 XL:(double)arg5 XXL:(double)arg6 XXXL:(double)arg7 AM:(double)arg8 AL:(double)arg9 AXL:(double)arg10 AXXL:(double)arg11 AXXXL:(double)arg12;
- (id)init;

@end

