#DProperty

Making it possible to add a property in a Objective-C category

##How is it done?

Using `Associated Objects`.  
for more details  
http://stackoverflow.com/questions/8733104/objective-c-property-instance-variable-in-category/8733320#8733320

##Awesome! So, how do I use it?

Nothing special. Just add a property normally in a @interface and use @dynamic in an @implementation.

YourClass.h
```
@interface YourClass (YourCategory)

@property NSString *yourProperty;

@end
```

YourClass.m
```
@implementation YourClass (YourCategory)

@dynamic yourProperty;

@end
```

##License
DProperty is released under the MIT-license.
