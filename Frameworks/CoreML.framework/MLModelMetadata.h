/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLModelMetadata : NSObject {
    NSString * _author;
    NSDictionary * _creatorDefined;
    NSString * _license;
    NSString * _name;
    NSString * _shortDescription;
    NSString * _versionString;
}

@property (readonly) NSString *author;
@property (readonly) NSDictionary *creatorDefined;
@property (readonly) NSString *license;
@property (readonly) NSString *name;
@property (readonly) NSString *shortDescription;
@property (readonly) NSString *versionString;

- (void).cxx_destruct;
- (id)author;
- (id)creatorDefined;
- (id)debugDescription;
- (id)initWithMetadataFormat:(struct _MLModelMetadataSpecification { struct shared_ptr<CoreML::Specification::Metadata> { struct Metadata {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 shortDescription:(id)arg2 versionString:(id)arg3 author:(id)arg4 license:(id)arg5 creatorDefined:(id)arg6;
- (id)initWithSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;
- (id)license;
- (id)name;
- (id)shortDescription;
- (id)versionString;

@end
