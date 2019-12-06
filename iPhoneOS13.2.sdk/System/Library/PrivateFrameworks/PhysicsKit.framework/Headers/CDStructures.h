//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MISSING_TYPE, NSMutableDictionary;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct PKCAether {
    struct vector<std::__1::weak_ptr<PKCField>, std::__1::allocator<std::__1::weak_ptr<PKCField>>> _field1;
};

struct PKCField;

struct PKCGrid {
    int _field1;
    int _field2;
    int _field3;
    struct Range _field4;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _field5;
    struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))>> _field6;
    struct vector<int, std::__1::allocator<int>> _field7;
    struct vector<signed char, std::__1::allocator<signed char>> _field8;
};

struct PKCMechanics {
    struct b2World _field1;
    struct vector<QuadTree *, std::__1::allocator<QuadTree *>> _field2;
};

struct PKCPathHolder;

struct PKContactListener {
    /* void * CDUnknownFunctionPointerType _vptr$b2ContactListener */;
    NSMutableDictionary *_contacts;
    id _contactDelegate;
};

struct PKDebugDrawPacket {
    struct vector<PKPoint, std::__1::allocator<PKPoint>> _linePoints;
    struct vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4>> _colors;
};

struct PKPath {
    float _field1;
    struct vector<PKPoint, std::__1::allocator<PKPoint>> _field2;
    CGPathRef_field3;
};

struct PKPhysicsShape {
    struct b2FixtureDef _field1;
    struct b2Fixture _field2;
};

struct QuadTree;

struct Range {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
};

struct __hash_node_base<std::__1::__hash_node<b2Contact *, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<b2Contact *, void *>*> _field1;
};

struct __hash_node_base<std::__1::__hash_node<int, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<int, void *>*> _field1;
};

struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *>*> _field1;
};

struct __shared_weak_count;

struct b2Body {
    BOOL _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    int _field6;
    unsigned short _field7;
    int _field8;
    struct b2Transform _field9;
    struct b2Transform _field10;
    struct b2Sweep _field11;
    struct b2Vec2 _field12;
    float _field13;
    struct b2Vec2 _field14;
    float _field15;
    struct b2World _field16;
    struct b2Body _field17;
    struct b2Body _field18;
    struct b2Fixture _field19;
    int _field20;
    struct b2JointEdge _field21;
    struct b2ContactEdge _field22;
    float _field23;
    float _field24;
    float _field25;
    float _field26;
    float _field27;
    float _field28;
    float _field29;
    float _field30;
    void _field31;
};

struct b2BodyDef {
    BOOL _sk_affectedByGravity;
    unsigned int _sk_fieldCategoryBitMask;
    unsigned int _sk_categoryBitMask;
    unsigned int _sk_collisionBitMask;
    unsigned int _sk_intersectionCallbackBitMask;
    int type;
    struct b2Vec2 position;
    float angle;
    struct b2Vec2 linearVelocity;
    float angularVelocity;
    float charge;
    float linearDamping;
    float angularDamping;
    BOOL allowSleep;
    BOOL awake;
    BOOL fixedRotation;
    BOOL bullet;
    BOOL active;
    void userData;
};

struct b2ContactEdge;

struct b2ContactListener;

struct b2ContactManager {
    struct b2ContactListener _field1;
    int _field2;
    struct b2DynamicTree _field3;
    struct unordered_set<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int>> _field4;
    struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long>> _field5;
    struct unordered_set<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *>> _field6;
    int _field7;
};

struct b2DestructionListener;

struct b2DistanceJoint {
    /* void * CDUnknownFunctionPointerType _field1 */;
    int _field2;
    struct b2Joint _field3;
    struct b2Joint _field4;
    struct b2JointEdge _field5;
    struct b2JointEdge _field6;
    struct b2Body _field7;
    struct b2Body _field8;
    BOOL _field9;
    BOOL _field10;
    void _field11;
    float _field12;
    float _field13;
    float _field14;
    struct b2Vec2 _field15;
    struct b2Vec2 _field16;
    float _field17;
    float _field18;
    float _field19;
    int _field20;
    int _field21;
    struct b2Vec2 _field22;
    struct b2Vec2 _field23;
    struct b2Vec2 _field24;
    struct b2Vec2 _field25;
    struct b2Vec2 _field26;
    float _field27;
    float _field28;
    float _field29;
    float _field30;
    float _field31;
};

