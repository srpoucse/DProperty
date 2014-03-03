#DProperty

Making it possible to add a property in a Objective-C category

##How is it done?

see http://stackoverflow.com/questions/8733104/objective-c-property-instance-variable-in-category

##Awesome! So, how do I use it?

Nothing special. Just add property normally in a @interface and use @dynamic in an @implementation.
```
@interface YourClass (YourCategory)

@property NSString *yourProperty;

@end

@implementation YourClass (YourCategory)

@dynamic yourProperty;

@end
```

##License
DProperty is released under the MIT-license
