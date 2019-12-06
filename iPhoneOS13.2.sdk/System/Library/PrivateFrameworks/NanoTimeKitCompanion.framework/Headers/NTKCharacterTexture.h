//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLTexture;

@interface NTKCharacterTexture : NSObject
{
    unsigned int _gid;
    const void *_data;
    int _length;
    id <MTLTexture> _mtlTexture;
}

@property(retain, nonatomic) id <MTLTexture> mtlTexture; // @synthesize mtlTexture=_mtlTexture;
@property(readonly, nonatomic) int length; // @synthesize length=_length;
@property(readonly, nonatomic) const void *data; // @synthesize data=_data;
@property(nonatomic) unsigned int gid; // @synthesize gid=_gid;
// - (void).cxx_destruct;
- (id)initWithData:(const void *)arg1 length:(int)arg2;

@end