struct b2DistanceJointDef {
    int type;
    void userData;
    struct b2Body bodyA;
    struct b2Body bodyB;
    BOOL collideConnected;
    struct b2Vec2 localAnchorA;
    struct b2Vec2 localAnchorB;
    float length;
    float frequencyHz;
    float dampingRatio;
};

struct b2Draw;

struct b2DynamicTree {
    int _field1;
    struct b2TreeNode _field2;
    int _field3;
    int _field4;
    int _field5;
    unsigned int _field6;
    int _field7;
};

struct b2Fixture;

struct b2FixtureDef {
    struct b2Shape _field1;
    void _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
};

struct b2Joint {
    /* void * CDUnknownFunctionPointerType _field1 */;
    int _field2;
    struct b2Joint _field3;
    struct b2Joint _field4;
    struct b2JointEdge _field5;
    struct b2JointEdge _field6;
    struct b2Body _field7;
    struct b2Body _field8;
    BOOL _field9;
    BOOL _field10;
    void _field11;
};

struct b2JointDef {
    int _field1;
    void _field2;
    struct b2Body _field3;
    struct b2Body _field4;
    BOOL _field5;
};

struct b2JointEdge {
    struct b2Body _field1;
    struct b2Joint _field2;
    struct b2JointEdge _field3;
    struct b2JointEdge _field4;
};

struct b2Mat33 {
    struct b2Vec3 _field1;
    struct b2Vec3 _field2;
    struct b2Vec3 _field3;
};

struct b2PrismaticJoint {
    /* void * CDUnknownFunctionPointerType _field1 */;
    int _field2;
    struct b2Joint _field3;
    struct b2Joint _field4;
    struct b2JointEdge _field5;
    struct b2JointEdge _field6;
    struct b2Body _field7;
    struct b2Body _field8;
    BOOL _field9;
    BOOL _field10;
    void _field11;
    struct b2Vec2 _field12;
    struct b2Vec2 _field13;
    struct b2Vec2 _field14;
    struct b2Vec2 _field15;
    float _field16;
    struct b2Vec3 _field17;
    float _field18;
    float _field19;
    float _field20;
    float _field21;
    float _field22;
    BOOL _field23;
    BOOL _field24;
    int _field25;
    int _field26;
    int _field27;
    struct b2Vec2 _field28;
    struct b2Vec2 _field29;
    float _field30;
    float _field31;
    float _field32;
    float _field33;
    struct b2Vec2 _field34;
    struct b2Vec2 _field35;
    float _field36;
    float _field37;
    float _field38;
    float _field39;
    struct b2Mat33 _field40;
    float _field41;
};

struct b2PrismaticJointDef {
    int type;
    void userData;
    struct b2Body bodyA;
    struct b2Body bodyB;
    BOOL collideConnected;
    struct b2Vec2 localAnchorA;
    struct b2Vec2 localAnchorB;
    struct b2Vec2 localAxisA;
    float referenceAngle;
    BOOL enableLimit;
    float lowerTranslation;
    float upperTranslation;
    BOOL enableMotor;
    float maxMotorForce;
    float motorSpeed;
};

struct b2RevoluteJoint {
    /* void * CDUnknownFunctionPointerType _field1 */;
    int _field2;
    struct b2Joint _field3;
    struct b2Joint _field4;
    struct b2JointEdge _field5;
    struct b2JointEdge _field6;
    struct b2Body _field7;
    struct b2Body _field8;
    BOOL _field9;
    BOOL _field10;
    void _field11;
    struct b2Vec2 _field12;
    struct b2Vec2 _field13;
    struct b2Vec3 _field14;
    float _field15;
    BOOL _field16;
    float _field17;
    float _field18;
    BOOL _field19;
    float _field20;
    float _field21;
    float _field22;
    int _field23;
    int _field24;
    struct b2Vec2 _field25;
    struct b2Vec2 _field26;
    struct b2Vec2 _field27;
    struct b2Vec2 _field28;
    float _field29;
    float _field30;
    float _field31;
    float _field32;
    struct b2Mat33 _field33;
    float _field34;
    int _field35;
};

struct b2RevoluteJointDef {
    int type;
    void userData;
    struct b2Body bodyA;
    struct b2Body bodyB;
    BOOL collideConnected;
    struct b2Vec2 localAnchorA;
    struct b2Vec2 localAnchorB;
    float referenceAngle;
    BOOL enableLimit;
    float lowerAngle;
    float upperAngle;
    BOOL enableMotor;
    float motorSpeed;
    float maxMotorTorque;
};

