//
//  DispatchUntil.swift
//  WaveLabs
//
//  Created by Vlad Gorlov on 10/01/2017.
//  Copyright © 2017 WaveLabs. All rights reserved.
//

import Foundation

public final class DispatchUntil {

   private var mIsFulfilled = false

   public var isFulfilled: Bool {
      return mIsFulfilled
   }

   public init() {

   }

   public func performIfNeeded(block: () -> Void) {
      if !mIsFulfilled {
         block()
      }
   }

   public func fulfill() {
      if !mIsFulfilled {
         mIsFulfilled = true
      }
   }

}