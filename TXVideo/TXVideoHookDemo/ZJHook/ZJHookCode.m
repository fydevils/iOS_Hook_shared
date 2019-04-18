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

+ (void)load{
    
    NSLog(@"hook start========");
    
    // 拿到需要hook的类
    Class playerClass = objc_getClass("QNBPlayerVideoAdsViewController");
    
    // 需要hook的方法选择器
    SEL originSelector = sel_registerName("initWithEventProxy:withPlayerInfo:withParentViewController:withParentEventViewController:withAddToParenViewControllerNow:");
    Method originMethod = class_getInstanceMethod(playerClass, originSelector);
    
    // 创建一个新的方法选择器
    SEL newSelector = sel_registerName("newSelector");
    
    BOOL isAddSuccess = class_addMethod(playerClass, newSelector, (IMP)hookAdsView, method_getTypeEncoding(originMethod));
    if (isAddSuccess) {
        
        class_replaceMethod(playerClass, originSelector, (IMP)hookAdsView, method_getTypeEncoding(originMethod));
        
        NSLog(@"method_exchangeImp 实现.");
    }
}

id hookAdsView(id self, SEL _cmd){
    NSLog(@"Hook %s", __FUNCTION__);
    
    return nil;
}

//- (id)initWithEventProxy:(id)arg1 withPlayerInfo:(id)arg2 withParentViewController:(id)arg3 withPageViewController:(id)arg4 withAddToParenViewControllerNow:(_Bool)arg5;
//- (id)initWithEventProxy:(id)arg1 withPlayerInfo:(id)arg2 withParentViewController:(id)arg3 withParentEventViewController:(id)arg4 withAddToParenViewControllerNow:(_Bool)arg5;
//- (id)initWithEventProxy:(id)arg1 withPlayerInfo:(id)arg2 withParentViewController:(id)arg3 withAddToParenViewControllerNow:(_Bool)arg4;
//- (id)initWithEventProxy:(id)arg1 withPlayerInfo:(id)arg2 withParentViewController:(id)arg3 withParentEventViewController:(id)arg4;
//- (id)initWithEventProxy:(id)arg1 withPlayerInfo:(id)arg2 withParentViewController:(id)arg3;

@end