struct b2RopeJoint {
    /* void * CDUnknownFunctionPointerType _field1 */;
    int _field2;
    struct b2Joint _field3;
    struct b2Joint _field4;
    struct b2JointEdge _field5;
    struct b2JointEdge _field6;
    struct b2Body _field7;
    struct b2Body _field8;
    BOOL _field9;
    BOOL _field10;
    void _field11;
    struct b2Vec2 _field12;
    struct b2Vec2 _field13;
    float _field14;
    float _field15;
    float _field16;
    int _field17;
    int _field18;
    struct b2Vec2 _field19;
    struct b2Vec2 _field20;
    struct b2Vec2 _field21;
    struct b2Vec2 _field22;
    struct b2Vec2 _field23;
    float _field24;
    float _field25;
    float _field26;
    float _field27;
    float _field28;
    int _field29;
};

struct b2RopeJointDef {
    int type;
    void userData;
    struct b2Body bodyA;
    struct b2Body bodyB;
    BOOL collideConnected;
    struct b2Vec2 localAnchorA;
    struct b2Vec2 localAnchorB;
    float maxLength;
};

struct b2Rot {
    float _field1;
    float _field2;
};

struct b2Shape;

struct b2StackAllocator {
    char _field1[102400];
    int _field2;
    int _field3;
    int _field4;
    struct b2StackEntry _field5[32];
    int _field6;
};

struct b2StackEntry {
    char _field1;
    int _field2;
    BOOL _field3;
};

struct b2Sweep {
    struct b2Vec2 _field1;
    union b2Position _field2;
    union b2Position _field3;
    float _field4;
};

struct b2Transform {
    struct b2Vec2 _field1;
    struct b2Rot _field2;
};

struct b2TreeNode;

struct b2Vec2 {
    float x;
    float y;
};

struct b2Vec3 {
    float _field1;
    float _field2;
    float _field3;
};

struct b2WeldJoint {
    /* void * CDUnknownFunctionPointerType _field1 */;
    int _field2;
    struct b2Joint _field3;
    struct b2Joint _field4;
    struct b2JointEdge _field5;
    struct b2JointEdge _field6;
    struct b2Body _field7;
    struct b2Body _field8;
    BOOL _field9;
    BOOL _field10;
    void _field11;
    struct b2Vec2 _field12;
    struct b2Vec2 _field13;
    float _field14;
    struct b2Vec3 _field15;
    int _field16;
    int _field17;
    struct b2Vec2 _field18;
    struct b2Vec2 _field19;
    struct b2Vec2 _field20;
    struct b2Vec2 _field21;
    float _field22;
    float _field23;
    float _field24;
    float _field25;
    struct b2Mat33 _field26;
};

struct b2WeldJointDef {
    int type;
    void userData;
    struct b2Body bodyA;
    struct b2Body bodyB;
    BOOL collideConnected;
    struct b2Vec2 localAnchorA;
    struct b2Vec2 localAnchorB;
    float referenceAngle;
};

struct b2World {
    struct b2StackAllocator _field1;
    int _field2;
    struct b2ContactManager _field3;
    struct b2Body _field4;
    struct b2Joint _field5;
    int _field6;
    int _field7;
    struct PKCAether _field8;
    BOOL _field9;
    struct b2DestructionListener _field10;
    struct b2Draw _field11;
    float _field12;
    BOOL _field13;
    BOOL _field14;
    BOOL _field15;
    BOOL _field16;
    double _field17;
    float _field18;
    struct PKCMechanics _field19;
};

struct shared_ptr<PKCField> {
    struct PKCField __ptr_;
    struct __shared_weak_count __cntrl_;
};

struct shared_ptr<PKCGrid> {
    struct PKCGrid __ptr_;
    struct __shared_weak_count __cntrl_;
};

struct shared_ptr<PKCPathHolder> {
    struct PKCPathHolder __ptr_;
    struct __shared_weak_count __cntrl_;
};

struct shared_ptr<PKPath> {
    struct PKPath __ptr_;
    struct __shared_weak_count __cntrl_;
};

