/*
 Copyright 2018-present the Material Components for iOS authors. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import "MDCButtonScheme.h"

#import "MaterialButtons.h"

#import <Foundation/Foundation.h>

/** Applies contained button style to MDCButton objects. */
@interface MDCContainedButtonThemer : NSObject

/**
 Applies the contaied button style using the button scheme data.

 @param scheme The button style data that should be used to change the @c button.
 @param button A MDCButton instance to apply the @c scheme
 */
+ (void)applyScheme:(nonnull id<MDCButtonScheming>)scheme
           toButton:(nonnull MDCButton *)button;

@end
