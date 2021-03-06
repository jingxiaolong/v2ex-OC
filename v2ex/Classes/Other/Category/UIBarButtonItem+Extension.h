//
//  UIBarButtonItem+Extension.h
//  BaiDeJie
//
//  Created by 无头骑士 GJ on 16/1/19.
//  Copyright © 2016年 无头骑士 GJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (Extension)
/**
 *  设置UIBarButtonItem属性，并返回
 *
 *  @param image     图片
 *  @param highImage 高亮图片
 *  @param target    调用者
 *  @param action    调用者的方法
 *
 *  @return UIBarButtonItem
 */
+ (UIBarButtonItem * )setupBarButtonItemWithImage:(UIImage *)image highImage:(UIImage *)highImage addTarget:(id)target action:(SEL)action;


/**
 *  设置UIBarButtonItem属性，并返回
 *
 *  @param image     图片
 *  @param highImage 选中图片
 *  @param target    调用者
 *  @param action    调用者的方法
 *
 *  @return UIBarButtonItem
 */
+ (UIBarButtonItem * )setupBarButtonItemWithImage:(UIImage *)image selectedImage:(UIImage *)selectedImage addTarget:(id)target action:(SEL)action;

// 返回按钮
+ (UIBarButtonItem *)backItemWithImage:(UIImage *)image highImage:(UIImage *)highImage target:( id)target action:(SEL)action title:(NSString *)title;
@end
