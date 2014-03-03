#import <objc/runtime.h>

@interface DPPPropertyAttribute : NSObject

@property(nonatomic) int retentionMethod;
@property(nonatomic) BOOL dynamic;
@property(nonatomic) char type;
@property(strong, nonatomic) id key;

+ (DPPPropertyAttribute*) propertyWithClass:(id)class propertyName:(NSString*)propertyName;

@end
