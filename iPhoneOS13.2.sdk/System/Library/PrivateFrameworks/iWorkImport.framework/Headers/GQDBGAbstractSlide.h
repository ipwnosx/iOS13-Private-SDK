//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GQDBGBodyPlaceholder, GQDBGObjectPlaceholder, GQDBGSlideNumberPlaceholder, GQDBGTitlePlaceholder, GQDSStyle, GQDSStylesheet;

__attribute__((visibility("hidden")))
@interface GQDBGAbstractSlide : NSObject
{
    GQDSStylesheet *mStylesheet;
    GQDSStyle *mSlideStyle;
    GQDBGTitlePlaceholder *mTitlePlaceholder;
    GQDBGBodyPlaceholder *mBodyPlaceholder;
    GQDBGObjectPlaceholder *mObjectPlaceholder;
    GQDBGSlideNumberPlaceholder *mSlideNumberPlaceholder;
    BOOL mHidden;
    char mID;
    BOOL mCallGenerator;
}

// - (int)readAttributesForSlide:(struct _xmlTextReader )arg1;
- (char )ID;
- (BOOL)isHidden;
- (id)stylesheet;
- (id)slideStyle;
- (void)dealloc;

@end

