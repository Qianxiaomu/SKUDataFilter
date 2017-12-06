//
//  UITextField+ORIBProperty.h
//  BaidiLuxury
//
//  Created by OrangesAL on 2017/11/13.
//  Copyright © 2017年 OrangesAL. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE

@interface UITextField (ORIBProperty)

//字体大小适配
@property (nonatomic, assign) IBInspectable BOOL adaptFont;

@end