struct shared_ptr<QuadTree> {
    struct QuadTree __ptr_;
    struct __shared_weak_count __cntrl_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<b2Contact *, void *>*> _field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *>*>*>> {
                NSUInteger _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<int, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<int, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<int, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<int, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<int, void *>*> _field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<int, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<int, void *>*>*>> {
                NSUInteger _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *>*> _field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>*>> {
                NSUInteger _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_set<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *>> {
    struct __hash_table<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *>*>, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<b2Contact *, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::hash<b2Contact *>> {
            NSUInteger _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::equal_to<b2Contact *>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_set<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int>> {
    struct __hash_table<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<int, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<int, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<int, void *>*>, std::__1::allocator<std::__1::__hash_node<int, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<int, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::hash<int>> {
            NSUInteger _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::equal_to<int>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long>> {
    struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *>*>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long>> {
            NSUInteger _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::equal_to<unsigned long long>> {
            float _field1;
        } _field4;
    } _field1;
};

struct vec4 {
    MISSING_TYPE *v;
};

struct vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4>> {
    CDStruct_183601bc __begin_;
    CDStruct_183601bc __end_;
    struct __compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4>> {
        CDStruct_183601bc __value_;
    } __end_cap_;
};

struct vector<PKPhysicsShape *, std::__1::allocator<PKPhysicsShape *>> {
    struct PKPhysicsShape __begin_;
    struct PKPhysicsShape __end_;
    struct __compressed_pair<PKPhysicsShape **, std::__1::allocator<PKPhysicsShape *>> {
        struct PKPhysicsShape __value_;
    } __end_cap_;
};

struct vector<PKPoint, std::__1::allocator<PKPoint>> {
    CDStruct_183601bc __begin_;
    CDStruct_183601bc __end_;
    struct __compressed_pair<PKPoint *, std::__1::allocator<PKPoint>> {
        CDStruct_183601bc __value_;
    } __end_cap_;
};

struct vector<QuadTree *, std::__1::allocator<QuadTree *>> {
    struct QuadTree _field1;
    struct QuadTree _field2;
    struct __compressed_pair<QuadTree **, std::__1::allocator<QuadTree *>> {
        struct QuadTree _field1;
    } _field3;
};

struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))>> {
    struct __compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))>> {
        void _field1;
    } _field1;
};

struct vector<int, std::__1::allocator<int>> {
    int _field1;
    int _field2;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int _field1;
    } _field3;
};

struct vector<signed char, std::__1::allocator<signed char>> {
    char _field1;
    char _field2;
    struct __compressed_pair<signed char *, std::__1::allocator<signed char>> {
        char _field1;
    } _field3;
};

struct vector<std::__1::weak_ptr<PKCField>, std::__1::allocator<std::__1::weak_ptr<PKCField>>> {
    struct weak_ptr<PKCField> _field1;
    struct weak_ptr<PKCField> _field2;
    struct __compressed_pair<std::__1::weak_ptr<PKCField>*, std::__1::allocator<std::__1::weak_ptr<PKCField>>> {
        struct weak_ptr<PKCField> _field1;
    } _field3;
};

struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char _field1;
    char _field2;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char _field1;
    } _field3;
};

struct weak_ptr<PKCField>;

#pragma mark Typedef'd Structures

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct CDStruct_183601bc;

typedef struct {
    CDStruct_b2fbf00d _field1;
    CDStruct_b2fbf00d _field2;
} CDStruct_c7fe8b62;

// Template types
typedef struct shared_ptr<PKCField> {
    struct PKCField __ptr_;
    struct __shared_weak_count __cntrl_;
} shared_ptr_307a0f33;

typedef struct shared_ptr<PKCGrid> {
    struct PKCGrid __ptr_;
    struct __shared_weak_count __cntrl_;
} shared_ptr_c9c6a83f;

typedef struct shared_ptr<PKPath> {
    struct PKPath __ptr_;
    struct __shared_weak_count __cntrl_;
} shared_ptr_2aaf3a07;

typedef struct shared_ptr<QuadTree> {
    struct QuadTree __ptr_;
    struct __shared_weak_count __cntrl_;
} shared_ptr_639e7c03;

typedef struct vector<PKPhysicsShape *, std::__1::allocator<PKPhysicsShape *>> {
    struct PKPhysicsShape __begin_;
    struct PKPhysicsShape __end_;
    struct __compressed_pair<PKPhysicsShape **, std::__1::allocator<PKPhysicsShape *>> {
        struct PKPhysicsShape __value_;
    } __end_cap_;
} vector_8416aa54;

#pragma mark Named Unions

union _GLKMatrix4 {
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        float _field5;
        float _field6;
        float _field7;
        float _field8;
        float _field9;
        float _field10;
        float _field11;
        float _field12;
        float _field13;
        float _field14;
        float _field15;
        float _field16;
    } _field1;
    float _field2[16];
};

union b2Position {
    struct {
        struct b2Vec2 _field1;
        float _field2;
        float _field3;
    } _field1;
};

