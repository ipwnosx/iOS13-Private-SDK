//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface _UIWeakReference : NSObject <NSCopying>
{
    id _object;
}

+ (id)weakReferenceWrappingObject:(id)arg1;
@property(nonatomic) __weak id object; // @synthesize object=_object;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithObject:(id)arg1;

@end

