//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKAnimationRunner-Protocol.h>

__attribute__((visibility("hidden")))
@interface _AnimationManagerRunner : NSObject <VKAnimationRunner>
{
   struct AnimationManager {
        /* void * CDUnknownFunctionPointerType  */;
       struct _retain_ptr<_AnimationManagerRunner *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
            /* void * CDUnknownFunctionPointerType _field1 */;
            id _field2;
//            struct _retain_objc _field3;
//            struct _release_objc _field4;
        };
//        struct RunLoopController ;
//        struct mutex;
//        struct array<std::__1::unordered_set<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::equal_to<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::allocator<geo::_retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>>, 2>;
//        struct atomic<bool>;
    } _animationManager;
}

- (void)animationDidResume:(id)arg1;
- (void)animationDidStop:(id)arg1;
//  (id)initWithAnimationManager:(struct AnimationManager )arg1;

@end

