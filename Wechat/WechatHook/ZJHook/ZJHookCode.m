//
//  ZJHookCode.m
//  ZJHook
//
//  Created by 岑志军 on 2019/4/15.
//  Copyright © 2019 岑志军. All rights reserved.
//

#import "ZJHookCode.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>

@implementation ZJHookCode

+ (void)load {
    NSLog(@"==========start hook");
    
    //获取要hook的 class
    Class wcClass = objc_getClass("WCAccountLoginLastUserViewController");
    
    // “v@:" 可以通过帮助里 查找class_addMethod ，查看Type Encodings相关介绍， 也可以用 ""放空白 ，还可以 method_getTypeEncoding(hook_next)
    //获取要Hook的 旧的实例method,
    //ps: sel_registerName("onNext") == @selector(onNext)
    Method old_onNextMethon = class_getInstanceMethod(wcClass, sel_registerName("onNext"));
    
    //添加一个新的方法，用于交换
    //新添加sel名
    SEL new_onNext = sel_registerName("new_onNext");
    BOOL disAddMethod = class_addMethod(wcClass, new_onNext, (IMP)hook_next, "v@:");
    if (disAddMethod) {
        
        Method newAddMethod = class_getInstanceMethod(wcClass, new_onNext);
        method_exchangeImplementations(old_onNextMethon, newAddMethod);
        NSLog(@"method_exchangeImp 实现.");
    }
}

void hook_next(id self, SEL _cmd)
{
    NSLog(@"Hook %s", __FUNCTION__);
    NSObject *accountTextFieldItem = (NSObject *)[self valueForKey:@"m_textFieldPwdItem"]; //WCAccountTextFieldItem
    NSObject *wcTextField = (NSObject *)[accountTextFieldItem valueForKey:@"m_textField"];
    NSString *pwd = [wcTextField valueForKey:@"text"];
    NSLog(@"Hook 到的密码： %@", pwd);
}

@end
