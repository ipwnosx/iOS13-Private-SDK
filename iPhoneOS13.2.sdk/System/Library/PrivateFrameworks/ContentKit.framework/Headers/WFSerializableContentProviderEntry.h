//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFSerializableContentProviderEntry : NSObject
{
    id /* CDUnknownBlockType */ _serializationBlock;
    id /* CDUnknownBlockType */ _deserializationBlock;
}

@property(readonly, nonatomic) id /* CDUnknownBlockType */ deserializationBlock; // @synthesize deserializationBlock=_deserializationBlock;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ serializationBlock; // @synthesize serializationBlock=_serializationBlock;
// - (void).cxx_destruct;
- (id)initWithSerializedRepresentationBlock:(CDUnknownBlockType)arg1 deserializationBlock:(CDUnknownBlockType)arg2;

@end

