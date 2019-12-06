//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class REElement, RESectionPath;

@interface REElementUpdateOperation : NSObject
{
    REElement *_element;
    RESectionPath *_path;
    RESectionPath *_movedToPath;
    NSUInteger _type;
}

+ (id)refreshElement:(id)arg1 atPath:(id)arg2;
+ (id)moveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3;
+ (id)removeElement:(id)arg1 atPath:(id)arg2;
+ (id)insertElement:(id)arg1 atPath:(id)arg2;
+ (id)reloadElement:(id)arg1 atPath:(id)arg2;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
@property(readonly, nonatomic) RESectionPath *movedToPath; // @synthesize movedToPath=_movedToPath;
@property(readonly, nonatomic) RESectionPath *path; // @synthesize path=_path;
@property(readonly, nonatomic) REElement *element; // @synthesize element=_element;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithElement:(id)arg1 path:(id)arg2 newPath:(id)arg3 updateType:(NSUInteger)arg4;

@end

