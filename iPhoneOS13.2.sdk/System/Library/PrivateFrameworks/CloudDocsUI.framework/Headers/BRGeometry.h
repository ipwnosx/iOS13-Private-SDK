//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString;

@interface BRGeometry : NSObject <NSCoding>
{
    BOOL _hasAmbiguousLayout;
    BOOL _isClipped;
    NSString *_name;
    NSString *_contentDescription;
    NSArray *_subitems;
    CGRect _absoluteFrame;
}

+ (void)initialize;
@property(copy, nonatomic) NSArray *subitems; // @synthesize subitems=_subitems;
@property(copy, nonatomic) NSString *contentDescription; // @synthesize contentDescription=_contentDescription;
@property(nonatomic) BOOL isClipped; // @synthesize isClipped=_isClipped;
@property(nonatomic) BOOL hasAmbiguousLayout; // @synthesize hasAmbiguousLayout=_hasAmbiguousLayout;
@property(nonatomic) CGRect absoluteFrame; // @synthesize absoluteFrame=_absoluteFrame;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)data;
- (BOOL)isValidForGeometryValidation:(NSUInteger)arg1 offendingGeometry:(id )arg2;
- (BOOL)isEqualToTemplate:(id)arg1 diagnostic:(id )arg2;
- (id)description;
- (id)recursiveDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithView:(id)arg1 rootView:(id)arg2;
- (id)gatherSubviews:(id)arg1;
- (id)initWithView:(id)arg1;

@end

